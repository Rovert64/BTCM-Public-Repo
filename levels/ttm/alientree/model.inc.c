Lights1 alientree_alien_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx alientree_alien_ci8_aligner[] = {gsSPEndDisplayList()};
u8 alientree_alien_ci8[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x02, 0x08, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 
	0x0e, 0x0f, 0x0b, 0x10, 0x11, 0x12, 0x13, 0x14, 
	0x15, 0x13, 0x16, 0x13, 0x15, 0x09, 0x17, 0x04, 
	0x15, 0x18, 0x19, 0x17, 0x1a, 0x1b, 0x1c, 0x02, 
	0x07, 0x16, 0x0b, 0x0d, 0x1d, 0x16, 0x08, 0x16, 
	0x1e, 0x1f, 0x1e, 0x20, 0x09, 0x21, 0x02, 0x14, 
	0x08, 0x08, 0x15, 0x07, 0x22, 0x23, 0x15, 0x05, 
	0x09, 0x09, 0x0b, 0x24, 0x1b, 0x1b, 0x25, 0x26, 
	0x27, 0x15, 0x09, 0x08, 0x28, 0x0b, 0x29, 0x2a, 
	0x16, 0x2b, 0x09, 0x2c, 0x09, 0x2d, 0x2d, 0x16, 
	0x22, 0x16, 0x0d, 0x09, 0x2e, 0x07, 0x07, 0x17, 
	0x07, 0x1d, 0x2b, 0x1b, 0x2f, 0x17, 0x01, 0x0d, 
	0x08, 0x08, 0x30, 0x21, 0x16, 0x31, 0x29, 0x09, 
	0x32, 0x1b, 0x06, 0x2f, 0x33, 0x1e, 0x34, 0x0b, 
	0x32, 0x35, 0x09, 0x1e, 0x2e, 0x36, 0x0d, 0x0b, 
	0x23, 0x2c, 0x0d, 0x37, 0x38, 0x39, 0x3a, 0x09, 
	0x16, 0x34, 0x24, 0x07, 0x31, 0x31, 0x1c, 0x15, 
	0x22, 0x2b, 0x24, 0x3b, 0x07, 0x32, 0x22, 0x35, 
	0x09, 0x2a, 0x1c, 0x16, 0x34, 0x1c, 0x1c, 0x2a, 
	0x3c, 0x15, 0x2a, 0x16, 0x08, 0x3d, 0x1c, 0x34, 
	0x2a, 0x1e, 0x0b, 0x2a, 0x31, 0x3e, 0x17, 0x3f, 
	0x01, 0x3a, 0x31, 0x40, 0x3a, 0x01, 0x14, 0x25, 
	0x38, 0x41, 0x1c, 0x33, 0x0e, 0x1e, 0x16, 0x16, 
	0x42, 0x08, 0x18, 0x01, 0x23, 0x1b, 0x30, 0x36, 
	0x43, 0x43, 0x1c, 0x2a, 0x44, 0x1e, 0x45, 0x46, 
	0x47, 0x39, 0x0d, 0x48, 0x30, 0x49, 0x43, 0x32, 
	0x4a, 0x3f, 0x17, 0x38, 0x09, 0x0d, 0x0d, 0x1e, 
	0x0b, 0x07, 0x34, 0x23, 0x1e, 0x1b, 0x30, 0x08, 
	0x0a, 0x35, 0x0d, 0x07, 0x0d, 0x34, 0x30, 0x4b, 
	0x4c, 0x4d, 0x1c, 0x4e, 0x29, 0x09, 0x06, 0x15, 
	0x3d, 0x0b, 0x15, 0x4f, 0x4b, 0x21, 0x50, 0x0d, 
	0x0b, 0x17, 0x16, 0x50, 0x0f, 0x1a, 0x14, 0x09, 
	0x17, 0x0d, 0x34, 0x14, 0x07, 0x2e, 0x51, 0x52, 
	0x53, 0x3d, 0x24, 0x00, 0x52, 0x07, 0x23, 0x35, 
	0x0d, 0x0b, 0x0d, 0x3d, 0x54, 0x38, 0x07, 0x2b, 
	0x55, 0x17, 0x08, 0x37, 0x35, 0x2f, 0x15, 0x1c, 
	0x06, 0x15, 0x2a, 0x1c, 0x4d, 0x12, 0x56, 0x57, 
	0x52, 0x15, 0x0d, 0x17, 0x09, 0x38, 0x58, 0x59, 
	0x15, 0x2a, 0x34, 0x1e, 0x17, 0x3b, 0x25, 0x55, 
	0x30, 0x0e, 0x3b, 0x16, 0x31, 0x0a, 0x2a, 0x03, 
	0x03, 0x3f, 0x5a, 0x27, 0x1c, 0x07, 0x23, 0x1b, 
	0x0b, 0x3d, 0x0b, 0x5b, 0x37, 0x08, 0x23, 0x5c, 
	0x0b, 0x0e, 0x16, 0x5d, 0x08, 0x1c, 0x38, 0x5e, 
	0x02, 0x5f, 0x23, 0x1a, 0x0a, 0x16, 0x60, 0x49, 
	0x1e, 0x16, 0x2a, 0x2a, 0x16, 0x07, 0x2a, 0x0b, 
	0x1c, 0x29, 0x5b, 0x1b, 0x09, 0x15, 0x1e, 0x0d, 
	0x24, 0x61, 0x62, 0x2d, 0x63, 0x25, 0x3d, 0x64, 
	0x1a, 0x23, 0x65, 0x0b, 0x66, 0x0b, 0x16, 0x34, 
	0x67, 0x68, 0x69, 0x0e, 0x01, 0x51, 0x47, 0x6a, 
	0x08, 0x24, 0x6b, 0x17, 0x6c, 0x03, 0x09, 0x39, 
	0x29, 0x2d, 0x2d, 0x63, 0x47, 0x67, 0x39, 0x2f, 
	0x05, 0x03, 0x16, 0x08, 0x0e, 0x06, 0x1a, 0x6d, 
	0x6e, 0x22, 0x08, 0x14, 0x6f, 0x67, 0x2e, 0x02, 
	0x0a, 0x55, 0x65, 0x0b, 0x1a, 0x3d, 0x70, 0x29, 
	0x51, 0x71, 0x71, 0x72, 0x67, 0x67, 0x2d, 0x2f, 
	0x0a, 0x15, 0x01, 0x67, 0x39, 0x0d, 0x0d, 0x05, 
	0x4f, 0x01, 0x73, 0x74, 0x21, 0x75, 0x11, 0x09, 
	0x2b, 0x0a, 0x06, 0x0d, 0x24, 0x76, 0x77, 0x0a, 
	0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x5e, 0x34, 0x2a, 
	0x25, 0x0a, 0x3f, 0x5a, 0x2d, 0x41, 0x0b, 0x0b, 
	0x0b, 0x53, 0x38, 0x64, 0x7d, 0x04, 0x09, 0x1b, 
	0x39, 0x16, 0x02, 0x7e, 0x23, 0x1b, 0x29, 0x2a, 
	0x16, 0x7f, 0x80, 0x81, 0x82, 0x83, 0x78, 0x7f, 
	0x51, 0x84, 0x0b, 0x85, 0x86, 0x21, 0x02, 0x51, 
	0x2d, 0x21, 0x16, 0x09, 0x24, 0x34, 0x1b, 0x0a, 
	0x09, 0x33, 0x02, 0x38, 0x2b, 0x87, 0x62, 0x16, 
	0x25, 0x4d, 0x1c, 0x79, 0x88, 0x89, 0x55, 0x8a, 
	0x8b, 0x52, 0x0b, 0x24, 0x3f, 0x8c, 0x71, 0x21, 
	0x16, 0x3e, 0x08, 0x0d, 0x8d, 0x0e, 0x1b, 0x30, 
	0x16, 0x16, 0x3a, 0x46, 0x1b, 0x08, 0x2e, 0x3e, 
	0x0d, 0x16, 0x17, 0x8e, 0x12, 0x4d, 0x4c, 0x8f, 
	0x63, 0x73, 0x65, 0x8d, 0x66, 0x1c, 0x51, 0x67, 
	0x30, 0x16, 0x09, 0x90, 0x5f, 0x5b, 0x65, 0x32, 
	0x8e, 0x04, 0x91, 0x4e, 0x0a, 0x34, 0x28, 0x43, 
	0x28, 0x49, 0x0b, 0x14, 0x34, 0x09, 0x7e, 0x7c, 
	0x92, 0x4d, 0x76, 0x0b, 0x93, 0x57, 0x7e, 0x02, 
	0x94, 0x31, 0x35, 0x45, 0x1b, 0x95, 0x0c, 0x22, 
	0x04, 0x3d, 0x96, 0x0a, 0x16, 0x13, 0x08, 0x16, 
	0x49, 0x69, 0x0b, 0x0b, 0x97, 0x28, 0x51, 0x79, 
	0x71, 0x71, 0x09, 0x31, 0x46, 0x0d, 0x15, 0x17, 
	0x0b, 0x76, 0x43, 0x0e, 0x1b, 0x0c, 0x02, 0x72, 
	0x98, 0x2b, 0x20, 0x52, 0x4d, 0x21, 0x1e, 0x2a, 
	0x1c, 0x65, 0x65, 0x0b, 0x16, 0x99, 0x9a, 0x02, 
	0x9b, 0x04, 0x2f, 0x0a, 0x07, 0x01, 0x13, 0x15, 
	0x0b, 0x17, 0x0b, 0x45, 0x53, 0x21, 0x63, 0x72, 
	0x09, 0x23, 0x57, 0x02, 0x32, 0x68, 0x43, 0x34, 
	0x2a, 0x07, 0x23, 0x55, 0x32, 0x2d, 0x67, 0x71, 
	0x17, 0x5b, 0x2c, 0x52, 0x07, 0x01, 0x17, 0x0b, 
	0x15, 0x0d, 0x0d, 0x37, 0x0b, 0x78, 0x67, 0x32, 
	0x0b, 0x0a, 0x4c, 0x01, 0x47, 0x28, 0x43, 0x34, 
	0x22, 0x9c, 0x31, 0x9d, 0x02, 0x9e, 0x19, 0x9f, 
	0x0e, 0x30, 0x29, 0x2a, 0x28, 0xa0, 0x0b, 0x24, 
	0x5b, 0x0a, 0x32, 0x1d, 0x17, 0x4d, 0x25, 0x21, 
	0x24, 0x3d, 0x5a, 0x75, 0x63, 0x34, 0x43, 0x2a, 
	0x09, 0xa1, 0x43, 0x04, 0xa2, 0xa3, 0x98, 0x24, 
	0x0d, 0x45, 0x29, 0x16, 0xa3, 0x06, 0x23, 0x06, 
	0x24, 0x24, 0x07, 0x0b, 0x1c, 0x03, 0xa4, 0x8e, 
	0x6b, 0x24, 0x98, 0x19, 0xa5, 0x02, 0x51, 0x14, 
	0x11, 0x11, 0x7e, 0x59, 0x54, 0x15, 0x0e, 0x0b, 
	0x23, 0x0b, 0x65, 0x13, 0x3a, 0x31, 0x24, 0x06, 
	0x2f, 0x25, 0x47, 0x08, 0xa6, 0x05, 0xa7, 0x58, 
	0x24, 0xa8, 0x05, 0xa7, 0xa9, 0x64, 0x98, 0x19, 
	0x19, 0x19, 0x19, 0x55, 0x0b, 0x17, 0x32, 0x5c, 
	0x1e, 0x07, 0xa1, 0x36, 0x43, 0x16, 0xaa, 0x1a, 
	0xab, 0x51, 0x09, 0x3a, 0x39, 0x1b, 0xac, 0x66, 
	0x1a, 0x24, 0x24, 0x23, 0x10, 0x1c, 0x1d, 0x65, 
	0x0d, 0x23, 0x4a, 0x08, 0x32, 0x2a, 0x06, 0x09, 
	0x32, 0x08, 0x08, 0x16, 0x23, 0x0d, 0x15, 0x29, 
	0x01, 0x22, 0x2a, 0x08, 0x33, 0x65, 0x05, 0x05, 
	0x10, 0x1c, 0x09, 0x0a, 0x23, 0x16, 0x22, 0x16, 
	0x08, 0x01, 0x14, 0xad, 0x16, 0x16, 0x2e, 0x1c, 
	0x0b, 0x2a, 0x43, 0x1e, 0x31, 0x08, 0x23, 0x3a, 
	0x2a, 0xae, 0x07, 0x52, 0x11, 0x66, 0x09, 0x2b, 
	0x17, 0x3b, 0x57, 0x7f, 0x08, 0x21, 0x07, 0x8e, 
	0x88, 0x8b, 0xaf, 0x47, 0x2d, 0x07, 0x21, 0xa1, 
	0x2a, 0x0c, 0xa1, 0x43, 0x0b, 0x31, 0x0e, 0x39, 
	0x33, 0x79, 0x02, 0x14, 0xa3, 0x3f, 0x3b, 0x0a, 
	0x06, 0x1a, 0x6c, 0xb0, 0xb1, 0xb2, 0x2d, 0x02, 
	0x81, 0xb3, 0xb4, 0x9a, 0x28, 0xb5, 0xb6, 0x35, 
	0x31, 0x51, 0x51, 0x0c, 0x09, 0x35, 0x69, 0x06, 
	0x62, 0x34, 0x07, 0x32, 0x06, 0x03, 0x00, 0x07, 
	0x1b, 0x0b, 0x65, 0x3f, 0xb0, 0x82, 0xb7, 0x9c, 
	0x21, 0x80, 0xb8, 0x51, 0x9c, 0x67, 0x7e, 0x07, 
	0x7e, 0xb9, 0x09, 0xba, 0x75, 0x0d, 0x31, 0x29, 
	0x0c, 0x88, 0x47, 0x14, 0x1c, 0x0d, 0x0a, 0x1c, 
	0x2b, 0xa8, 0x24, 0x06, 0x03, 0x5a, 0xbb, 0xbc, 
	0x51, 0x2d, 0x11, 0x64, 0xba, 0xa9, 0x3a, 0x39, 
	
};

