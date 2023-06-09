#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wdw/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wdw_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_THEATER_KEYDOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PROJECTOR, projector_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MOVIE_1, movie_1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MOVIE_2, movie_2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PROJECTOR_HANDLE, projector_handle_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CONE, cone_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BALLOON, balloon_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STOPSIGN, stopsign_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STREETLIGHT, streetlight_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FERRIS, ferris_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FERRISCART, ferriscart_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PRESS, press_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GIRL, girl_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MOVIE_8, movie8_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAR_SIGN, star_sign_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MOVIE_9, movie_9_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COBIE2, cobie2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MOLEMAN2, moleman2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EDWARD2, edward2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ROBOZO2, roboto2_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wdw_area_1),
		WARP_NODE(0x00, LEVEL_CASTLE, 0x01, 0x2F, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CASTLE, 0x01, 0x30, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_WDW, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03/*factory death*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04/*factory exit*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05/*boss*/, LEVEL_BITFS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06/*agamemnon*/, LEVEL_BITS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07/*showrunner_battle_end*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08/*bowser2d*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_WDW, 0x01, 0x09, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_CASTLE, 0x01, 0x31, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0x09/*respawn*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BALLOON, 13016, 4285, -1136, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 11790, 4277, -613, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 10470, 4309, -227, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 7612, 5480, -858, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 7264, 4397, 188, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 7325, 4804, 912, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 7531, 5181, 1510, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 9660, 5328, 1390, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 9660, 5328, 390, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, -8568, 1760, 442, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, -5822, 1751, 698, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, -5822, 2054, 1679, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 2044, 33, -3953, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 5244, 3666, -5643, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 5244, 4221, -6421, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 12837, 4171, -623, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 12582, 4114, -1522, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 846, 33, -3953, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_STAR, 3460, 1475, -10510, 0, 0, 0, 0x00000000, bhvBigRotating),
		OBJECT(MODEL_EDWARD2, 2867, 7231, -1983, 0, 0, 0, 0x00000000, bhvBigRotating),
		OBJECT(MODEL_BLUE_COIN, 2044, 345, -3953, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2044, 601, -3953, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2044, 840, -3953, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1410, 345, -3953, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2773, 620, -3953, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3541, 438, -3953, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_CONE, 1034, -1088, 860, 0, -135, 0, (2 << 16), bhvCone),
		OBJECT(MODEL_CONE, 2995, 576, -9723, 0, -62, 0, (2 << 16), bhvCone),
		OBJECT(MODEL_CONE, -8623, 1666, -243, 0, 11, 0, (2 << 16), bhvCone),
		OBJECT(MODEL_CONE, -8172, 1666, -124, 0, -28, 0, (0 << 16), bhvCone),
		OBJECT(MODEL_NONE, -4347, 3179, -8887, 0, 180, 0, (8 << 16), bhvDeathWarp),
		OBJECT(MODEL_COBIE2, -4197, -1088, -363, 0, 0, 0, (11 << 24) | (1 << 16), bhvCobie2),
		OBJECT(MODEL_COBIE2, -7918, 1666, -2500, 0, 152, 0, (DIALOG_064 << 16), bhvCobie2),
		OBJECT(MODEL_NONE, -3212, 33, -6333, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -12060, 2035, -5636, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -11689, 1666, -3120, 0, 37, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -9044, 2492, -8229, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 845, 33, -9593, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1145, -1055, -5485, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 8048, -1266, -7795, 0, 79, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 8377, -1866, -11135, 0, -23, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4356, -116, -6142, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2928, -116, -798, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -6089, -1824, 6460, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2171, -1088, -2664, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_CONE, 853, -1088, 1240, 0, -80, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CONE, 5189, -2466, -9959, 0, 49, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CONE, 6692, -1088, 1616, 0, -110, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CONE, 6900, -1088, 1394, 0, -99, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CONE, 6861, -1088, 1062, 0, -72, 0, (0 << 16), bhvCone),
		OBJECT(MODEL_CONE, 5537, -2466, -10208, 0, 77, 0, (0 << 16), bhvCone),
		OBJECT(MODEL_CONE, 5537, -2466, -10824, 0, 120, 0, (0 << 16), bhvCone),
		OBJECT(MODEL_CONE, 5247, -2466, -11127, 0, 155, 0, (0 << 16), bhvCone),
		OBJECT(MODEL_CONE, -9976, -1088, 2377, 0, 2, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CONE, -10309, -1088, 2377, 0, 2, 0, (0 << 16), bhvCone),
		OBJECT(MODEL_CONE, -10638, -1088, 2377, 0, 2, 0, (2 << 16), bhvCone),
		OBJECT(MODEL_CONE, -4802, -1824, 4695, 0, -15, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CONE, -4246, -1824, 4695, 0, 27, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CONE, -3706, -1824, 4397, 0, 78, 0, (0 << 16), bhvCone),
		OBJECT(MODEL_CONE, -5273, -1824, 4480, 0, -67, 0, (0 << 16), bhvCone),
		OBJECT(0xEA, 9879, -2466, -11679, 0, 0, 0, 0x00000000, bhvMetalCrate),
		OBJECT(MODEL_NONE, 5493, -2150, -10510, 0, -90, 0, (3 << 16), bhvDeathWarp),
		OBJECT(MODEL_FERRIS, 13846, 2848, -5024, 0, 0, 0, 0x00000000, bhvFerris),
		OBJECT(MODEL_GIRL, -10361, 2492, -9645, 0, -180, 0, (0 << 16), bhvGirl),
		OBJECT(MODEL_GIRL, 9597, -2466, -11262, 0, -38, 0, (1 << 16), bhvGirl),
		OBJECT(MODEL_GIRL, 15249, -2466, -2904, 0, -90, 0, (2 << 16), bhvGirl),
		OBJECT(MODEL_GIRL, -3887, -1088, -2660, 0, -90, 0, (3 << 24) | (3 << 16), bhvGirl),
		OBJECT(MODEL_CONE, 1014, -1088, 1620, 0, -41, 0, (3 << 16), bhvCone),
		OBJECT(MODEL_CONE, 4742, -642, -12254, 0, 123, 0, (3 << 16), bhvCone),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -3597, -1088, -363, 0, 0, 0, (7 << 24) | (1 << 16), bhvKoopaNPC),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -3212, 33, -8186, 0, 0, 0, (DIALOG_156 << 16), bhvKoopaNPC),
		OBJECT(MODEL_KOOPA_WITH_SHELL, 5390, -2466, -8809, 0, 100, 0, (DIALOG_157 << 16), bhvKoopaNPC),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -4281, -1088, 942, 0, 75, 0, (KOOPA_BP_NORMAL << 16), bhvKoopa),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -4281, -1088, 1463, 0, 131, 0, (KOOPA_BP_NORMAL << 16), bhvKoopa),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -5176, -1088, 1456, 0, 143, 0, (KOOPA_BP_NORMAL << 16), bhvKoopa),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -5822, -1088, 393, 0, 62, 0, (KOOPA_BP_NORMAL << 16), bhvKoopa),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -2604, -1088, 480, 0, 31, 0, (KOOPA_BP_NORMAL << 16), bhvKoopa),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -2711, -1053, 1965, 0, 151, 0, (KOOPA_BP_NORMAL << 16), bhvKoopa),
		OBJECT(MODEL_THEATER_KEYDOOR, -3288, 2484, 13845, 0, 0, 0, (0 << 16), bhvDoorWarp),
		OBJECT(MODEL_THEATER_KEYDOOR, -3135, 2484, 13845, 0, -180, 0, (1 << 16), bhvDoorWarp),
		MARIO_POS(0x01, 0, -2572, 2384, 13483),
		OBJECT(MODEL_MOLEMAN2, -4797, -1088, -363, 0, 0, 0, (4 << 24) | (1 << 16), bhvMoleman2),
		OBJECT(MODEL_MOLEMAN2, -8342, -1055, 2418, 0, -180, 0, (DIALOG_158 << 16), bhvMoleman2),
		OBJECT(MODEL_NONE, -3212, -1649, 8766, 0, 0, 0, (1 << 16), bhvMovie),
		OBJECT(MODEL_NONE, -6931, 2537, 808, 0, 0, 0, (8 << 16), bhvMovie),
		OBJECT(MODEL_NONE, -127, 2384, 8075, 0, 0, 0, (9 << 16), bhvMovie),
		OBJECT(MODEL_PROJECTOR, -3212, -1786, 11181, 0, -180, 0, (1 << 16), bhvProjector),
		OBJECT(MODEL_PROJECTOR, -6931, 2537, 2507, 0, -180, 0, (8 << 16), bhvProjector),
		OBJECT(MODEL_PROJECTOR, -127, 2384, 9154, 0, -180, 0, (9 << 16), bhvProjector),
		OBJECT(MODEL_PURPLE_SWITCH, -6931, 2537, 3050, 0, 0, 0, (4 << 24) | (50 << 16), bhvPurpleSwitchHiddenBoxes),
		OBJECT(MODEL_RED_COIN, -7288, 22, -2209, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3906, -1088, -2235, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -10315, 646, 4722, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4731, 2537, 3000, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2727, 1429, -1498, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2436, 1432, 2381, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -8930, -1088, -1324, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2436, 1432, -109, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 137, -757, 1210, 0, 0, 0, (2 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 8126, -2173, -5029, 0, 90, 0, (9 << 16), bhvInstantActiveWarp),
		OBJECT(0xEB, -9146, 2006, 6086, 0, -180, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -5913, 2887, 2991, 0, -180, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -4197, 1733, -1481, 0, -180, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -10347, 1936, -2071, 0, -180, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -4294, 778, 2991, 0, 90, 0, 0x00000000, bhvGoldRing),
		OBJECT(MODEL_ROBOZO2, -3472, -1055, 2690, 0, -180, 0, (DIALOG_160 << 16), bhvRobozo2),
		OBJECT(MODEL_NONE, -979, 2775, 10075, 0, 134, 0, (7 << 16), bhvAirborneStarCollectWarp),
		OBJECT(MODEL_NONE, -3212, 2773, 13496, 0, -180, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 5289, -2466, -10516, 0, 90, 0, (0x04 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_STAR, 4256, 4369, -1911, 0, 0, 0, (0 << 16), bhvStar),
		OBJECT(MODEL_STAR, 3469, 5049, -7029, 0, 0, 0, (6 << 24), bhvStar),
		OBJECT(MODEL_STOPSIGN, -471, -1055, 1813, 0, 90, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, 1139, -1088, 521, 0, 90, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -9597, -1088, 538, 0, 90, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -548, 33, -3151, 0, 90, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, 847, 33, -3188, 0, 0, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -11033, -1055, 652, 0, -180, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -9588, -1055, 2377, 0, -180, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -9588, -1055, 2701, 0, -180, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -9588, -1055, 3036, 0, -180, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -9635, -1055, 3418, 0, -180, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -9959, -1088, 1855, 0, 166, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -10360, -1088, 1855, 0, -160, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STOPSIGN, -10667, -1088, 1855, 0, 153, 0, (30 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, -1002, 33, -3132, 0, -180, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, -5853, 0, -4885, 0, -90, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, -5853, 0, -5679, 0, -90, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, -5853, 0, -6685, 0, -90, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, -7439, 33, -13088, 0, 0, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, -957, -1857, 6011, 0, 90, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, -957, -1857, 4936, 0, 90, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, 5670, -1055, 210, 0, 90, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, 5670, -1055, -865, 0, 90, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, 5670, -1055, -2154, 0, 90, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_STREETLIGHT, -7409, 33, -7618, 0, 0, 0, (115 << 16), bhvPoleGrabbing),
		OBJECT(0xE6, 13846, 3302, -5024, 0, 90, 0, (13 << 16), bhv_costume_token),
		OBJECT(0xE3, 8011, -2344, 1792, 0, 0, 0, (11 << 16), bhv_Wallet),
		OBJECT(MODEL_NONE, -4332, 2011, -9184, 0, 0, 0, (50 << 24) | (5 << 16), bhvWarp),
		TERRAIN(wdw_area_1_collision),
		MACRO_OBJECTS(wdw_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SHOWRUNNER),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wdw_area_2),
		WARP_NODE(0x02, LEVEL_WDW, 0x01, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_WDW, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_CASTLE, 0x01, 0x31, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_WDW, 0x01, 0x03, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AMP, 4689, -369, -2145, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 5257, -369, -1402, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 4758, -282, -382, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 4961, -452, -2125, 0, 75, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 4650, -452, -1218, 0, 126, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 5215, -353, -679, 0, 74, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 4891, -391, 17, 0, -94, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_BALLOON, -258, 1106, 1743, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, -258, 1106, 347, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_BALLOON, 298, 1106, 1014, 0, 0, 0, 0x00000000, bhvBalloon),
		OBJECT(MODEL_NONE, -112, -478, 417, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1394, -478, 1530, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1181, -478, 1530, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1628, -2575, 2302, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2980, -2575, -1487, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2648, -2575, -3213, 0, 0, 0, (1 << 16), bhvCoinFormation),
		OBJECT(0xEA, 1535, -2575, 1005, 0, 0, 0, 0x00000000, bhvMetalCrate),
		OBJECT(0xEA, 1313, -2575, 603, 0, 0, 0, 0x00000000, bhvMetalCrate),
		OBJECT(MODEL_STAR, 1837, -2298, 2090, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -427, -2454, 1473, 0, 90, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -427, -2454, 662, 0, 51, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -1846, -2454, 746, 0, 108, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -1123, -2387, -3481, 0, -80, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -551, -2387, -2905, 0, -80, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, 295, -2234, -2905, 0, -80, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, 3676, -257, -2931, 0, -80, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, 4621, -15, -1485, 0, 100, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, 5227, -20, -754, 0, 100, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -53, 41, 1987, 0, 100, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -4826, -206, 2302, 0, 157, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -39, 1372, 2680, 0, 13, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_STAR, -39, 1536, 1337, 0, 13, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_NONE, -17, -478, 929, 0, 0, 0, (2 << 16), bhvMovie),
		OBJECT(MODEL_PRESS, -3162, 1145, 5010, 0, 0, 0, (0 << 16), bhvPress),
		OBJECT(MODEL_PRESS, -1762, 1145, 5010, 0, 0, 0, (1 << 16), bhvPress),
		OBJECT(MODEL_PRESS, -3162, 1145, 5810, 0, 0, 0, (1 << 16), bhvPress),
		OBJECT(MODEL_PRESS, -1762, 1145, 5810, 0, 0, 0, (0 << 16), bhvPress),
		OBJECT(MODEL_PRESS, -2462, 1145, 5010, 0, 0, 0, (0 << 16), bhvPress),
		OBJECT(MODEL_PRESS, -2462, 1145, 5810, 0, 0, 0, (1 << 16), bhvPress),
		OBJECT(MODEL_PROJECTOR, 2565, -478, 885, 0, -90, 0, (2 << 16), bhvProjector),
		OBJECT(MODEL_NONE, 1713, -2575, 4569, 0, -180, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_STAR, -17, 1632, -4112, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(0xE6, 756, 1106, -4326, 0, 90, 0, (12 << 16), bhv_costume_token),
		TERRAIN(wdw_area_2_collision),
		MACRO_OBJECTS(wdw_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_PIRATE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -2572, 2384, 13483),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
