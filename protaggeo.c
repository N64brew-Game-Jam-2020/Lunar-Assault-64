

#include "protaggeo.h"

const float protag_scale = 0.001f;

const Vtx protag_body_verts[] = {
	{ 148, 63, 503, 0, 0, 0, 50, 44, 154, 255 },
	{ 148, -63, 503, 0, 0, 0, 50, 44, 154, 255 },
	{ 139, 72, 331, 0, 0, 0, 60, 55, 156, 255 },
	{ 149, -43, 331, 0, 0, 0, 55, 51, 122, 255 },
	{ 564, 32, 599, 0, 0, 0, 255, 255, 255, 255 },
	{ -116, -286, 531, 0, 0, 0, 55, 51, 122, 255 },
	{ -99, -303, 399, 0, 0, 0, 55, 51, 122, 255 },
	{ 218, -45, 527, 0, 0, 0, 55, 51, 122, 255 },
	{ -16, -389, 546, 0, 0, 0, 55, 51, 122, 255 },
	{ -2, -403, 422, 0, 0, 0, 55, 51, 122, 255 },
	{ -150, -366, 395, 0, 0, 0, 255, 207, 161, 255 },
	{ -109, -408, 528, 0, 0, 0, 255, 207, 161, 255 },
	{ -82, -436, 401, 0, 0, 0, 255, 207, 161, 255 },
	{ 0, 71, 606, 0, 0, 0, 202, 204, 204, 255 },
	{ 179, -102, 505, 0, 0, 0, 255, 255, 255, 255 },
	{ 226, 65, 521, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, -94, 589, 0, 0, 0, 255, 255, 255, 255 },
	{ 50, 47, 739, 0, 0, 0, 186, 114, 88, 255 },
	{ 23, 7, 718, 0, 0, 0, 154, 113, 106, 255 },
	{ 41, -9, 614, 0, 0, 0, 154, 113, 106, 255 },
	{ 69, 47, 608, 0, 0, 0, 154, 113, 106, 255 },
	{ -148, 63, 503, 0, 0, 0, 50, 44, 154, 255 },
	{ -148, -63, 503, 0, 0, 0, 50, 44, 154, 255 },
	{ 0, 63, 518, 0, 0, 0, 54, 49, 155, 255 },
	{ 0, -63, 518, 0, 0, 0, 52, 47, 155, 255 },
	{ -139, 72, 331, 0, 0, 0, 60, 55, 156, 255 },
	{ -149, -43, 331, 0, 0, 0, 55, 51, 122, 255 },
	{ 0, 72, 331, 0, 0, 0, 55, 49, 155, 255 },
	{ 0, -43, 331, 0, 0, 0, 55, 51, 122, 255 },
	{ -564, 32, 599, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, -99, 473, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, 110, 520, 0, 0, 0, 171, 174, 174, 255 },
	{ -249, -263, 611, 0, 0, 0, 55, 51, 122, 255 },
	{ -281, -297, 492, 0, 0, 0, 55, 51, 122, 255 },
	{ -206, 0, 545, 0, 0, 0, 55, 51, 122, 255 },
	{ -390, -225, 625, 0, 0, 0, 55, 51, 122, 255 },
	{ -377, -211, 480, 0, 0, 0, 55, 51, 122, 255 },
	{ -310, -375, 523, 0, 0, 0, 255, 207, 161, 255 },
	{ -383, -388, 627, 0, 0, 0, 255, 207, 161, 255 },
	{ -400, -373, 529, 0, 0, 0, 255, 207, 161, 255 },
	{ -179, -102, 505, 0, 0, 0, 255, 255, 255, 255 },
	{ -226, 65, 521, 0, 0, 0, 255, 255, 255, 255 },
	{ -50, 47, 739, 0, 0, 0, 186, 114, 88, 255 },
	{ -23, 7, 718, 0, 0, 0, 154, 113, 106, 255 },
	{ 0, 45, 726, 0, 0, 0, 195, 137, 119, 255 },
	{ 0, 4, 719, 0, 0, 0, 154, 113, 106, 255 },
	{ 0, -9, 614, 0, 0, 0, 154, 113, 106, 255 },
	{ 0, 47, 613, 0, 0, 0, 208, 170, 159, 255 },
	{ -41, -9, 614, 0, 0, 0, 154, 113, 106, 255 },
	{ -69, 47, 608, 0, 0, 0, 154, 113, 106, 255 },
	{ -356, 446, 717, 0, 0, 0, 5, 5, 5, 255 },
	{ -237, 446, 717, 0, 0, 0, 1, 1, 1, 255 },
	{ -356, 437, 589, 0, 0, 0, 2, 2, 2, 255 },
	{ -237, 437, 589, 0, 0, 0, 17, 17, 17, 255 },
	{ -261, -899, 778, 0, 0, 0, 0, 0, 0, 255 },
	{ -175, -891, 777, 0, 0, 0, 0, 0, 0, 255 },
	{ -261, -906, 685, 0, 0, 0, 0, 0, 0, 255 },
	{ -175, -898, 684, 0, 0, 0, 14, 14, 14, 255 },
	{ -81, -210, 760, 0, 0, 0, 255, 2, 5, 255 },
	{ -229, -210, 723, 0, 0, 0, 255, 8, 9, 255 },
	{ -66, -210, 797, 0, 0, 0, 255, 6, 8, 255 },
	{ -131, -210, 823, 0, 0, 0, 255, 14, 15, 255 },
};
const int protag_body_length = 54;