Gfx alientree_alien_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 alientree_alien_ci8_pal_rgba16[] = {
	0x39, 0x4d, 0x5a, 0x53, 0x73, 0x19, 0x41, 0x8d, 
	0x41, 0x4b, 0x42, 0x11, 0x52, 0x95, 0x73, 0x5b, 
	0x62, 0xd7, 0x6b, 0x19, 0x5a, 0x97, 0x6b, 0x5b, 
	0x7b, 0x5d, 0x73, 0x9d, 0x63, 0x1b, 0x84, 0x23, 
	0x31, 0x09, 0x49, 0x4b, 0x73, 0x17, 0x62, 0xd5, 
	0x6a, 0xd7, 0x52, 0x53, 0x7b, 0x9d, 0x4a, 0x11, 
	0x38, 0xc7, 0x38, 0xc5, 0x41, 0xcf, 0x4a, 0x55, 
	0x5a, 0x95, 0x84, 0x1f, 0x84, 0x21, 0x5b, 0x1b, 
	0x39, 0xd3, 0x83, 0x9d, 0x9c, 0xa5, 0x63, 0x19, 
	0x5a, 0xd7, 0x62, 0x95, 0x5a, 0x51, 0x5a, 0x93, 
	0xa4, 0xe7, 0x4a, 0x13, 0x83, 0xdf, 0x52, 0x97, 
	0x39, 0x91, 0x8b, 0xdf, 0x83, 0xdd, 0x41, 0xd1, 
	0x62, 0xd9, 0x7b, 0xdf, 0x8c, 0x21, 0x6a, 0xd9, 
	0x94, 0x63, 0x8c, 0x63, 0x8c, 0x1f, 0x73, 0x5d, 
	0x49, 0x8d, 0x52, 0x55, 0x49, 0xcf, 0x39, 0x4b, 
	0x39, 0xcf, 0x4a, 0x53, 0x73, 0x9b, 0x39, 0x09, 
	0x31, 0x8f, 0x52, 0x13, 0x52, 0xd7, 0x94, 0xa5, 
	0x7b, 0xe1, 0x63, 0x5b, 0x39, 0xd1, 0x9c, 0x63, 
	0x31, 0x8d, 0x94, 0xa3, 0x63, 0x17, 0x49, 0x8f, 
	0x59, 0xd1, 0x52, 0x11, 0x31, 0x91, 0x31, 0x07, 
	0x73, 0x9f, 0x7b, 0x5b, 0x5a, 0x55, 0x41, 0x8f, 
	0x30, 0xc5, 0x6b, 0x1b, 0x73, 0x59, 0x49, 0xd1, 
	0x39, 0x49, 0x4a, 0x0f, 0x51, 0xcf, 0x42, 0x13, 
	0x7b, 0xdd, 0x6b, 0x59, 0x8b, 0x9d, 0x4a, 0x97, 
	0x8c, 0x23, 0x4a, 0x15, 0x62, 0x97, 0x93, 0xdf, 
	0x40, 0xc5, 0x5a, 0xd9, 0x39, 0x8d, 0x94, 0x21, 
	0xad, 0x29, 0x9c, 0xe7, 0x9c, 0xe5, 0x42, 0x15, 
	0x41, 0x8b, 0x7b, 0x59, 0xad, 0x27, 0x83, 0x5b, 
	0x29, 0x4b, 0x72, 0xd7, 0x72, 0x95, 0x51, 0xd1, 
	0x7b, 0x1b, 0x5a, 0x11, 0x8c, 0x61, 0x3a, 0x13, 
	0x59, 0xcf, 0x6a, 0x53, 0x61, 0xcf, 0x69, 0xd1, 
	0x8b, 0x5b, 0x41, 0x07, 0x62, 0x53, 0x6a, 0x95, 
	0x51, 0x09, 0x6a, 0x11, 0x83, 0x19, 0x6a, 0x93, 
	0x52, 0x99, 0x28, 0xc5, 0x41, 0x09, 0x41, 0xd3, 
	0x7b, 0x19, 0x59, 0xcd, 0x94, 0x1f, 0x93, 0x9d, 
	0x51, 0x4b, 0x5b, 0x19, 0x62, 0x55, 0x93, 0x5d, 
	0x73, 0xdf, 0x3a, 0x11, 0x61, 0x4b, 0x52, 0xd9, 
	0x6b, 0x17, 0x52, 0x57, 0x31, 0xd3, 0xa4, 0xe5, 
	0x39, 0x07, 0xb5, 0x27, 0xac, 0xe7, 0x49, 0x49, 
	0xa4, 0xa5, 0x41, 0x4d, 0x51, 0xcd, 0x41, 0x49, 
	0x52, 0x51, 0x94, 0x61, 0x40, 0x85, 0x49, 0x8b, 
	0x30, 0xc7, 0x59, 0x8d, 0x4a, 0x95, 0x39, 0x8b, 
	0x7c, 0x21, 0x40, 0xc7, 0x42, 0x53, 0x6a, 0x97, 
	0x7b, 0x9f, 0x7b, 0x9b, 0xa4, 0xa7, 0xa4, 0x61, 
	0x59, 0x4b, 0x8b, 0x5d, 0xa4, 0xa3, 0x82, 0xd9, 
	0xa4, 0x65, 0xb5, 0x6b, 0x83, 0x9f, 0xac, 0xa5, 
	0x7a, 0x95, 0x49, 0x09, 0x51, 0x8d, 0x48, 0xc5, 
	0x62, 0x11, 
};

