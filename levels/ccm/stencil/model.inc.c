Lights1 stencil_couch_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx stencil_couch_ci8_aligner[] = {gsSPEndDisplayList()};
u8 stencil_couch_ci8[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x02, 0x04, 0x05, 0x05, 0x05, 
	0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x05, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x08, 0x08, 0x08, 0x07, 0x07, 0x07, 0x00, 0x00, 
	0x00, 0x01, 0x02, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x04, 0x04, 0x07, 0x00, 
	0x01, 0x02, 0x05, 0x05, 0x05, 0x05, 0x09, 0x09, 
	0x0a, 0x0a, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x0b, 0x0b, 0x04, 0x07, 
	0x02, 0x04, 0x04, 0x04, 0x06, 0x09, 0x09, 0x0c, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x09, 0x09, 0x09, 0x09, 
	0x06, 0x06, 0x06, 0x06, 0x0d, 0x0d, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x0e, 0x0e, 0x0f, 0x10, 
	0x02, 0x04, 0x04, 0x04, 0x06, 0x09, 0x0c, 0x0c, 
	0x11, 0x11, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
	0x09, 0x06, 0x06, 0x06, 0x0d, 0x06, 0x0d, 0x0d, 
	0x06, 0x06, 0x06, 0x06, 0x0e, 0x0e, 0x0f, 0x10, 
	0x02, 0x04, 0x12, 0x04, 0x06, 0x09, 0x09, 0x0c, 
	0x11, 0x11, 0x11, 0x0c, 0x0c, 0x0c, 0x0c, 0x09, 
	0x09, 0x06, 0x06, 0x06, 0x0d, 0x06, 0x0d, 0x06, 
	0x06, 0x06, 0x06, 0x09, 0x11, 0x11, 0x0e, 0x10, 
	0x04, 0x04, 0x12, 0x12, 0x09, 0x09, 0x0c, 0x0c, 
	0x11, 0x11, 0x11, 0x0c, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x06, 0x06, 0x09, 0x09, 
	0x09, 0x06, 0x09, 0x09, 0x0e, 0x0e, 0x0e, 0x10, 
	0x04, 0x0f, 0x0c, 0x0c, 0x13, 0x14, 0x14, 0x14, 
	0x11, 0x11, 0x11, 0x11, 0x0c, 0x09, 0x09, 0x09, 
	0x12, 0x12, 0x09, 0x09, 0x09, 0x09, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x0c, 0x09, 0x06, 0x06, 0x06, 0x08, 
	0x02, 0x0f, 0x0c, 0x0c, 0x14, 0x14, 0x14, 0x14, 
	0x11, 0x11, 0x15, 0x0c, 0x09, 0x09, 0x09, 0x09, 
	0x12, 0x12, 0x12, 0x09, 0x09, 0x0c, 0x16, 0x16, 
	0x15, 0x0c, 0x09, 0x09, 0x06, 0x04, 0x08, 0x02, 
	0x02, 0x0f, 0x0c, 0x0c, 0x14, 0x14, 0x14, 0x13, 
	0x15, 0x15, 0x0c, 0x0c, 0x09, 0x0c, 0x0c, 0x0c, 
	0x12, 0x12, 0x12, 0x12, 0x09, 0x09, 0x16, 0x16, 
	0x0c, 0x15, 0x0c, 0x09, 0x06, 0x04, 0x08, 0x02, 
	0x02, 0x04, 0x0f, 0x0c, 0x13, 0x14, 0x13, 0x13, 
	0x0c, 0x15, 0x0c, 0x0c, 0x09, 0x09, 0x0c, 0x09, 
	0x12, 0x12, 0x12, 0x12, 0x09, 0x09, 0x09, 0x0c, 
	0x0c, 0x0c, 0x15, 0x09, 0x06, 0x06, 0x08, 0x02, 
	0x02, 0x04, 0x17, 0x17, 0x0b, 0x0b, 0x12, 0x0b, 
	0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 
	0x12, 0x12, 0x06, 0x06, 0x06, 0x09, 0x09, 0x09, 
	0x11, 0x11, 0x11, 0x0e, 0x09, 0x05, 0x04, 0x02, 
	0x02, 0x04, 0x17, 0x17, 0x12, 0x12, 0x0b, 0x12, 
	0x06, 0x06, 0x06, 0x06, 0x12, 0x12, 0x12, 0x12, 
	0x12, 0x12, 0x12, 0x12, 0x06, 0x09, 0x09, 0x09, 
	0x0e, 0x0e, 0x0e, 0x0e, 0x09, 0x05, 0x05, 0x02, 
	0x02, 0x04, 0x17, 0x17, 0x06, 0x12, 0x12, 0x12, 
	0x06, 0x06, 0x06, 0x06, 0x0d, 0x0d, 0x04, 0x04, 
	0x12, 0x12, 0x12, 0x12, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x0e, 0x0e, 0x0e, 0x09, 0x05, 0x05, 0x02, 
	0x02, 0x04, 0x17, 0x17, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x04, 0x04, 0x04, 0x04, 
	0x06, 0x12, 0x12, 0x06, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x06, 0x0e, 0x0e, 0x09, 0x05, 0x05, 0x02, 
	0x07, 0x18, 0x04, 0x04, 0x19, 0x06, 0x06, 0x19, 
	0x19, 0x0f, 0x0c, 0x19, 0x19, 0x19, 0x0f, 0x0f, 
	0x12, 0x12, 0x12, 0x12, 0x12, 0x0f, 0x0f, 0x0f, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x04, 0x18, 
	0x07, 0x18, 0x04, 0x06, 0x06, 0x09, 0x09, 0x19, 
	0x19, 0x19, 0x0f, 0x19, 0x19, 0x19, 0x19, 0x0e, 
	0x12, 0x14, 0x14, 0x14, 0x12, 0x12, 0x12, 0x12, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x04, 0x07, 
	0x07, 0x04, 0x06, 0x06, 0x06, 0x06, 0x06, 0x19, 
	0x19, 0x19, 0x0f, 0x19, 0x19, 0x19, 0x19, 0x0f, 
	0x06, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 
	0x12, 0x12, 0x06, 0x06, 0x04, 0x04, 0x18, 0x07, 
	0x07, 0x18, 0x04, 0x04, 0x19, 0x06, 0x06, 0x06, 
	0x0f, 0x0f, 0x0f, 0x19, 0x19, 0x19, 0x19, 0x0f, 
	0x06, 0x06, 0x06, 0x06, 0x12, 0x12, 0x14, 0x14, 
	0x14, 0x0b, 0x0b, 0x12, 0x06, 0x04, 0x04, 0x18, 
	0x01, 0x18, 0x19, 0x19, 0x12, 0x0b, 0x0b, 0x0b, 
	0x12, 0x12, 0x12, 0x12, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x05, 0x06, 0x06, 0x06, 0x0c, 0x0c, 
	0x0c, 0x0b, 0x0b, 0x12, 0x19, 0x19, 0x04, 0x07, 
	0x01, 0x18, 0x19, 0x1a, 0x12, 0x0b, 0x0b, 0x0b, 
	0x13, 0x13, 0x12, 0x13, 0x12, 0x12, 0x12, 0x12, 
	0x06, 0x05, 0x05, 0x06, 0x06, 0x06, 0x0c, 0x0c, 
	0x0c, 0x0b, 0x0b, 0x12, 0x19, 0x19, 0x04, 0x07, 
	0x01, 0x18, 0x19, 0x19, 0x1b, 0x12, 0x12, 0x0b, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x14, 0x14, 0x12, 0x06, 
	0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x0b, 0x0b, 0x09, 0x19, 0x04, 0x07, 
	0x01, 0x18, 0x19, 0x19, 0x1b, 0x12, 0x12, 0x0b, 
	0x13, 0x0c, 0x0c, 0x0c, 0x14, 0x14, 0x12, 0x06, 
	0x05, 0x05, 0x05, 0x06, 0x06, 0x0c, 0x0c, 0x0c, 
	0x1c, 0x0c, 0x0b, 0x0b, 0x09, 0x09, 0x04, 0x07, 
	0x01, 0x07, 0x0d, 0x0d, 0x1b, 0x1b, 0x06, 0x06, 
	0x09, 0x0c, 0x16, 0x16, 0x0c, 0x0c, 0x0c, 0x0f, 
	0x19, 0x19, 0x19, 0x0f, 0x12, 0x15, 0x15, 0x15, 
	0x14, 0x12, 0x12, 0x12, 0x09, 0x09, 0x05, 0x02, 
	0x01, 0x07, 0x07, 0x0d, 0x1b, 0x06, 0x06, 0x06, 
	0x09, 0x0c, 0x0c, 0x09, 0x12, 0x12, 0x12, 0x12, 
	0x19, 0x19, 0x19, 0x0f, 0x06, 0x12, 0x12, 0x12, 
	0x12, 0x12, 0x12, 0x12, 0x09, 0x05, 0x04, 0x02, 
	0x01, 0x07, 0x07, 0x0d, 0x06, 0x0e, 0x0e, 0x0e, 
	0x09, 0x0c, 0x0c, 0x09, 0x12, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x19, 0x19, 0x0f, 0x06, 0x06, 0x06, 0x12, 
	0x12, 0x12, 0x12, 0x0f, 0x05, 0x05, 0x04, 0x02, 
	0x01, 0x01, 0x07, 0x07, 0x1b, 0x0e, 0x06, 0x06, 
	0x09, 0x09, 0x09, 0x09, 0x12, 0x0f, 0x0f, 0x0f, 
	0x19, 0x19, 0x19, 0x19, 0x0f, 0x0f, 0x06, 0x06, 
	0x12, 0x0f, 0x0f, 0x0f, 0x05, 0x04, 0x02, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x02, 
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
	0x04, 0x04, 0x07, 0x04, 0x1d, 0x1d, 0x1e, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x04, 
	0x02, 0x02, 0x0f, 0x0f, 0x0f, 0x02, 0x02, 0x02, 
	0x04, 0x07, 0x07, 0x07, 0x04, 0x07, 0x07, 0x07, 
	0x04, 0x04, 0x07, 0x07, 0x1e, 0x1d, 0x1e, 0x00, 
	0x00, 0x1e, 0x1e, 0x00, 0x1f, 0x1f, 0x01, 0x01, 
	0x07, 0x07, 0x02, 0x02, 0x02, 0x02, 0x07, 0x07, 
	0x20, 0x20, 0x20, 0x07, 0x07, 0x07, 0x01, 0x07, 
	0x07, 0x07, 0x07, 0x01, 0x1e, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x21, 0x21, 0x1f, 0x1f, 
	0x01, 0x01, 0x07, 0x07, 0x07, 0x01, 0x01, 0x01, 
	0x20, 0x20, 0x20, 0x20, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx stencil_couch_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 stencil_couch_ci8_pal_rgba16[] = {
	0x08, 0xd3, 0x08, 0xd5, 0x11, 0x17, 0x09, 0x15, 
	0x11, 0x59, 0x19, 0x5b, 0x19, 0x9d, 0x09, 0x17, 
	0x11, 0x19, 0x21, 0xdf, 0x21, 0xe1, 0x19, 0xdf, 
	0x22, 0x1f, 0x11, 0x9b, 0x21, 0xdd, 0x19, 0x9b, 
	0x19, 0x99, 0x2a, 0x21, 0x19, 0xdd, 0x1a, 0x1f, 
	0x22, 0x61, 0x22, 0x21, 0x2a, 0x61, 0x11, 0x5d, 
	0x09, 0x19, 0x11, 0x5b, 0x19, 0xe1, 0x11, 0x9d, 
	0x2a, 0x63, 0x19, 0x59, 0x11, 0x15, 0x00, 0xd3, 
	0x08, 0xd7, 0x00, 0x91, 
};

Vtx stencil_stencil_mesh_vtx_0[160] = {
	{{{-3129, 1134, 1383},0, {-1031, -1112},{0xB2, 0x49, 0x45, 0xFF}}},
	{{{-2830, 1359, 1484},0, {-1031, 2023},{0xB2, 0x49, 0x45, 0xFF}}},
	{{{-2893, 1583, 1174},0, {2104, 2023},{0xB2, 0x49, 0x45, 0xFF}}},
	{{{-3193, 1358, 1073},0, {2104, -1112},{0xB2, 0x49, 0x45, 0xFF}}},
	{{{-3193, 1358, 1073},0, {-1031, -1112},{0xEC, 0x49, 0x9A, 0xFF}}},
	{{{-2893, 1583, 1174},0, {-1031, 2023},{0xEC, 0x49, 0x9A, 0xFF}}},
	{{{-2655, 1360, 965},0, {2104, 2023},{0xEC, 0x49, 0x9A, 0xFF}}},
	{{{-2954, 1135, 864},0, {2104, -1112},{0xEC, 0x49, 0x9A, 0xFF}}},
	{{{-2954, 1135, 864},0, {-1031, -1112},{0x4E, 0xB7, 0xBB, 0xFF}}},
	{{{-2655, 1360, 965},0, {-1031, 2023},{0x4E, 0xB7, 0xBB, 0xFF}}},
	{{{-2592, 1136, 1275},0, {2104, 2023},{0x4E, 0xB7, 0xBB, 0xFF}}},
	{{{-2891, 911, 1174},0, {2104, -1112},{0x4E, 0xB7, 0xBB, 0xFF}}},
	{{{-2891, 911, 1174},0, {-1031, -1112},{0x14, 0xB7, 0x66, 0xFF}}},
	{{{-2592, 1136, 1275},0, {-1031, 2023},{0x14, 0xB7, 0x66, 0xFF}}},
	{{{-2830, 1359, 1484},0, {2104, 2023},{0x14, 0xB7, 0x66, 0xFF}}},
	{{{-3129, 1134, 1383},0, {2104, -1112},{0x14, 0xB7, 0x66, 0xFF}}},
	{{{-3193, 1358, 1073},0, {2104, 2023},{0x9E, 0xB6, 0xDF, 0xFF}}},
	{{{-2954, 1135, 864},0, {2104, -1112},{0x9E, 0xB6, 0xDF, 0xFF}}},
	{{{-2891, 911, 1174},0, {-1031, -1112},{0x9E, 0xB6, 0xDF, 0xFF}}},
	{{{-3129, 1134, 1383},0, {-1031, 2023},{0x9E, 0xB6, 0xDF, 0xFF}}},
	{{{-2655, 1360, 965},0, {2104, 2023},{0x62, 0x4A, 0x21, 0xFF}}},
	{{{-2893, 1583, 1174},0, {2104, -1112},{0x62, 0x4A, 0x21, 0xFF}}},
	{{{-2830, 1359, 1484},0, {-1031, -1112},{0x62, 0x4A, 0x21, 0xFF}}},
	{{{-2592, 1136, 1275},0, {-1031, 2023},{0x62, 0x4A, 0x21, 0xFF}}},
	{{{-3477, 741, -646},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-3477, 1236, -646},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-3477, 1236, -742},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-3477, 741, -742},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-2310, 741, -742},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-2310, 1236, -742},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-2310, 1236, -646},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-2310, 741, -646},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-2310, 741, -646},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-2310, 1236, -646},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-3477, 1236, -646},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-3477, 741, -646},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-2310, 1236, -742},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-3477, 1236, -742},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-3477, 1236, -646},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2310, 1236, -646},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-9444, 2611, -1829},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-9444, 3246, -1829},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-9444, 3246, -2464},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-9444, 2611, -2464},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-9444, 2611, -2464},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-9444, 3246, -2464},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-8809, 3246, -2464},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-8809, 2611, -2464},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-8809, 2611, -2464},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-8809, 3246, -2464},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-8809, 3246, -1829},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-8809, 2611, -1829},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-8809, 2611, -1829},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-8809, 3246, -1829},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-9444, 3246, -1829},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-9444, 2611, -1829},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-9444, 2611, -2464},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-8809, 2611, -2464},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-8809, 2611, -1829},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-9444, 2611, -1829},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-8809, 3246, -2464},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-9444, 3246, -2464},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-9444, 3246, -1829},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-8809, 3246, -1829},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-10522, 2460, -309},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-10522, 3102, -309},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-10522, 3102, -952},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-10522, 2460, -952},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-10522, 2460, -952},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-10522, 3102, -952},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-9880, 3102, -952},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-9880, 2460, -952},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-9880, 2460, -952},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-9880, 3102, -952},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-9880, 3102, -309},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-9880, 2460, -309},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-9880, 2460, -309},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-9880, 3102, -309},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-10522, 3102, -309},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-10522, 2460, -309},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-10522, 2460, -952},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-9880, 2460, -952},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-9880, 2460, -309},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-10522, 2460, -309},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-9880, 3102, -952},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-10522, 3102, -952},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-10522, 3102, -309},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-9880, 3102, -309},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-9902, 1638, 482},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-9902, 2276, 482},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-9902, 2276, -156},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-9902, 1638, -156},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-9902, 1638, -156},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-9902, 2276, -156},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-9264, 2276, -156},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-9264, 1638, -156},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-9264, 1638, -156},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-9264, 2276, -156},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-9264, 2276, 482},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-9264, 1638, 482},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-9264, 1638, 482},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-9264, 2276, 482},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-9902, 2276, 482},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-9902, 1638, 482},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-9902, 1638, -156},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-9264, 1638, -156},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-9264, 1638, 482},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-9902, 1638, 482},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-9264, 2276, -156},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-9902, 2276, -156},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-9902, 2276, 482},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-9264, 2276, 482},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-8126, 3519, -952},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-8901, 3519, -952},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-8901, 3519, -178},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-8126, 3519, -178},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-8901, 2744, -952},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-8126, 2744, -952},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-8126, 2744, -178},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-8901, 2744, -178},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-8126, 2744, -178},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-8126, 3519, -178},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-8901, 3519, -178},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-8901, 2744, -178},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-8126, 2744, -952},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-8126, 3519, -952},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-8126, 3519, -178},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-8126, 2744, -178},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-8901, 2744, -952},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-8901, 3519, -952},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-8126, 3519, -952},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-8126, 2744, -952},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-8901, 2744, -178},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-8901, 3519, -178},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-8901, 3519, -952},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-8901, 2744, -952},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-11079, 3678, -2887},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-11852, 3678, -2887},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-11852, 3678, -2114},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-11079, 3678, -2114},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-11852, 2904, -2887},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-11079, 2904, -2887},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-11079, 2904, -2114},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-11852, 2904, -2114},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-11079, 2904, -2114},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-11079, 3678, -2114},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-11852, 3678, -2114},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-11852, 2904, -2114},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-11079, 2904, -2887},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-11079, 3678, -2887},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-11079, 3678, -2114},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-11079, 2904, -2114},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-11852, 2904, -2887},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-11852, 3678, -2887},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-11079, 3678, -2887},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-11079, 2904, -2887},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-11852, 2904, -2114},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-11852, 3678, -2114},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-11852, 3678, -2887},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-11852, 2904, -2887},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx stencil_stencil_mesh_tri_0[] = {
	gsSPVertex(stencil_stencil_mesh_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(stencil_stencil_mesh_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(stencil_stencil_mesh_vtx_0 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(stencil_stencil_mesh_vtx_0 + 96, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(stencil_stencil_mesh_vtx_0 + 128, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPEndDisplayList(),
};

Gfx mat_stencil_couch[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, stencil_couch_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 33),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, stencil_couch_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(stencil_couch_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_stencil_couch[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx stencil_stencil_mesh[] = {
	gsSPDisplayList(mat_stencil_couch),
	gsSPDisplayList(stencil_stencil_mesh_tri_0),
	gsSPDisplayList(mat_revert_stencil_couch),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

