Lights1 puddlepoop_puddle_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx puddlepoop_puddle_ci4_aligner[] = {gsSPEndDisplayList()};
u8 puddlepoop_puddle_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x22, 0x11, 
	0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x21, 0x11, 
	0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x12, 0x21, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x12, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x21, 0x11, 0x12, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x12, 0x21, 0x11, 0x12, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x12, 0x11, 0x11, 0x12, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x12, 0x11, 0x11, 0x21, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 
	0x00, 0x11, 0x00, 0x01, 0x12, 0x11, 0x11, 0x21, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 
	0x01, 0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x21, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 
	0x00, 0x11, 0x00, 0x01, 0x11, 0x11, 0x12, 0x21, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x12, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x12, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x21, 0x11, 
	0x11, 0x21, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x21, 0x11, 
	0x12, 0x21, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x12, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x22, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x21, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 
	0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx puddlepoop_puddle_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 puddlepoop_puddle_ci4_pal_rgba16[] = {
	0x00, 0x00, 0x07, 0x31, 0xcf, 0x37, 
};

Vtx puddlepoop_Plane_008_mesh_layer_4_vtx_cull[8] = {
	{{{-74, 6, 74},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-74, 6, 74},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-74, 6, -74},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-74, 6, -74},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{74, 6, 74},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{74, 6, 74},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{74, 6, -74},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{74, 6, -74},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx puddlepoop_Plane_008_mesh_layer_4_vtx_0[4] = {
	{{{-74, 6, 74},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{74, 6, 74},0, {1008, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{74, 6, -74},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-74, 6, -74},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx puddlepoop_Plane_008_mesh_layer_4_tri_0[] = {
	gsSPVertex(puddlepoop_Plane_008_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_puddlepoop_puddle[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, puddlepoop_puddle_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 2),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, puddlepoop_puddle_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(puddlepoop_puddle_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_puddlepoop_puddle[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx puddlepoop_Plane_008_mesh_layer_4[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(puddlepoop_Plane_008_mesh_layer_4_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_puddlepoop_puddle),
	gsSPDisplayList(puddlepoop_Plane_008_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_puddlepoop_puddle),
	gsSPEndDisplayList(),
};

Gfx puddlepoop_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