const Gfx protag_body_commands[] = {
	gsSPVertex(protag_body_verts, 62, 0),
	gsSP2Triangles(2, 1, 3, 0, 27, 0, 2, 0),
	gsSP2Triangles(3, 24, 28, 0, 46, 18, 45, 0),
	gsSP2Triangles(4, 14, 15, 0, 4, 16, 14, 0),
	gsSP2Triangles(13, 15, 31, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 9, 0, 6, 7, 9, 0),
	gsSP2Triangles(7, 5, 8, 0, 6, 12, 10, 0),
	gsSP2Triangles(9, 11, 12, 0, 15, 30, 31, 0),
	gsSP2Triangles(14, 16, 30, 0, 15, 13, 4, 0),
	gsSP2Triangles(13, 16, 4, 0, 20, 44, 17, 0),
	gsSP2Triangles(5, 6, 10, 0, 11, 5, 10, 0),
	gsSP2Triangles(12, 11, 10, 0, 8, 5, 11, 0),
	gsSP2Triangles(19, 17, 18, 0, 1, 20, 19, 0),
	gsSP2Triangles(0, 47, 20, 0, 24, 19, 46, 0),
	gsSP2Triangles(18, 44, 45, 0, 25, 22, 21, 0),
	gsSP2Triangles(27, 21, 23, 0, 26, 24, 22, 0),
	gsSP2Triangles(46, 43, 48, 0, 29, 41, 40, 0),
	gsSP2Triangles(29, 40, 16, 0, 34, 32, 33, 0),
	gsSP2Triangles(34, 36, 35, 0, 33, 36, 34, 0),
	gsSP2Triangles(34, 35, 32, 0, 33, 39, 36, 0),
	gsSP2Triangles(36, 38, 35, 0, 41, 30, 40, 0),
	gsSP2Triangles(41, 29, 13, 0, 13, 29, 16, 0),
	gsSP2Triangles(49, 44, 47, 0, 32, 37, 33, 0),
	gsSP2Triangles(38, 37, 32, 0, 39, 37, 38, 0),
	gsSP2Triangles(35, 38, 32, 0, 48, 42, 49, 0),
	gsSP2Triangles(22, 49, 21, 0, 21, 47, 23, 0),
	gsSP2Triangles(24, 48, 22, 0, 43, 44, 42, 0),
	gsSP2Triangles(2, 0, 1, 0, 27, 23, 0, 0),
	gsSP2Triangles(3, 1, 24, 0, 46, 19, 18, 0),
	gsSP2Triangles(6, 9, 12, 0, 9, 8, 11, 0),
	gsSP2Triangles(15, 14, 30, 0, 20, 47, 44, 0),
	gsSP2Triangles(19, 20, 17, 0, 1, 0, 20, 0),
	gsSP2Triangles(0, 23, 47, 0, 24, 1, 19, 0),
	gsSP2Triangles(18, 17, 44, 0, 25, 26, 22, 0),
	gsSP2Triangles(27, 25, 21, 0, 26, 28, 24, 0),
	gsSP2Triangles(46, 45, 43, 0, 13, 31, 41, 0),
	gsSP2Triangles(33, 37, 39, 0, 36, 39, 38, 0),
	gsSP2Triangles(41, 31, 30, 0, 40, 30, 16, 0),
	gsSP2Triangles(49, 42, 44, 0, 48, 43, 42, 0),
	gsSP2Triangles(22, 48, 49, 0, 21, 49, 47, 0),
	gsSP2Triangles(24, 46, 48, 0, 43, 45, 44, 0),
	gsSP2Triangles(50, 53, 52, 0, 54, 57, 55, 0),
	gsSP2Triangles(51, 57, 53, 0, 50, 55, 51, 0),
	gsSP2Triangles(52, 54, 50, 0, 53, 56, 52, 0),
	gsSP2Triangles(50, 51, 53, 0, 54, 56, 57, 0),
	gsSP2Triangles(51, 55, 57, 0, 50, 54, 55, 0),
	gsSP2Triangles(52, 56, 54, 0, 53, 57, 56, 0),
	gsSP2Triangles(58, 61, 59, 0, 58, 60, 61, 0),
	gsSPEndDisplayList()
};

