#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7266, -5059, -343, 0, 0, -90, ccm_dl_3Pipe_005_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5191, -5059, 3949, 0, 45, -90, ccm_dl_3Pipe_006_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3669, -5059, -3348, 0, 45, -90, ccm_dl_3Pipe_007_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2870, -5059, -4059, 0, 53, -90, ccm_dl_3Pipe_008_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1426, -5059, -5158, 0, 90, -90, ccm_dl_3Pipe_009_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7385, -2596, -9319, 0, -90, 0, ccm_dl_4zzNeon_005_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_4zzNeon_005_mesh),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8734, -2596, -9319, 0, -90, 0, ccm_dl_4zzNeon_006_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_4zzNeon_006_mesh),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 53, -5092, -648, ccm_dl_Cone_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -509, 2796, ccm_dl_Cube_012_mesh),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_Cube_012_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -9781, -5350, 8580, ccm_dl_Cube_014_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -9781, -5350, 5080, ccm_dl_Cube_015_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -9781, -5350, 1580, ccm_dl_Cube_016_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -9781, -5350, -1920, ccm_dl_Cube_017_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -9781, -5350, -5420, ccm_dl_Cube_018_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 9718, -5273, 7686, ccm_dl_Cube_019_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -9718, -5273, 7686, ccm_dl_Cube_020_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6111, -5013, 6893, ccm_dl_Cube_021_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 0, -509, 2796, ccm_dl_Cube_022_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6111, -5013, -7019, ccm_dl_Cube_023_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6419, -5013, -7019, 0, -180, 0, ccm_dl_Cube_024_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6419, -5013, 6893, 0, -180, 0, ccm_dl_Cube_025_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7138, -5150, 2519, ccm_dl_Cube_028_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_Cube_028_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4831, -5150, -8733, 0, -125, 0, ccm_dl_Cube_029_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_Cube_029_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 7359, -5150, -854, 0, -168, 0, ccm_dl_Cube_030_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_Cube_030_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -5741, 6814, -8294, ccm_dl_Cylinder_012_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4123, 6814, -8294, ccm_dl_Cylinder_013_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6269, 6814, -8294, 0, 45, 0, ccm_dl_Cylinder_014_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 53, 4498, -648, ccm_dl_Cylinder_015_mesh),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_Cylinder_015_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 53, 4498, -648, 0, 90, 0, ccm_dl_Cylinder_016_mesh),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_Cylinder_016_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 53, 4498, -648, 0, -180, 0, ccm_dl_Cylinder_017_mesh),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_Cylinder_017_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 53, 4498, -648, 0, -90, 0, ccm_dl_Cylinder_018_mesh),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_Cylinder_018_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -8430, -4793, -9281, 0, -90, 0, ccm_dl_FanCase_003_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -7689, -4793, -9281, 0, -90, 0, ccm_dl_FanCase_004_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -8430, -3993, -9281, 0, -90, 0, ccm_dl_FanCase_005_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -7689, -3993, -9281, 0, -90, 0, ccm_dl_FanCase_006_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -8430, -3193, -9281, 0, -90, 0, ccm_dl_FanCase_007_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -7689, -3193, -9281, 0, -90, 0, ccm_dl_FanCase_008_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -8430, -2393, -9281, 0, -90, 0, ccm_dl_FanCase_009_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -7689, -2393, -9281, 0, -90, 0, ccm_dl_FanCase_010_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 26291, 49, 37863, 26291, -51, 37863, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
