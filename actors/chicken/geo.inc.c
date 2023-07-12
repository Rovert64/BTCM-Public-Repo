#include "src/game/envfx_snow.h"

const GeoLayout chicken_geo[] = {
	GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 70),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 30, 0, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, chicken_Body_mesh),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, chicken_Head_skinned),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 36, 0, -18, 0, -1),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, chicken_Head_mesh),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 22, 19, -33, 16, -54, -155),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chicken_LWing_mesh),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -23, 18, -32, 14, 63, 150),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chicken_RWing_mesh),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, chicken_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, chicken_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};