const Vtx protag_head_verts[] = {
	{ 100, -113, 949, 0, 0, 0, 212, 165, 119, 255 },
	{ 100, 79, 925, 0, 0, 0, 105, 82, 59, 255 },
	{ 102, -87, 688, 0, 0, 0, 131, 102, 74, 255 },
	{ 139, -73, 804, 0, 0, 0, 212, 165, 119, 255 },
	{ 187, -116, 854, 0, 0, 0, 242, 104, 43, 255 },
	{ 227, -132, 655, 0, 0, 0, 137, 59, 24, 255 },
	{ 181, 180, 840, 0, 0, 0, 195, 85, 39, 255 },
	{ 162, 110, 989, 0, 0, 0, 255, 161, 127, 255 },
	{ 116, -192, 860, 0, 0, 0, 144, 65, 33, 255 },
	{ 120, 101, 782, 0, 0, 0, 116, 97, 80, 255 },
	{ 95, 112, 819, 0, 0, 0, 105, 82, 59, 255 },
	{ 62, -132, 856, 0, 0, 0, 255, 255, 255, 255 },
	{ 34, -149, 818, 0, 0, 0, 255, 255, 255, 255 },
	{ 98, -112, 845, 0, 0, 0, 255, 255, 255, 255 },
	{ 50, -140, 783, 0, 0, 0, 255, 255, 255, 255 },
	{ 114, -103, 838, 0, 0, 0, 255, 255, 255, 255 },
	{ 103, -113, 798, 0, 0, 0, 255, 255, 255, 255 },
	{ 27, -158, 812, 0, 0, 0, 3, 3, 3, 255 },
	{ 76, -127, 846, 0, 0, 0, 11, 11, 11, 255 },
	{ 75, -130, 874, 0, 0, 0, 1, 1, 1, 255 },
	{ 121, -105, 836, 0, 0, 0, 5, 5, 5, 255 },
	{ 47, -143, 832, 0, 0, 0, 63, 156, 82, 255 },
	{ 61, -139, 804, 0, 0, 0, 63, 156, 82, 255 },
	{ 83, -122, 813, 0, 0, 0, 63, 156, 82, 255 },
	{ 71, -128, 849, 0, 0, 0, 63, 156, 82, 255 },
	{ 90, -117, 848, 0, 0, 0, 63, 156, 82, 255 },
	{ 0, -145, 963, 0, 0, 0, 209, 162, 117, 255 },
	{ -100, -113, 949, 0, 0, 0, 212, 165, 119, 255 },
	{ -100, 79, 925, 0, 0, 0, 105, 82, 59, 255 },
	{ 0, 28, 1096, 0, 0, 0, 255, 162, 128, 255 },
	{ -102, -87, 688, 0, 0, 0, 131, 102, 74, 255 },
	{ 0, -132, 628, 0, 0, 0, 212, 165, 119, 255 },
	{ 0, -169, 771, 0, 0, 0, 212, 165, 119, 255 },
	{ -139, -73, 804, 0, 0, 0, 212, 165, 119, 255 },
	{ 0, -141, 1059, 0, 0, 0, 255, 160, 125, 255 },
	{ -187, -116, 854, 0, 0, 0, 242, 104, 43, 255 },
	{ -227, -132, 655, 0, 0, 0, 137, 59, 24, 255 },
	{ -181, 180, 840, 0, 0, 0, 195, 85, 39, 255 },
	{ -162, 110, 989, 0, 0, 0, 255, 161, 127, 255 },
	{ 0, 154, 985, 0, 0, 0, 242, 104, 43, 255 },
	{ 0, 203, 641, 0, 0, 0, 149, 64, 26, 255 },
	{ 0, -177, 948, 0, 0, 0, 242, 104, 43, 255 },
	{ -116, -192, 860, 0, 0, 0, 144, 65, 33, 255 },
	{ 0, -194, 961, 0, 0, 0, 242, 104, 43, 255 },
	{ -120, 101, 782, 0, 0, 0, 116, 97, 80, 255 },
	{ 0, 63, 740, 0, 0, 0, 105, 82, 59, 255 },
	{ -95, 112, 819, 0, 0, 0, 105, 82, 59, 255 },
	{ 0, 34, 676, 0, 0, 0, 142, 61, 26, 255 },
	{ -62, -132, 856, 0, 0, 0, 255, 255, 255, 255 },
	{ -34, -149, 818, 0, 0, 0, 255, 255, 255, 255 },
	{ -98, -112, 845, 0, 0, 0, 255, 255, 255, 255 },
	{ -50, -140, 783, 0, 0, 0, 255, 255, 255, 255 },
	{ -114, -103, 838, 0, 0, 0, 255, 255, 255, 255 },
	{ -103, -113, 798, 0, 0, 0, 255, 255, 255, 255 },
	{ -27, -158, 812, 0, 0, 0, 3, 3, 3, 255 },
	{ -76, -127, 846, 0, 0, 0, 11, 11, 11, 255 },
	{ -75, -130, 874, 0, 0, 0, 1, 1, 1, 255 },
	{ -121, -105, 836, 0, 0, 0, 5, 5, 5, 255 },
	{ -47, -143, 832, 0, 0, 0, 63, 156, 82, 255 },
	{ -61, -139, 804, 0, 0, 0, 63, 156, 82, 255 },
	{ -83, -122, 813, 0, 0, 0, 63, 156, 82, 255 },
	{ -71, -128, 849, 0, 0, 0, 63, 156, 82, 255 },
	{ -90, -117, 848, 0, 0, 0, 63, 156, 82, 255 },
};
const int protag_head_length = 63;