Vtx alientree_root_mesh_layer_1_vtx_0[24] = {
	{{{0, 0, -365},0, {-1040, -1040},{0x0, 0x7B, 0xE1, 0xFF}}},
	{{{71, 41, -71},0, {497, -59},{0x3C, 0x5F, 0xC4, 0xFF}}},
	{{{90, 0, -90},0, {496, -325},{0x29, 0x71, 0xD7, 0xFF}}},
	{{{0, 41, -100},0, {73, 73},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{-90, 0, -90},0, {-325, 496},{0xD7, 0x71, 0xD7, 0xFF}}},
	{{{-71, 41, -71},0, {-59, 495},{0xC4, 0x5F, 0xC4, 0xFF}}},
	{{{-365, 0, 0},0, {-1040, 2032},{0xE1, 0x7B, 0x0, 0xFF}}},
	{{{-100, 41, 0},0, {73, 919},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{-90, 0, 90},0, {496, 1317},{0xD7, 0x71, 0x29, 0xFF}}},
	{{{-71, 41, 71},0, {495, 1051},{0xC4, 0x5F, 0x3C, 0xFF}}},
	{{{0, 0, 365},0, {2032, 2032},{0x0, 0x7B, 0x1F, 0xFF}}},
	{{{0, 41, 100},0, {919, 919},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{90, 0, 90},0, {1317, 496},{0x29, 0x71, 0x29, 0xFF}}},
	{{{71, 41, 71},0, {1051, 497},{0x3C, 0x5F, 0x3C, 0xFF}}},
	{{{365, 0, 0},0, {2032, -1040},{0x1F, 0x7B, 0x0, 0xFF}}},
	{{{100, 41, 0},0, {919, 73},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{36, 130, -36},0, {483, 342},{0x53, 0x31, 0xAD, 0xFF}}},
	{{{0, 130, -51},0, {378, 396},{0x0, 0x31, 0x8B, 0xFF}}},
	{{{-36, 130, -36},0, {342, 509},{0xAD, 0x31, 0xAD, 0xFF}}},
	{{{-51, 130, 0},0, {396, 614},{0x8B, 0x31, 0x0, 0xFF}}},
	{{{-36, 130, 36},0, {509, 650},{0xAD, 0x31, 0x53, 0xFF}}},
	{{{0, 130, 51},0, {614, 596},{0x0, 0x31, 0x75, 0xFF}}},
	{{{36, 130, 36},0, {650, 483},{0x53, 0x31, 0x53, 0xFF}}},
	{{{51, 130, 0},0, {596, 378},{0x75, 0x31, 0x0, 0xFF}}},
};

