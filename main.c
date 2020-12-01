#include <nusys.h>
#include <nualsgi_n.h>
#include "main.h"
#include "segmentinfo.h"
#include "hvqm.h"

#include "stage00.h"
#include "fmvstage.h"
#include "dialoguestage.h"
#include "titlescreenstage.h"
#include "introcardstage.h"
#include "creditsscreen.h"

#include "kaiju0.h"
#include "kaiju1.h"
#include "kaiju2.h"

void stage00(int);
void dialogue(int);
void titlescreen(int);
void introcard(int);
void fmvtick(int);
void credits(int);

volatile int changeScreensFlag;
volatile ScreenSetting screenType;
volatile int currentLevel;
volatile u8 finishedLevel;

NUContData	contdata[1];
u8 contPattern;

u32 groundTextureROMAddress;
u32 terrainROMAddress;
u32 topographyROMAddress;

void (*initKaijuCallback)();
void (*updateKaijuCallback)(float);
void (*renderKaijuCallback)(DisplayData*);

void loadInStageState(int levelNumber) {
  NUPiOverlaySegment segment;

  segment.romStart  = _stageSegmentRomStart;
  segment.romEnd    = _stageSegmentRomEnd;
  segment.ramStart  = _stageSegmentStart;
  segment.textStart = _stageSegmentTextStart;
  segment.textEnd   = _stageSegmentTextEnd;
  segment.dataStart = _stageSegmentDataStart;
  segment.dataEnd   = _stageSegmentDataEnd;
  segment.bssStart  = _stageSegmentBssStart;
  segment.bssEnd    = _stageSegmentBssEnd;

  // TODO: level-specific textures
  if (levelNumber == 0) {
    groundTextureROMAddress = (u32)_simulator_geoSegmentRomStart;
  } else {
    groundTextureROMAddress = (u32)_moon_geoSegmentRomStart;
  }

  if (levelNumber == 0) {
    terrainROMAddress = (u32)_level0_terrainSegmentRomStart;
    topographyROMAddress = (u32)_level0_topographySegmentRomStart;
  }  else if (levelNumber == 1) {
    terrainROMAddress = (u32)_level1_terrainSegmentRomStart;
    topographyROMAddress = (u32)_level1_topographySegmentRomStart;
  } else if (levelNumber == 2) {
    terrainROMAddress = (u32)_level2_terrainSegmentRomStart;
    topographyROMAddress = (u32)_level2_topographySegmentRomStart;
  } else if (levelNumber >= 3) {
    terrainROMAddress = (u32)_level2_terrainSegmentRomStart;
    topographyROMAddress = (u32)_level2_topographySegmentRomStart;
  }

  nuPiReadRomOverlay(&segment);
}

void loadInKaiju(int levelNumber) {
  NUPiOverlaySegment segment;

  if (levelNumber == 0) {
    segment.romStart  = _kaiju0SegmentRomStart;
    segment.romEnd    = _kaiju0SegmentRomEnd;
    segment.ramStart  = _kaiju0SegmentStart;
    segment.textStart = _kaiju0SegmentTextStart;
    segment.textEnd   = _kaiju0SegmentTextEnd;
    segment.dataStart = _kaiju0SegmentDataStart;
    segment.dataEnd   = _kaiju0SegmentDataEnd;
    segment.bssStart  = _kaiju0SegmentBssStart;
    segment.bssEnd    = _kaiju0SegmentBssEnd;
  } else if (levelNumber == 1) {
    segment.romStart  = _kaiju1SegmentRomStart;
    segment.romEnd    = _kaiju1SegmentRomEnd;
    segment.ramStart  = _kaiju1SegmentStart;
    segment.textStart = _kaiju1SegmentTextStart;
    segment.textEnd   = _kaiju1SegmentTextEnd;
    segment.dataStart = _kaiju1SegmentDataStart;
    segment.dataEnd   = _kaiju1SegmentDataEnd;
    segment.bssStart  = _kaiju1SegmentBssStart;
    segment.bssEnd    = _kaiju1SegmentBssEnd;
  } else if (levelNumber == 2) {
    segment.romStart  = _kaiju2SegmentRomStart;
    segment.romEnd    = _kaiju2SegmentRomEnd;
    segment.ramStart  = _kaiju2SegmentStart;
    segment.textStart = _kaiju2SegmentTextStart;
    segment.textEnd   = _kaiju2SegmentTextEnd;
    segment.dataStart = _kaiju2SegmentDataStart;
    segment.dataEnd   = _kaiju2SegmentDataEnd;
    segment.bssStart  = _kaiju2SegmentBssStart;
    segment.bssEnd    = _kaiju2SegmentBssEnd;
  } else if (levelNumber >= 3) {
    segment.romStart  = _kaiju2SegmentRomStart;
    segment.romEnd    = _kaiju2SegmentRomEnd;
    segment.ramStart  = _kaiju2SegmentStart;
    segment.textStart = _kaiju2SegmentTextStart;
    segment.textEnd   = _kaiju2SegmentTextEnd;
    segment.dataStart = _kaiju2SegmentDataStart;
    segment.dataEnd   = _kaiju2SegmentDataEnd;
    segment.bssStart  = _kaiju2SegmentBssStart;
    segment.bssEnd    = _kaiju2SegmentBssEnd;
  }

  nuPiReadRomOverlay(&segment);

  if (levelNumber == 0) {
    initKaijuCallback = &initKaiju0;
    updateKaijuCallback = &updateKaiju0;
    renderKaijuCallback = &renderKaiju0;
  } else if (levelNumber == 1) {
    initKaijuCallback = &initKaiju1;
    updateKaijuCallback = &updateKaiju1;
    renderKaijuCallback = &renderKaiju1;
  } else if (levelNumber == 2) {
    initKaijuCallback = &initKaiju2;
    updateKaijuCallback = &updateKaiju2;
    renderKaijuCallback = &renderKaiju2;
  } else if (levelNumber >= 3) {
    initKaijuCallback = &initKaiju2;
    updateKaijuCallback = &updateKaiju2;
    renderKaijuCallback = &renderKaiju2;
  }

}