const Gfx protag_head_commands[] = {
	gsSPVertex(protag_head_verts, 63, 0),
	gsSP2Triangles(3, 26, 32, 0, 0, 10, 1, 0),
	gsSP2Triangles(3, 9, 10, 0, 2, 32, 31, 0),
	gsSP2Triangles(34, 4, 29, 0, 4, 7, 29, 0),
	gsSP2Triangles(4, 6, 7, 0, 7, 39, 29, 0),
	gsSP2Triangles(39, 7, 40, 0, 7, 6, 40, 0),
	gsSP2Triangles(6, 4, 5, 0, 8, 34, 43, 0),
	gsSP2Triangles(4, 34, 41, 0, 2, 45, 9, 0),
	gsSP2Triangles(47, 40, 5, 0, 5, 40, 6, 0),
	gsSP2Triangles(5, 4, 47, 0, 47, 4, 7, 0),
	gsSP2Triangles(4, 34, 7, 0, 7, 34, 47, 0),
	gsSP2Triangles(11, 12, 13, 0, 13, 12, 15, 0),
	gsSP2Triangles(15, 14, 16, 0, 15, 12, 14, 0),
	gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
	gsSP2Triangles(21, 22, 24, 0, 24, 23, 25, 0),
	gsSP2Triangles(24, 22, 23, 0, 33, 26, 27, 0),
	gsSP2Triangles(27, 46, 33, 0, 33, 44, 30, 0),
	gsSP2Triangles(30, 32, 33, 0, 34, 29, 35, 0),
	gsSP2Triangles(35, 29, 38, 0, 35, 38, 37, 0),
	gsSP2Triangles(38, 29, 39, 0, 39, 40, 38, 0),
	gsSP2Triangles(38, 40, 37, 0, 37, 36, 35, 0),
	gsSP2Triangles(42, 43, 34, 0, 35, 41, 34, 0),
	gsSP2Triangles(30, 45, 31, 0, 47, 36, 40, 0),
	gsSP2Triangles(36, 37, 40, 0, 36, 47, 35, 0),
	gsSP2Triangles(47, 38, 35, 0, 35, 38, 34, 0),
	gsSP2Triangles(38, 47, 34, 0, 48, 50, 49, 0),
	gsSP2Triangles(50, 52, 49, 0, 52, 53, 51, 0),
	gsSP2Triangles(52, 51, 49, 0, 54, 56, 55, 0),
	gsSP2Triangles(56, 57, 55, 0, 58, 61, 59, 0),
	gsSP2Triangles(61, 62, 60, 0, 61, 60, 59, 0),
	gsSP2Triangles(3, 0, 26, 0, 0, 3, 10, 0),
	gsSP2Triangles(3, 2, 9, 0, 2, 3, 32, 0),
	gsSP2Triangles(2, 31, 45, 0, 33, 32, 26, 0),
	gsSP2Triangles(27, 28, 46, 0, 33, 46, 44, 0),
	gsSP2Triangles(30, 31, 32, 0, 30, 44, 45, 0),
	gsSPEndDisplayList()
};