Gfx alientree_root_mesh_layer_1_tri_0[] = {
	gsSPVertex(alientree_root_mesh_layer_1_vtx_0 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 11, 9, 0),
	gsSP2Triangles(12, 11, 10, 0, 12, 13, 11, 0),
	gsSP2Triangles(14, 13, 12, 0, 14, 15, 13, 0),
	gsSP2Triangles(2, 15, 14, 0, 2, 1, 15, 0),
	gsSP2Triangles(15, 1, 16, 0, 1, 17, 16, 0),
	gsSP2Triangles(1, 3, 17, 0, 3, 18, 17, 0),
	gsSP2Triangles(3, 5, 18, 0, 5, 19, 18, 0),
	gsSP2Triangles(5, 7, 19, 0, 7, 20, 19, 0),
	gsSP2Triangles(7, 9, 20, 0, 9, 21, 20, 0),
	gsSP2Triangles(9, 11, 21, 0, 11, 22, 21, 0),
	gsSP2Triangles(11, 13, 22, 0, 13, 23, 22, 0),
	gsSP2Triangles(13, 15, 23, 0, 15, 16, 23, 0),
	gsSPEndDisplayList(),
};

Vtx alientree_root2_skinned_mesh_layer_1_vtx_0[8] = {
	{{{36, 130, -36},0, {483, 342},{0x53, 0x31, 0xAD, 0xFF}}},
	{{{51, 130, 0},0, {596, 378},{0x75, 0x31, 0x0, 0xFF}}},
	{{{0, 130, -51},0, {378, 396},{0x0, 0x31, 0x8B, 0xFF}}},
	{{{36, 130, 36},0, {650, 483},{0x53, 0x31, 0x53, 0xFF}}},
	{{{0, 130, 51},0, {614, 596},{0x0, 0x31, 0x75, 0xFF}}},
	{{{-36, 130, 36},0, {509, 650},{0xAD, 0x31, 0x53, 0xFF}}},
	{{{-51, 130, 0},0, {396, 614},{0x8B, 0x31, 0x0, 0xFF}}},
	{{{-36, 130, -36},0, {342, 509},{0xAD, 0x31, 0xAD, 0xFF}}},
};