void loadInDialogueState() {
  NUPiOverlaySegment segment;

  segment.romStart  = _dialogueSegmentRomStart;
  segment.romEnd    = _dialogueSegmentRomEnd;
  segment.ramStart  = _dialogueSegmentStart;
  segment.textStart = _dialogueSegmentTextStart;
  segment.textEnd   = _dialogueSegmentTextEnd;
  segment.dataStart = _dialogueSegmentDataStart;
  segment.dataEnd   = _dialogueSegmentDataEnd;
  segment.bssStart  = _dialogueSegmentBssStart;
  segment.bssEnd    = _dialogueSegmentBssEnd;

  nuPiReadRomOverlay(&segment);
}

void loadInIntroState() {
  NUPiOverlaySegment segment;

  segment.romStart  = _introcardstageSegmentRomStart;
  segment.romEnd    = _introcardstageSegmentRomEnd;
  segment.ramStart  = _introcardstageSegmentStart;
  segment.textStart = _introcardstageSegmentTextStart;
  segment.textEnd   = _introcardstageSegmentTextEnd;
  segment.dataStart = _introcardstageSegmentDataStart;
  segment.dataEnd   = _introcardstageSegmentDataEnd;
  segment.bssStart  = _introcardstageSegmentBssStart;
  segment.bssEnd    = _introcardstageSegmentBssEnd;

  nuPiReadRomOverlay(&segment);
}

void loadInTitleScreenState() {
  NUPiOverlaySegment segment;

  segment.romStart  = _titlescreenSegmentRomStart;
  segment.romEnd    = _titlescreenSegmentRomEnd;
  segment.ramStart  = _titlescreenSegmentStart;
  segment.textStart = _titlescreenSegmentTextStart;
  segment.textEnd   = _titlescreenSegmentTextEnd;
  segment.dataStart = _titlescreenSegmentDataStart;
  segment.dataEnd   = _titlescreenSegmentDataEnd;
  segment.bssStart  = _titlescreenSegmentBssStart;
  segment.bssEnd    = _titlescreenSegmentBssEnd;

  nuPiReadRomOverlay(&segment);
}

void loadInCreditsState() {
  NUPiOverlaySegment segment;

  segment.romStart  = _creditsscreenSegmentRomStart;
  segment.romEnd    = _creditsscreenSegmentRomEnd;
  segment.ramStart  = _creditsscreenSegmentStart;
  segment.textStart = _creditsscreenSegmentTextStart;
  segment.textEnd   = _creditsscreenSegmentTextEnd;
  segment.dataStart = _creditsscreenSegmentDataStart;
  segment.dataEnd   = _creditsscreenSegmentDataEnd;
  segment.bssStart  = _creditsscreenSegmentBssStart;
  segment.bssEnd    = _creditsscreenSegmentBssEnd;

  nuPiReadRomOverlay(&segment);
}