const Vtx protag_legs_verts[] = {
	{ 160, 74, 47, 0, 0, 0, 179, 164, 110, 255 },
	{ 160, -47, 47, 0, 0, 0, 179, 164, 111, 255 },
	{ 150, 38, -166, 0, 0, 0, 137, 126, 86, 255 },
	{ 150, 1, -180, 0, 0, 0, 122, 112, 76, 255 },
	{ 52, 74, 39, 0, 0, 0, 179, 164, 110, 255 },
	{ 52, -47, 39, 0, 0, 0, 179, 164, 110, 255 },
	{ 115, 38, -166, 0, 0, 0, 128, 117, 79, 255 },
	{ 115, 1, -180, 0, 0, 0, 129, 119, 81, 255 },
	{ 216, 133, 243, 0, 0, 0, 225, 206, 139, 255 },
	{ 214, -74, 228, 0, 0, 0, 210, 193, 130, 255 },
	{ 168, 77, 345, 0, 0, 0, 179, 164, 110, 255 },
	{ 168, -42, 345, 0, 0, 0, 191, 176, 118, 255 },
	{ 196, 89, -62, 0, 0, 0, 207, 182, 182, 255 },
	{ 196, -57, -62, 0, 0, 0, 207, 182, 182, 255 },
	{ 41, 89, -69, 0, 0, 0, 176, 155, 155, 255 },
	{ 41, -57, -69, 0, 0, 0, 176, 155, 155, 255 },
	{ 167, 68, -208, 0, 0, 0, 204, 179, 179, 255 },
	{ 167, -23, -208, 0, 0, 0, 191, 168, 168, 255 },
	{ 99, 68, -208, 0, 0, 0, 176, 156, 156, 255 },
	{ 99, -23, -208, 0, 0, 0, 146, 128, 128, 255 },
	{ 161, 60, -257, 0, 0, 0, 94, 82, 82, 255 },
	{ 161, -15, -257, 0, 0, 0, 92, 81, 81, 255 },
	{ 105, 60, -257, 0, 0, 0, 92, 81, 81, 255 },
	{ 105, -15, -257, 0, 0, 0, 97, 85, 85, 255 },
	{ 161, -81, -257, 0, 0, 0, 93, 82, 82, 255 },
	{ 105, -81, -257, 0, 0, 0, 97, 85, 85, 255 },
	{ -160, 74, 47, 0, 0, 0, 179, 164, 110, 255 },
	{ -160, -47, 47, 0, 0, 0, 179, 164, 111, 255 },
	{ -150, 38, -166, 0, 0, 0, 137, 126, 86, 255 },
	{ -150, 1, -180, 0, 0, 0, 122, 112, 76, 255 },
	{ -52, 74, 39, 0, 0, 0, 179, 164, 110, 255 },
	{ -52, -47, 39, 0, 0, 0, 179, 164, 110, 255 },
	{ -115, 38, -166, 0, 0, 0, 128, 117, 79, 255 },
	{ -115, 1, -180, 0, 0, 0, 129, 119, 81, 255 },
	{ -216, 133, 243, 0, 0, 0, 225, 206, 139, 255 },
	{ -214, -74, 228, 0, 0, 0, 210, 193, 130, 255 },
	{ 0, 135, 243, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, -72, 227, 0, 0, 0, 227, 208, 140, 255 },
	{ -168, 77, 345, 0, 0, 0, 179, 164, 110, 255 },
	{ -168, -42, 345, 0, 0, 0, 191, 176, 118, 255 },
	{ 0, 77, 337, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, -42, 337, 0, 0, 0, 183, 168, 113, 255 },
	{ -196, 89, -62, 0, 0, 0, 207, 182, 182, 255 },
	{ -196, -57, -62, 0, 0, 0, 207, 182, 182, 255 },
	{ -41, 89, -69, 0, 0, 0, 176, 155, 155, 255 },
	{ -41, -57, -69, 0, 0, 0, 176, 155, 155, 255 },
	{ -167, 68, -208, 0, 0, 0, 204, 179, 179, 255 },
	{ -167, -23, -208, 0, 0, 0, 191, 168, 168, 255 },
	{ -99, 68, -208, 0, 0, 0, 175, 154, 154, 255 },
	{ -99, -23, -208, 0, 0, 0, 146, 128, 128, 255 },
	{ -161, 60, -257, 0, 0, 0, 94, 82, 82, 255 },
	{ -161, -15, -257, 0, 0, 0, 92, 81, 81, 255 },
	{ -105, 60, -257, 0, 0, 0, 105, 96, 96, 255 },
	{ -105, -15, -257, 0, 0, 0, 97, 85, 85, 255 },
	{ -161, -81, -257, 0, 0, 0, 93, 82, 82, 255 },
	{ -105, -81, -257, 0, 0, 0, 97, 85, 85, 255 },
};
const int protag_legs_length = 56;