Gfx alientree_root2_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(alientree_root2_skinned_mesh_layer_1_vtx_0 + 0, 8, 0),
	gsSPEndDisplayList(),
};

Vtx alientree_root2_mesh_layer_1_vtx_0[8] = {
	{{{14, 114, -14},0, {493, 487},{0x58, 0x16, 0xA8, 0xFF}}},
	{{{0, 114, -19},0, {488, 492},{0x0, 0x16, 0x83, 0xFF}}},
	{{{-14, 114, -14},0, {487, 499},{0xA8, 0x16, 0xA8, 0xFF}}},
	{{{-19, 114, 0},0, {492, 504},{0x83, 0x16, 0x0, 0xFF}}},
	{{{-14, 114, 14},0, {499, 505},{0xA8, 0x16, 0x58, 0xFF}}},
	{{{0, 114, 19},0, {504, 500},{0x0, 0x16, 0x7D, 0xFF}}},
	{{{14, 114, 14},0, {505, 493},{0x58, 0x16, 0x58, 0xFF}}},
	{{{19, 114, 0},0, {500, 488},{0x7D, 0x16, 0x0, 0xFF}}},
};

Gfx alientree_root2_mesh_layer_1_tri_0[] = {
	gsSPVertex(alientree_root2_mesh_layer_1_vtx_0 + 0, 8, 8),
	gsSP2Triangles(1, 0, 8, 0, 0, 9, 8, 0),
	gsSP2Triangles(0, 2, 9, 0, 2, 10, 9, 0),
	gsSP2Triangles(2, 7, 10, 0, 7, 11, 10, 0),
	gsSP2Triangles(7, 6, 11, 0, 6, 12, 11, 0),
	gsSP2Triangles(6, 5, 12, 0, 5, 13, 12, 0),
	gsSP2Triangles(5, 4, 13, 0, 4, 14, 13, 0),
	gsSP2Triangles(4, 3, 14, 0, 3, 15, 14, 0),
	gsSP2Triangles(3, 1, 15, 0, 1, 8, 15, 0),
	gsSPEndDisplayList(),
};