void loadInFMVScreenState() {
  NUPiOverlaySegment segment;

  segment.romStart  = _fmvSegmentRomStart;
  segment.romEnd    = _fmvSegmentRomEnd;
  segment.ramStart  = _fmvSegmentStart;
  segment.textStart = _fmvSegmentTextStart;
  segment.textEnd   = _fmvSegmentTextEnd;
  segment.dataStart = _fmvSegmentDataStart;
  segment.dataEnd   = _fmvSegmentDataEnd;
  segment.bssStart  = _fmvSegmentBssStart;
  segment.bssEnd    = _fmvSegmentBssEnd;

  nuPiReadRomOverlay(&segment);
}

void initAudio(void)
{
  nuAuInit();

  nuAuSeqPlayerBankSet(_audiobank_controlSegmentRomStart, _audiobank_controlSegmentRomEnd - _audiobank_controlSegmentRomStart, _audiobank_tableSegmentRomStart);
  nuAuSeqPlayerSeqSet(_songsSegmentRomStart);
  // nuAuSeqPlayerSetVol(0, 0x6A0F);

  nuAuSndPlayerBankSet(_sfxbank_controlSegmentRomStart, _sfxbank_controlSegmentRomEnd - _sfxbank_controlSegmentRomStart, _sfxbank_tableSegmentRomStart);
}

/*------------------------
	Main
--------------------------*/
void mainproc(void)
{
  /* The initialization of graphic  */
  // nuGfxInit();
  hvqmGfxInit();

  /* The initialization of the controller manager  */
  contPattern = nuContInit();
  changeScreensFlag = 0;

  screenType = FMVScreen;

  loadInFMVScreenState();
  initFMVStage();
  nuGfxFuncSet((NUGfxFunc)fmvtick);

  nuGfxDisplayOn();

  while(!changeScreensFlag);

  nuGfxFuncRemove();

  initAudio();

  screenType = TitleScreen;
  currentLevel = 0;
  finishedLevel = 0;

  while (1) {
    if (screenType == StageScreen) {
      loadInStageState(currentLevel);
      loadInKaiju(currentLevel);
      initStage00();
      nuGfxFuncSet((NUGfxFunc)stage00);
    } else if (screenType == DialogueScreen) {
      loadInDialogueState();
      initDialogue();
      nuGfxFuncSet((NUGfxFunc)dialogue);
    } else if (screenType == TitleScreen) {
      loadInTitleScreenState();
      initTitleScreen();
      nuGfxFuncSet((NUGfxFunc)titlescreen);
    } else if (screenType == IntroCardScreen) {
      loadInIntroState();
      initIntroScreen();
      nuGfxFuncSet((NUGfxFunc)introcard);
    } else if (screenType == CreditsScreen) {
      loadInCreditsState();
      initCreditscreen();
      nuGfxFuncSet((NUGfxFunc)credits);
    }

    nuGfxDisplayOn();

    while(!changeScreensFlag);

    nuGfxFuncRemove();
    nuGfxDisplayOff();

    if (currentLevel == NUMBER_OF_LEVELS) {
      currentLevel = 0;
      screenType = CreditsScreen;
    }

    changeScreensFlag = 0;
  }
}

void stage00(int pendingGfx)
{
  if (changeScreensFlag != 0) {
    return;
  }

  /* Provide the display process if 2 or less RCP tasks are processing or
	waiting for the process.  */
  if(pendingGfx < 3)
    makeDL00();		

  /* The process of game progress  */
  updateGame00(); 
}

void dialogue(int pendingGfx)
{
  if (changeScreensFlag != 0) {
    return;
  }

  if(pendingGfx < 3) {
    makeDLDialogue();   
  }

  updateDialogue(); 
}

void titlescreen(int pendingGfx)
{
  if (changeScreensFlag != 0) {
    return;
  }

  if(pendingGfx < 3) {
    makeDLTitleScreen();   
  }

  updateTitleScreen(); 
}


void introcard(int pendingGfx)
{
  if (changeScreensFlag != 0) {
    return;
  }

  if(pendingGfx < 3) {
    makeDLIntroScreen();   
  }

  updateIntroScreen(); 
}

void fmvtick(int pendingGfx)
{
  if (changeScreensFlag != 0) {
    return;
  }

  if(pendingGfx < 3) {
    makeFMVDL();   
  }

  updateFMVStage(); 
}

void credits(int pendingGfx)
{
  if (changeScreensFlag != 0) {
    return;
  }

  if(pendingGfx < 3) {
    makeDLCreditsScreen();   
  }

  updateCreditsScreen(); 
}