const Vtx protag_legs_move_a[] = {
	{ 160, -94, 128, 0, 0, 0, 179, 164, 110, 255 },
	{ 160, -196, 194, 0, 0, 0, 179, 164, 111, 255 },
	{ 150, -239, -31, 0, 0, 0, 137, 126, 86, 255 },
	{ 150, -278, -23, 0, 0, 0, 122, 112, 76, 255 },
	{ 52, -98, 122, 0, 0, 0, 179, 164, 110, 255 },
	{ 52, -201, 188, 0, 0, 0, 179, 164, 110, 255 },
	{ 115, -239, -31, 0, 0, 0, 128, 117, 79, 255 },
	{ 115, -278, -23, 0, 0, 0, 129, 119, 81, 255 },
	{ 216, 133, 243, 0, 0, 0, 225, 206, 139, 255 },
	{ 213, -91, 257, 0, 0, 0, 210, 193, 130, 255 },
	{ 168, 77, 345, 0, 0, 0, 179, 164, 110, 255 },
	{ 168, -42, 345, 0, 0, 0, 191, 176, 118, 255 },
	{ 196, -140, 27, 0, 0, 0, 207, 182, 182, 255 },
	{ 196, -264, 107, 0, 0, 0, 207, 182, 182, 255 },
	{ 41, -144, 22, 0, 0, 0, 176, 155, 155, 255 },
	{ 41, -268, 102, 0, 0, 0, 176, 155, 155, 255 },
	{ 167, -237, -82, 0, 0, 0, 204, 179, 179, 255 },
	{ 167, -314, -33, 0, 0, 0, 191, 168, 168, 255 },
	{ 99, -237, -82, 0, 0, 0, 176, 156, 156, 255 },
	{ 99, -314, -33, 0, 0, 0, 146, 128, 128, 255 },
	{ 161, -270, -119, 0, 0, 0, 94, 82, 82, 255 },
	{ 161, -333, -78, 0, 0, 0, 92, 81, 81, 255 },
	{ 105, -270, -119, 0, 0, 0, 92, 81, 81, 255 },
	{ 105, -333, -78, 0, 0, 0, 97, 85, 85, 255 },
	{ 161, -389, -43, 0, 0, 0, 93, 82, 82, 255 },
	{ 105, -389, -43, 0, 0, 0, 97, 85, 85, 255 },
	{ -160, 144, 84, 0, 0, 0, 179, 164, 110, 255 },
	{ -160, 107, -49, 0, 0, 0, 179, 164, 111, 255 },
	{ -150, 324, 28, 0, 0, 0, 137, 126, 86, 255 },
	{ -150, 337, -9, 0, 0, 0, 122, 112, 76, 255 },
	{ -52, 152, 83, 0, 0, 0, 179, 164, 110, 255 },
	{ -52, 115, -49, 0, 0, 0, 179, 164, 110, 255 },
	{ -115, 324, 28, 0, 0, 0, 128, 117, 79, 255 },
	{ -115, 337, -9, 0, 0, 0, 129, 119, 81, 255 },
	{ -216, 133, 243, 0, 0, 0, 225, 206, 139, 255 },
	{ -214, -74, 228, 0, 0, 0, 210, 193, 130, 255 },
	{ 0, 135, 243, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, -120, 257, 0, 0, 0, 227, 208, 140, 255 },
	{ -168, 77, 345, 0, 0, 0, 179, 164, 110, 255 },
	{ -168, -42, 345, 0, 0, 0, 191, 176, 118, 255 },
	{ 0, 77, 337, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, -42, 337, 0, 0, 0, 183, 168, 113, 255 },
	{ -196, 223, 83, 0, 0, 0, 207, 182, 182, 255 },
	{ -196, 217, -64, 0, 0, 0, 207, 182, 182, 255 },
	{ -41, 229, 83, 0, 0, 0, 176, 155, 155, 255 },
	{ -41, 223, -64, 0, 0, 0, 176, 155, 155, 255 },
	{ -167, 367, 56, 0, 0, 0, 204, 179, 179, 255 },
	{ -167, 363, -35, 0, 0, 0, 191, 168, 168, 255 },
	{ -99, 367, 56, 0, 0, 0, 175, 154, 154, 255 },
	{ -99, 363, -35, 0, 0, 0, 146, 128, 128, 255 },
	{ -161, 415, 45, 0, 0, 0, 94, 82, 82, 255 },
	{ -161, 412, -29, 0, 0, 0, 92, 81, 81, 255 },
	{ -105, 415, 45, 0, 0, 0, 105, 96, 96, 255 },
	{ -105, 412, -29, 0, 0, 0, 97, 85, 85, 255 },
	{ -161, 410, -95, 0, 0, 0, 93, 82, 82, 255 },
	{ -105, 410, -95, 0, 0, 0, 97, 85, 85, 255 },
};