Vtx alientree_root3_skinned_mesh_layer_1_vtx_0[8] = {
	{{{-14, 114, -14},0, {487, 499},{0xA8, 0x16, 0xA8, 0xFF}}},
	{{{-19, 114, 0},0, {492, 504},{0x83, 0x16, 0x0, 0xFF}}},
	{{{-14, 114, 14},0, {499, 505},{0xA8, 0x16, 0x58, 0xFF}}},
	{{{0, 114, 19},0, {504, 500},{0x0, 0x16, 0x7D, 0xFF}}},
	{{{14, 114, 14},0, {505, 493},{0x58, 0x16, 0x58, 0xFF}}},
	{{{19, 114, 0},0, {500, 488},{0x7D, 0x16, 0x0, 0xFF}}},
	{{{14, 114, -14},0, {493, 487},{0x58, 0x16, 0xA8, 0xFF}}},
	{{{0, 114, -19},0, {488, 492},{0x0, 0x16, 0x83, 0xFF}}},
};

Gfx alientree_root3_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(alientree_root3_skinned_mesh_layer_1_vtx_0 + 0, 8, 0),
	gsSPEndDisplayList(),
};

Vtx alientree_root3_mesh_layer_1_vtx_0[1] = {
	{{{0, 259, 0},0, {496, 496},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx alientree_root3_mesh_layer_1_tri_0[] = {
	gsSPVertex(alientree_root3_mesh_layer_1_vtx_0 + 0, 1, 8),
	gsSP2Triangles(0, 1, 8, 0, 1, 2, 8, 0),
	gsSP2Triangles(2, 3, 8, 0, 3, 4, 8, 0),
	gsSP2Triangles(4, 5, 8, 0, 5, 6, 8, 0),
	gsSP2Triangles(6, 7, 8, 0, 7, 0, 8, 0),
	gsSPEndDisplayList(),
};


Gfx mat_alientree_alien[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, alientree_alien_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 188),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, alientree_alien_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(alientree_alien_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_alientree_alien[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx alientree_root_mesh_layer_1[] = {
	gsSPDisplayList(mat_alientree_alien),
	gsSPDisplayList(alientree_root_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_alientree_alien),
	gsSPEndDisplayList(),
};

Gfx alientree_root2_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_alientree_alien),
	gsSPDisplayList(alientree_root2_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_alientree_alien),
	gsSPEndDisplayList(),
};

Gfx alientree_root2_mesh_layer_1[] = {
	gsSPDisplayList(mat_alientree_alien),
	gsSPDisplayList(alientree_root2_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_alientree_alien),
	gsSPEndDisplayList(),
};

Gfx alientree_root3_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_alientree_alien),
	gsSPDisplayList(alientree_root3_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_alientree_alien),
	gsSPEndDisplayList(),
};

Gfx alientree_root3_mesh_layer_1[] = {
	gsSPDisplayList(mat_alientree_alien),
	gsSPDisplayList(alientree_root3_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_alientree_alien),
	gsSPEndDisplayList(),
};

Gfx alientree_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