const Vtx protag_legs_move_b[] = {
	{ 160, 126, 85, 0, 0, 0, 179, 164, 110, 255 },
	{ 160, 105, -34, 0, 0, 0, 179, 164, 111, 255 },
	{ 150, 331, 12, 0, 0, 0, 137, 126, 86, 255 },
	{ 150, 338, -25, 0, 0, 0, 122, 112, 76, 255 },
	{ 52, 134, 84, 0, 0, 0, 179, 164, 110, 255 },
	{ 52, 113, -36, 0, 0, 0, 179, 164, 110, 255 },
	{ 115, 331, 12, 0, 0, 0, 128, 117, 79, 255 },
	{ 115, 338, -25, 0, 0, 0, 129, 119, 81, 255 },
	{ 216, 133, 243, 0, 0, 0, 225, 206, 139, 255 },
	{ 213, -91, 257, 0, 0, 0, 210, 193, 130, 255 },
	{ 168, 77, 345, 0, 0, 0, 179, 164, 110, 255 },
	{ 168, -42, 345, 0, 0, 0, 191, 176, 118, 255 },
	{ 196, 237, 81, 0, 0, 0, 207, 182, 182, 255 },
	{ 196, 212, -64, 0, 0, 0, 207, 182, 182, 255 },
	{ 41, 244, 80, 0, 0, 0, 176, 155, 155, 255 },
	{ 41, 218, -65, 0, 0, 0, 176, 155, 155, 255 },
	{ 167, 377, 34, 0, 0, 0, 204, 179, 179, 255 },
	{ 167, 361, -55, 0, 0, 0, 191, 168, 168, 255 },
	{ 99, 377, 34, 0, 0, 0, 176, 156, 156, 255 },
	{ 99, 361, -55, 0, 0, 0, 146, 128, 128, 255 },
	{ 161, 423, 18, 0, 0, 0, 94, 82, 82, 255 },
	{ 161, 410, -56, 0, 0, 0, 92, 81, 81, 255 },
	{ 105, 423, 18, 0, 0, 0, 92, 81, 81, 255 },
	{ 105, 410, -56, 0, 0, 0, 97, 85, 85, 255 },
	{ 161, 399, -120, 0, 0, 0, 93, 82, 82, 255 },
	{ 105, 399, -120, 0, 0, 0, 97, 85, 85, 255 },
	{ -222, -139, 92, 0, 0, 0, 179, 164, 110, 255 },
	{ -211, -234, 192, 0, 0, 0, 179, 164, 111, 255 },
	{ -195, -277, -33, 0, 0, 0, 137, 126, 86, 255 },
	{ -190, -315, -25, 0, 0, 0, 122, 112, 76, 255 },
	{ -114, -130, 85, 0, 0, 0, 179, 164, 110, 255 },
	{ -103, -226, 185, 0, 0, 0, 179, 164, 110, 255 },
	{ -160, -273, -33, 0, 0, 0, 128, 117, 79, 255 },
	{ -156, -311, -25, 0, 0, 0, 129, 119, 81, 255 },
	{ -216, 133, 243, 0, 0, 0, 225, 206, 139, 255 },
	{ -214, -74, 228, 0, 0, 0, 210, 193, 130, 255 },
	{ 0, 135, 243, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, -120, 257, 0, 0, 0, 227, 208, 140, 255 },
	{ -168, 77, 345, 0, 0, 0, 179, 164, 110, 255 },
	{ -168, -42, 345, 0, 0, 0, 191, 176, 118, 255 },
	{ 0, 77, 337, 0, 0, 0, 255, 255, 255, 255 },
	{ 0, -42, 337, 0, 0, 0, 183, 168, 113, 255 },
	{ -253, -184, 25, 0, 0, 0, 207, 182, 182, 255 },
	{ -239, -307, 106, 0, 0, 0, 207, 182, 182, 255 },
	{ -98, -169, 19, 0, 0, 0, 176, 155, 155, 255 },
	{ -83, -292, 100, 0, 0, 0, 176, 155, 155, 255 },
	{ -212, -277, -84, 0, 0, 0, 204, 179, 179, 255 },
	{ -203, -353, -34, 0, 0, 0, 191, 168, 168, 255 },
	{ -145, -269, -84, 0, 0, 0, 175, 154, 154, 255 },
	{ -136, -345, -34, 0, 0, 0, 146, 128, 128, 255 },
	{ -202, -310, -120, 0, 0, 0, 94, 82, 82, 255 },
	{ -195, -372, -79, 0, 0, 0, 92, 81, 81, 255 },
	{ -147, -303, -120, 0, 0, 0, 105, 96, 96, 255 },
	{ -140, -366, -79, 0, 0, 0, 97, 85, 85, 255 },
	{ -188, -427, -43, 0, 0, 0, 93, 82, 82, 255 },
	{ -133, -421, -43, 0, 0, 0, 97, 85, 85, 255 },
};

const Gfx protag_legs_commands[] = {
	gsSP2Triangles(2, 1, 3, 0, 6, 0, 2, 0),
	gsSP2Triangles(18, 20, 22, 0, 5, 6, 7, 0),
	gsSP2Triangles(3, 5, 7, 0, 4, 37, 36, 0),
	gsSP2Triangles(1, 8, 9, 0, 5, 9, 37, 0),
	gsSP2Triangles(0, 36, 8, 0, 37, 11, 41, 0),
	gsSP2Triangles(8, 40, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(10, 41, 11, 0, 15, 18, 19, 0),
	gsSP2Triangles(19, 22, 23, 0, 16, 21, 20, 0),
	gsSP2Triangles(23, 20, 21, 0, 17, 25, 24, 0),
	gsSP2Triangles(14, 16, 18, 0, 13, 19, 17, 0),
	gsSP2Triangles(12, 17, 16, 0, 13, 14, 15, 0),
	gsSP2Triangles(21, 17, 24, 0, 23, 24, 25, 0),
	gsSP2Triangles(19, 23, 25, 0, 28, 27, 26, 0),
	gsSP2Triangles(32, 26, 30, 0, 48, 50, 46, 0),
	gsSP2Triangles(31, 32, 30, 0, 29, 31, 27, 0),
	gsSP2Triangles(30, 37, 31, 0, 27, 34, 26, 0),
	gsSP2Triangles(31, 35, 27, 0, 26, 36, 30, 0),
	gsSP2Triangles(37, 39, 35, 0, 34, 40, 36, 0),
	gsSP2Triangles(36, 41, 37, 0, 35, 38, 34, 0),
	gsSP2Triangles(38, 41, 40, 0, 45, 48, 44, 0),
	gsSP2Triangles(49, 52, 48, 0, 46, 51, 47, 0),
	gsSP2Triangles(53, 50, 52, 0, 47, 55, 49, 0),
	gsSP2Triangles(44, 46, 42, 0, 43, 49, 45, 0),
	gsSP2Triangles(42, 47, 43, 0, 43, 44, 42, 0),
	gsSP2Triangles(51, 54, 47, 0, 53, 54, 51, 0),
	gsSP2Triangles(49, 55, 53, 0, 2, 0, 1, 0),
	gsSP2Triangles(6, 4, 0, 0, 18, 16, 20, 0),
	gsSP2Triangles(5, 4, 6, 0, 3, 1, 5, 0),
	gsSP2Triangles(4, 5, 37, 0, 1, 0, 8, 0),
	gsSP2Triangles(5, 1, 9, 0, 0, 4, 36, 0),
	gsSP2Triangles(37, 9, 11, 0, 8, 36, 40, 0),
	gsSP2Triangles(9, 8, 10, 0, 10, 40, 41, 0),
	gsSP2Triangles(15, 14, 18, 0, 19, 18, 22, 0),
	gsSP2Triangles(16, 17, 21, 0, 23, 22, 20, 0),
	gsSP2Triangles(17, 19, 25, 0, 14, 12, 16, 0),
	gsSP2Triangles(13, 15, 19, 0, 12, 13, 17, 0),
	gsSP2Triangles(13, 12, 14, 0, 23, 21, 24, 0),
	gsSP2Triangles(28, 29, 27, 0, 32, 28, 26, 0),
	gsSP2Triangles(48, 52, 50, 0, 31, 33, 32, 0),
	gsSP2Triangles(29, 33, 31, 0, 30, 36, 37, 0),
	gsSP2Triangles(27, 35, 34, 0, 31, 37, 35, 0),
	gsSP2Triangles(26, 34, 36, 0, 37, 41, 39, 0),
	gsSP2Triangles(34, 38, 40, 0, 36, 40, 41, 0),
	gsSP2Triangles(35, 39, 38, 0, 38, 39, 41, 0),
	gsSP2Triangles(45, 49, 48, 0, 49, 53, 52, 0),
	gsSP2Triangles(46, 50, 51, 0, 53, 51, 50, 0),
	gsSP2Triangles(47, 54, 55, 0, 44, 48, 46, 0),
	gsSP2Triangles(43, 47, 49, 0, 42, 46, 47, 0),
	gsSP2Triangles(43, 45, 44, 0, 53, 55, 54, 0),
	gsSPEndDisplayList()
};


