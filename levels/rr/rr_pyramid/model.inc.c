Lights1 rr_pyramid_Pyramid_Brick_lights = gdSPDefLights1(
	0x94, 0x94, 0x94,
	0xFF, 0xFF, 0xFF, 0xE7, 0x88, 0x1D);

Lights1 rr_pyramid_Pyramid_Floor_lights = gdSPDefLights1(
	0x94, 0x94, 0x94,
	0xFF, 0xFF, 0xFF, 0xE7, 0x88, 0x1D);

Gfx rr_pyramid_Desert_Pyramid_ci8_aligner[] = {gsSPEndDisplayList()};
u8 rr_pyramid_Desert_Pyramid_ci8[] = {
	0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x02, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x03, 0x02, 0x04, 0x05, 0x04, 0x04, 
	0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 
	0x0b, 0x0c, 0x0c, 0x0b, 0x0c, 0x0b, 0x0e, 0x0c, 
	0x0b, 0x0f, 0x0f, 0x0b, 0x0b, 0x10, 0x11, 0x12, 
	0x12, 0x13, 0x0a, 0x14, 0x0b, 0x14, 0x15, 0x16, 
	0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 
	0x09, 0x13, 0x1b, 0x13, 0x1d, 0x09, 0x12, 0x1f, 
	0x09, 0x20, 0x21, 0x1c, 0x09, 0x22, 0x1b, 0x23, 
	0x08, 0x19, 0x1a, 0x1a, 0x1b, 0x1b, 0x13, 0x24, 
	0x03, 0x25, 0x26, 0x27, 0x28, 0x23, 0x08, 0x29, 
	0x26, 0x26, 0x29, 0x28, 0x2a, 0x26, 0x2b, 0x26, 
	0x2c, 0x2d, 0x2e, 0x2f, 0x1a, 0x27, 0x30, 0x31, 
	0x29, 0x26, 0x28, 0x28, 0x32, 0x30, 0x1c, 0x0c, 
	0x33, 0x34, 0x08, 0x27, 0x27, 0x27, 0x32, 0x32, 
	0x31, 0x35, 0x36, 0x23, 0x27, 0x26, 0x37, 0x38, 
	0x36, 0x36, 0x39, 0x1a, 0x26, 0x29, 0x23, 0x3a, 
	0x27, 0x1a, 0x27, 0x23, 0x29, 0x28, 0x13, 0x0c, 
	0x33, 0x34, 0x28, 0x27, 0x13, 0x1a, 0x23, 0x07, 
	0x3b, 0x3c, 0x35, 0x32, 0x26, 0x2b, 0x3d, 0x3e, 
	0x2b, 0x2c, 0x1a, 0x3f, 0x26, 0x32, 0x32, 0x23, 
	0x39, 0x1a, 0x1a, 0x1a, 0x2f, 0x2f, 0x09, 0x0c, 
	0x33, 0x18, 0x26, 0x27, 0x27, 0x32, 0x32, 0x36, 
	0x07, 0x3c, 0x35, 0x36, 0x32, 0x3d, 0x3d, 0x2b, 
	0x2c, 0x40, 0x1a, 0x41, 0x26, 0x23, 0x2d, 0x38, 
	0x42, 0x40, 0x1a, 0x1c, 0x1c, 0x1a, 0x20, 0x43, 
	0x04, 0x44, 0x08, 0x29, 0x32, 0x35, 0x3c, 0x07, 
	0x32, 0x07, 0x45, 0x35, 0x35, 0x36, 0x2d, 0x2c, 
	0x2c, 0x27, 0x1a, 0x1a, 0x27, 0x1a, 0x27, 0x46, 
	0x47, 0x38, 0x2d, 0x26, 0x27, 0x2f, 0x1d, 0x48, 
	0x03, 0x49, 0x3c, 0x3c, 0x36, 0x36, 0x36, 0x3c, 
	0x35, 0x3b, 0x18, 0x07, 0x3c, 0x35, 0x35, 0x07, 
	0x36, 0x23, 0x13, 0x1d, 0x13, 0x1a, 0x39, 0x4a, 
	0x4a, 0x2d, 0x2d, 0x2b, 0x2d, 0x2a, 0x1b, 0x4b, 
	0x17, 0x4c, 0x18, 0x3c, 0x31, 0x27, 0x26, 0x23, 
	0x36, 0x07, 0x07, 0x35, 0x36, 0x07, 0x4d, 0x3c, 
	0x3c, 0x36, 0x1a, 0x13, 0x13, 0x4e, 0x39, 0x2c, 
	0x4f, 0x2b, 0x50, 0x4f, 0x36, 0x32, 0x26, 0x14, 
	0x51, 0x4c, 0x52, 0x36, 0x36, 0x28, 0x2a, 0x23, 
	0x40, 0x2c, 0x2d, 0x36, 0x36, 0x35, 0x07, 0x3c, 
	0x18, 0x18, 0x36, 0x23, 0x26, 0x53, 0x50, 0x4a, 
	0x2b, 0x23, 0x54, 0x55, 0x56, 0x35, 0x28, 0x0f, 
	0x57, 0x58, 0x36, 0x23, 0x30, 0x26, 0x23, 0x32, 
	0x1a, 0x1a, 0x27, 0x23, 0x26, 0x23, 0x59, 0x35, 
	0x18, 0x18, 0x07, 0x36, 0x5a, 0x55, 0x4f, 0x5b, 
	0x2b, 0x4f, 0x4a, 0x2d, 0x5c, 0x3c, 0x3a, 0x14, 
	0x5d, 0x49, 0x35, 0x35, 0x45, 0x4d, 0x07, 0x32, 
	0x27, 0x27, 0x26, 0x2d, 0x32, 0x36, 0x32, 0x23, 
	0x07, 0x3c, 0x52, 0x32, 0x35, 0x31, 0x2d, 0x3d, 
	0x2d, 0x2b, 0x2d, 0x36, 0x32, 0x07, 0x30, 0x09, 
	0x01, 0x58, 0x3c, 0x5e, 0x34, 0x58, 0x5f, 0x31, 
	0x26, 0x32, 0x36, 0x32, 0x3b, 0x3c, 0x35, 0x55, 
	0x3c, 0x3c, 0x36, 0x35, 0x3c, 0x07, 0x2b, 0x39, 
	0x2c, 0x26, 0x36, 0x52, 0x36, 0x3c, 0x3c, 0x23, 
	0x00, 0x60, 0x61, 0x34, 0x58, 0x25, 0x5f, 0x3c, 
	0x23, 0x28, 0x28, 0x32, 0x3b, 0x3b, 0x3c, 0x4d, 
	0x3c, 0x36, 0x36, 0x52, 0x4d, 0x5f, 0x35, 0x27, 
	0x1a, 0x2a, 0x32, 0x07, 0x3c, 0x5f, 0x18, 0x30, 
	0x00, 0x05, 0x60, 0x62, 0x04, 0x02, 0x63, 0x63, 
	0x4c, 0x58, 0x4c, 0x34, 0x25, 0x4c, 0x4c, 0x05, 
	0x62, 0x58, 0x49, 0x58, 0x63, 0x06, 0x60, 0x58, 
	0x58, 0x49, 0x25, 0x58, 0x63, 0x63, 0x4c, 0x5f, 
	0x00, 0x01, 0x01, 0x02, 0x00, 0x00, 0x01, 0x03, 
	0x05, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x64, 0x14, 0x14, 0x65, 0x65, 0x65, 0x0c, 0x66, 
	0x66, 0x67, 0x65, 0x0f, 0x20, 0x13, 0x21, 0x65, 
	0x00, 0x68, 0x69, 0x6a, 0x1b, 0x1c, 0x20, 0x1c, 
	0x28, 0x28, 0x1c, 0x4b, 0x6b, 0x10, 0x11, 0x6c, 
	0x1a, 0x13, 0x09, 0x12, 0x12, 0x12, 0x12, 0x1d, 
	0x09, 0x12, 0x1a, 0x12, 0x1a, 0x23, 0x6d, 0x6e, 
	0x00, 0x6f, 0x70, 0x71, 0x30, 0x27, 0x13, 0x2a, 
	0x35, 0x23, 0x13, 0x09, 0x1e, 0x20, 0x1c, 0x19, 
	0x32, 0x26, 0x08, 0x27, 0x08, 0x30, 0x26, 0x23, 
	0x28, 0x23, 0x23, 0x29, 0x29, 0x08, 0x6a, 0x72, 
	0x00, 0x73, 0x3c, 0x3b, 0x07, 0x27, 0x2f, 0x28, 
	0x23, 0x26, 0x1a, 0x13, 0x12, 0x1c, 0x1b, 0x26, 
	0x31, 0x26, 0x26, 0x23, 0x30, 0x3c, 0x30, 0x32, 
	0x32, 0x29, 0x29, 0x36, 0x30, 0x29, 0x32, 0x1b, 
	0x00, 0x49, 0x36, 0x35, 0x32, 0x27, 0x27, 0x29, 
	0x29, 0x28, 0x26, 0x1b, 0x12, 0x74, 0x1b, 0x28, 
	0x36, 0x32, 0x32, 0x29, 0x36, 0x36, 0x35, 0x30, 
	0x32, 0x31, 0x30, 0x36, 0x30, 0x28, 0x32, 0x09, 
	0x02, 0x3b, 0x23, 0x30, 0x28, 0x08, 0x26, 0x3a, 
	0x23, 0x29, 0x23, 0x28, 0x1b, 0x09, 0x27, 0x32, 
	0x32, 0x30, 0x30, 0x29, 0x28, 0x36, 0x32, 0x26, 
	0x28, 0x36, 0x07, 0x35, 0x29, 0x26, 0x26, 0x12, 
	0x00, 0x5f, 0x31, 0x23, 0x29, 0x29, 0x23, 0x08, 
	0x27, 0x27, 0x2f, 0x08, 0x23, 0x13, 0x09, 0x26, 
	0x32, 0x32, 0x23, 0x29, 0x28, 0x28, 0x23, 0x26, 
	0x29, 0x32, 0x32, 0x36, 0x28, 0x26, 0x08, 0x09, 
	0x00, 0x60, 0x5f, 0x36, 0x36, 0x30, 0x31, 0x32, 
	0x23, 0x28, 0x1a, 0x27, 0x26, 0x1a, 0x12, 0x28, 
	0x07, 0x30, 0x26, 0x26, 0x26, 0x26, 0x26, 0x36, 
	0x32, 0x23, 0x26, 0x26, 0x28, 0x1a, 0x21, 0x75, 
	0x00, 0x06, 0x58, 0x18, 0x31, 0x36, 0x35, 0x29, 
	0x28, 0x28, 0x26, 0x08, 0x32, 0x32, 0x28, 0x36, 
	0x18, 0x32, 0x29, 0x32, 0x23, 0x26, 0x2e, 0x23, 
	0x2a, 0x32, 0x26, 0x26, 0x27, 0x2f, 0x1e, 0x10, 
	0x00, 0x34, 0x5f, 0x5f, 0x35, 0x30, 0x31, 0x32, 
	0x08, 0x08, 0x32, 0x31, 0x31, 0x32, 0x32, 0x35, 
	0x3c, 0x36, 0x31, 0x07, 0x35, 0x2d, 0x39, 0x39, 
	0x32, 0x52, 0x36, 0x23, 0x28, 0x28, 0x09, 0x76, 
	0x00, 0x5e, 0x3c, 0x5f, 0x3c, 0x52, 0x07, 0x07, 
	0x36, 0x32, 0x52, 0x31, 0x32, 0x31, 0x52, 0x3c, 
	0x07, 0x07, 0x35, 0x07, 0x35, 0x31, 0x47, 0x4a, 
	0x2b, 0x3c, 0x31, 0x26, 0x29, 0x32, 0x12, 0x6b, 
	0x00, 0x18, 0x31, 0x07, 0x3b, 0x07, 0x35, 0x3c, 
	0x3c, 0x36, 0x07, 0x30, 0x30, 0x31, 0x35, 0x35, 
	0x36, 0x36, 0x52, 0x3c, 0x07, 0x36, 0x30, 0x71, 
	0x31, 0x35, 0x30, 0x26, 0x29, 0x36, 0x1a, 0x77, 
	0x00, 0x25, 0x5f, 0x3c, 0x07, 0x3c, 0x07, 0x3c, 
	0x07, 0x35, 0x07, 0x07, 0x07, 0x36, 0x36, 0x30, 
	0x31, 0x35, 0x3b, 0x3b, 0x5e, 0x70, 0x71, 0x78, 
	0x79, 0x3c, 0x36, 0x29, 0x36, 0x35, 0x23, 0x67, 
	0x00, 0x60, 0x4c, 0x34, 0x31, 0x3c, 0x5f, 0x3b, 
	0x3c, 0x52, 0x31, 0x07, 0x35, 0x52, 0x30, 0x30, 
	0x3c, 0x3b, 0x5f, 0x5f, 0x25, 0x5f, 0x34, 0x7a, 
	0x34, 0x34, 0x3c, 0x30, 0x36, 0x07, 0x3c, 0x23, 
	0x00, 0x63, 0x58, 0x58, 0x3b, 0x5f, 0x58, 0x5f, 
	0x18, 0x3b, 0x31, 0x07, 0x31, 0x32, 0x23, 0x52, 
	0x4c, 0x60, 0x63, 0x63, 0x62, 0x62, 0x05, 0x62, 
	0x63, 0x63, 0x63, 0x58, 0x25, 0x25, 0x63, 0x25, 
	0x00, 0x05, 0x63, 0x05, 0x62, 0x5d, 0x7b, 0x03, 
	0x05, 0x63, 0x63, 0x04, 0x63, 0x25, 0x34, 0x4c, 
	
};

Gfx rr_pyramid_Desert_Pyramid_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 rr_pyramid_Desert_Pyramid_ci8_pal_rgba16[] = {
	0x00, 0x01, 0x08, 0x01, 0x10, 0x01, 0x18, 0x01, 
	0x20, 0x01, 0x28, 0x01, 0x38, 0x81, 0x8a, 0xc1, 
	0xac, 0x0b, 0xd5, 0x13, 0xe5, 0xd9, 0xf6, 0x5d, 
	0xf6, 0x9f, 0xf6, 0xe1, 0xf6, 0xa1, 0xf6, 0x1d, 
	0xde, 0x1b, 0xcd, 0x55, 0xcc, 0xd1, 0xc4, 0x8f, 
	0xed, 0xdb, 0xe5, 0xdb, 0xe6, 0xe1, 0x30, 0x41, 
	0x72, 0x01, 0xb4, 0x4d, 0xbc, 0x8d, 0xbc, 0x8f, 
	0xc4, 0x91, 0xcc, 0xd3, 0xdd, 0x57, 0xd5, 0x53, 
	0xdd, 0x55, 0xd5, 0x55, 0xe5, 0x97, 0xa3, 0xc7, 
	0xf6, 0xe3, 0x59, 0x41, 0xac, 0x09, 0xb4, 0x4b, 
	0xa3, 0xc9, 0x9b, 0xc7, 0xa4, 0x09, 0xac, 0x07, 
	0xb4, 0x49, 0xa3, 0xc5, 0xac, 0x4b, 0xb4, 0x8d, 
	0x93, 0x45, 0x93, 0x03, 0x9b, 0x85, 0x20, 0x41, 
	0x61, 0x81, 0x93, 0x01, 0x93, 0x43, 0xa3, 0xc3, 
	0x9b, 0x83, 0xbc, 0x8b, 0x9b, 0x87, 0x7a, 0x41, 
	0x82, 0x81, 0xac, 0x05, 0x9b, 0xc3, 0xcc, 0xcf, 
	0xac, 0x49, 0xcd, 0x11, 0xa4, 0x07, 0xee, 0x1b, 
	0x72, 0x41, 0x82, 0xc1, 0xac, 0x47, 0xa4, 0x05, 
	0xdd, 0xd9, 0x59, 0x81, 0xbc, 0x89, 0xdd, 0x97, 
	0x48, 0xc1, 0x7a, 0x81, 0xc4, 0x8d, 0xb4, 0x47, 
	0xc4, 0x89, 0x40, 0xc1, 0x8b, 0x01, 0xb4, 0x89, 
	0xac, 0x45, 0x93, 0x85, 0x8a, 0xc3, 0x30, 0x81, 
	0x51, 0x01, 0x9b, 0xc5, 0x82, 0xc3, 0xbc, 0x87, 
	0x93, 0x41, 0x28, 0x41, 0x6a, 0x01, 0x69, 0xc1, 
	0x40, 0x81, 0x61, 0xc1, 0x30, 0x01, 0x38, 0x41, 
	0xd5, 0x97, 0xf6, 0x1b, 0xdd, 0x9b, 0xdd, 0xdb, 
	0x72, 0x45, 0x8b, 0x07, 0xa3, 0xcb, 0xe6, 0x1b, 
	0xc5, 0x13, 0x9b, 0x8f, 0xcd, 0x15, 0x59, 0x83, 
	0x7a, 0x43, 0x82, 0x85, 0xb4, 0x8f, 0x49, 0x01, 
	0xcd, 0x13, 0xe6, 0x5d, 0xde, 0x9f, 0xee, 0x1d, 
	0x61, 0x85, 0x6a, 0x03, 0x49, 0x03, 0x18, 0x41, 
	
};

Gfx rr_pyramid_Desert_Pyramid_Floor_ci8_aligner[] = {gsSPEndDisplayList()};
u8 rr_pyramid_Desert_Pyramid_Floor_ci8[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01, 0x05, 
	0x06, 0x07, 0x05, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 
	0x0d, 0x0e, 0x0f, 0x10, 0x10, 0x11, 0x10, 0x12, 
	0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x13, 
	0x1a, 0x1b, 0x1c, 0x1c, 0x1d, 0x17, 0x1e, 0x1f, 
	0x20, 0x21, 0x22, 0x21, 0x03, 0x23, 0x0f, 0x24, 
	0x25, 0x25, 0x0f, 0x26, 0x27, 0x28, 0x29, 0x2a, 
	0x03, 0x2b, 0x1b, 0x2c, 0x2c, 0x2d, 0x1f, 0x08, 
	0x1a, 0x2e, 0x1b, 0x2f, 0x2f, 0x30, 0x1d, 0x30, 
	0x30, 0x30, 0x31, 0x32, 0x04, 0x03, 0x33, 0x01, 
	0x02, 0x01, 0x01, 0x07, 0x01, 0x05, 0x02, 0x09, 
	0x04, 0x34, 0x1b, 0x35, 0x36, 0x37, 0x38, 0x39, 
	0x1a, 0x2e, 0x1c, 0x1c, 0x2f, 0x2f, 0x17, 0x3a, 
	0x3a, 0x3b, 0x3c, 0x22, 0x03, 0x3d, 0x3e, 0x3f, 
	0x40, 0x41, 0x3e, 0x3d, 0x3e, 0x42, 0x43, 0x15, 
	0x15, 0x44, 0x1b, 0x35, 0x45, 0x46, 0x42, 0x01, 
	0x47, 0x1b, 0x1b, 0x1c, 0x1b, 0x1c, 0x1c, 0x17, 
	0x17, 0x17, 0x48, 0x22, 0x33, 0x49, 0x4a, 0x1d, 
	0x4a, 0x4b, 0x4c, 0x4a, 0x1d, 0x1d, 0x4d, 0x4d, 
	0x45, 0x4d, 0x35, 0x35, 0x1b, 0x4e, 0x15, 0x4f, 
	0x47, 0x2e, 0x1c, 0x1b, 0x1c, 0x1b, 0x1c, 0x2f, 
	0x17, 0x17, 0x17, 0x32, 0x05, 0x50, 0x4c, 0x4a, 
	0x4c, 0x51, 0x4a, 0x1d, 0x1d, 0x4a, 0x52, 0x1b, 
	0x45, 0x4d, 0x45, 0x1b, 0x1b, 0x1b, 0x53, 0x4f, 
	0x54, 0x2f, 0x1c, 0x1c, 0x1b, 0x4d, 0x2e, 0x1c, 
	0x55, 0x30, 0x56, 0x22, 0x02, 0x49, 0x51, 0x57, 
	0x51, 0x4a, 0x4a, 0x1d, 0x1d, 0x4a, 0x58, 0x3b, 
	0x4e, 0x1b, 0x1b, 0x1b, 0x59, 0x1c, 0x15, 0x07, 
	0x5a, 0x3b, 0x2f, 0x1c, 0x1b, 0x5b, 0x1b, 0x1b, 
	0x1b, 0x1c, 0x30, 0x22, 0x02, 0x5c, 0x4a, 0x1d, 
	0x1d, 0x1d, 0x1d, 0x5d, 0x5d, 0x5e, 0x4a, 0x5f, 
	0x3b, 0x1b, 0x1b, 0x2f, 0x2f, 0x14, 0x14, 0x01, 
	0x44, 0x2f, 0x55, 0x2e, 0x5b, 0x60, 0x60, 0x56, 
	0x56, 0x2f, 0x1c, 0x20, 0x09, 0x61, 0x52, 0x1d, 
	0x62, 0x52, 0x5d, 0x63, 0x5d, 0x64, 0x65, 0x65, 
	0x4a, 0x4a, 0x14, 0x2f, 0x14, 0x14, 0x3c, 0x04, 
	0x66, 0x62, 0x2f, 0x4d, 0x5b, 0x60, 0x56, 0x2f, 
	0x2f, 0x2f, 0x2f, 0x67, 0x04, 0x68, 0x1d, 0x52, 
	0x69, 0x63, 0x5d, 0x6a, 0x6b, 0x6c, 0x6d, 0x63, 
	0x6e, 0x6f, 0x4b, 0x14, 0x1c, 0x43, 0x16, 0x70, 
	0x2b, 0x62, 0x1c, 0x2e, 0x71, 0x56, 0x2f, 0x2f, 
	0x2f, 0x2f, 0x2f, 0x43, 0x70, 0x5c, 0x4a, 0x6e, 
	0x63, 0x6e, 0x4a, 0x58, 0x5e, 0x0a, 0x72, 0x6a, 
	0x73, 0x65, 0x6f, 0x51, 0x14, 0x43, 0x3c, 0x03, 
	0x2b, 0x74, 0x55, 0x1c, 0x62, 0x2a, 0x2f, 0x2f, 
	0x2f, 0x2f, 0x1c, 0x75, 0x70, 0x76, 0x4a, 0x4a, 
	0x4a, 0x3b, 0x4a, 0x5f, 0x77, 0x77, 0x62, 0x52, 
	0x63, 0x65, 0x4a, 0x4c, 0x4a, 0x59, 0x42, 0x02, 
	0x34, 0x78, 0x2b, 0x78, 0x44, 0x44, 0x5a, 0x5a, 
	0x5a, 0x44, 0x44, 0x2e, 0x03, 0x1a, 0x35, 0x52, 
	0x30, 0x79, 0x64, 0x64, 0x7a, 0x7b, 0x30, 0x52, 
	0x49, 0x7c, 0x61, 0x5c, 0x50, 0x2e, 0x43, 0x7d, 
	0x4f, 0x01, 0x09, 0x39, 0x4f, 0x03, 0x02, 0x4f, 
	0x03, 0x33, 0x33, 0x08, 0x04, 0x76, 0x1b, 0x49, 
	0x4a, 0x4a, 0x65, 0x65, 0x5d, 0x51, 0x4a, 0x7e, 
	0x09, 0x4f, 0x7f, 0x02, 0x09, 0x4f, 0x39, 0x7d, 
	0x80, 0x80, 0x81, 0x80, 0x80, 0x82, 0x80, 0x83, 
	0x83, 0x84, 0x85, 0x86, 0x13, 0x54, 0x1b, 0x1b, 
	0x1b, 0x6e, 0x6e, 0x6e, 0x87, 0x88, 0x57, 0x89, 
	0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8e, 0x8d, 0x8d, 
	0x8f, 0x90, 0x91, 0x91, 0x91, 0x92, 0x81, 0x93, 
	0x94, 0x95, 0x96, 0x8c, 0x4f, 0x54, 0x1b, 0x1c, 
	0x1c, 0x2f, 0x6e, 0x4a, 0x57, 0x88, 0x97, 0x7e, 
	0x09, 0x98, 0x99, 0x99, 0x9a, 0x99, 0x9b, 0x9b, 
	0x9c, 0x8f, 0x91, 0x91, 0x91, 0x92, 0x92, 0x9d, 
	0x91, 0x9e, 0x95, 0x8c, 0x01, 0x76, 0x1b, 0x1b, 
	0x2f, 0x2f, 0x71, 0x51, 0x3d, 0x3d, 0x6f, 0x9f, 
	0x03, 0xa0, 0x99, 0x8f, 0xa1, 0x9c, 0x9b, 0x9b, 
	0xa1, 0x9b, 0x9b, 0x91, 0xa2, 0xa2, 0x90, 0x92, 
	0x91, 0x91, 0x9e, 0xa3, 0x09, 0x76, 0x1b, 0x1b, 
	0x5b, 0x71, 0x1c, 0x1c, 0x4b, 0x51, 0x4a, 0xa4, 
	0x7d, 0x98, 0x99, 0xa5, 0xa6, 0xa5, 0x9b, 0x9c, 
	0x9b, 0xa6, 0x9b, 0xa7, 0xa8, 0xa2, 0x91, 0x9e, 
	0xa9, 0x91, 0x9d, 0x85, 0x70, 0x1a, 0x45, 0x45, 
	0x1b, 0x1b, 0x1b, 0x4d, 0x2c, 0x5e, 0x1d, 0xaa, 
	0x01, 0x98, 0x8f, 0x99, 0xab, 0xac, 0x9a, 0x99, 
	0x99, 0x9b, 0x9b, 0xa7, 0xa7, 0xad, 0x91, 0xae, 
	0xae, 0xa9, 0xa9, 0x83, 0x7d, 0x1a, 0x1c, 0x1b, 
	0x4d, 0x35, 0x1b, 0x49, 0x2c, 0x1c, 0x1d, 0xa4, 
	0x39, 0x98, 0xa1, 0xa1, 0xaf, 0xab, 0x99, 0x99, 
	0x99, 0x9a, 0xb0, 0x9a, 0xb1, 0x99, 0x90, 0xae, 
	0xae, 0xa9, 0xa9, 0x80, 0x33, 0x1a, 0x14, 0x1b, 
	0x4d, 0xb2, 0x1b, 0x1b, 0x1b, 0x1b, 0x4d, 0xb3, 
	0x01, 0xb4, 0x99, 0x99, 0x9a, 0x9a, 0x99, 0x99, 
	0xa7, 0x9a, 0x90, 0xb5, 0x99, 0x99, 0xa1, 0xa2, 
	0xb6, 0xb6, 0xa9, 0x80, 0x4f, 0xb7, 0x31, 0x59, 
	0x1b, 0x4d, 0xb8, 0x1b, 0x1b, 0x1b, 0x1b, 0x15, 
	0x4f, 0xb4, 0xb9, 0xab, 0xab, 0x9a, 0x9a, 0xab, 
	0xa7, 0x92, 0xab, 0x9a, 0x99, 0x8f, 0x8f, 0xa1, 
	0xa8, 0xb6, 0xa9, 0x80, 0x4f, 0xba, 0x15, 0x43, 
	0xbb, 0x1b, 0x1b, 0x1c, 0x1c, 0x1b, 0x1b, 0x15, 
	0x4f, 0xb7, 0xb5, 0xb5, 0xb5, 0xa7, 0xb5, 0xbc, 
	0xb8, 0x9a, 0x99, 0x99, 0x8f, 0x99, 0x99, 0x99, 
	0x99, 0xa9, 0xa9, 0x80, 0x02, 0x2b, 0x15, 0x43, 
	0x43, 0x1b, 0x1b, 0x43, 0x2f, 0x1b, 0x1c, 0x15, 
	0x70, 0xbd, 0xb5, 0x9a, 0xb5, 0xa7, 0xbc, 0xb8, 
	0xb2, 0x99, 0xa1, 0x92, 0xb6, 0xb4, 0xb6, 0x98, 
	0xbe, 0xa0, 0xbf, 0x80, 0x09, 0xc0, 0xc1, 0xc1, 
	0x1a, 0x54, 0x44, 0x5a, 0x44, 0x1a, 0x76, 0x46, 
	0x4f, 0xbd, 0xa9, 0xa1, 0xb1, 0xb1, 0xa7, 0xb8, 
	0x99, 0x9c, 0xc2, 0xa1, 0x04, 0x4f, 0x03, 0x02, 
	0x09, 0x39, 0x39, 0x39, 0x04, 0x09, 0x70, 0x09, 
	0x09, 0x4f, 0x09, 0x03, 0x01, 0x39, 0x07, 0xc3, 
	0x04, 0xbf, 0x9d, 0x81, 0x99, 0x9a, 0xa7, 0x99, 
	0x8f, 0x8f, 0x9c, 0xa1, 0x09, 0xc4, 0xc5, 0xc5, 
	0xc6, 0xc6, 0x0c, 0x0b, 0xc7, 0xc7, 0xc7, 0xc8, 
	0xc7, 0xc9, 0xca, 0xca, 0xcb, 0xcc, 0xcd, 0x0b, 
	0x04, 0xce, 0x92, 0x91, 0xa9, 0xb5, 0xb9, 0x99, 
	0x8f, 0x9a, 0x99, 0xa1, 0x02, 0xcf, 0xd0, 0xd0, 
	0x0e, 0x0e, 0xd1, 0xd2, 0xd2, 0xcf, 0xcf, 0x0a, 
	0xd3, 0x0a, 0x6b, 0x77, 0xd4, 0x2a, 0xd5, 0xd6, 
	0x70, 0xbf, 0x81, 0x9d, 0xa9, 0x91, 0x99, 0x99, 
	0x8f, 0xb9, 0xb5, 0x8f, 0x08, 0xd7, 0xd2, 0x0e, 
	0xd8, 0xd9, 0x0e, 0x0d, 0xd2, 0xd2, 0xcf, 0xda, 
	0x6c, 0xcf, 0x6b, 0x11, 0xdb, 0xdc, 0xdd, 0xcb, 
	0x03, 0xce, 0x80, 0x90, 0x91, 0x91, 0x92, 0xa1, 
	0x99, 0xa1, 0x99, 0xa1, 0x39, 0xd7, 0x0d, 0xd2, 
	0xde, 0x0e, 0xd0, 0xd0, 0xd0, 0xd0, 0xd2, 0xdf, 
	0xdf, 0xdf, 0xe0, 0xd7, 0x10, 0xdc, 0xe1, 0xe2, 
	0x09, 0xbf, 0x80, 0x80, 0x81, 0x90, 0x81, 0x90, 
	0xe3, 0xe4, 0xa1, 0x9c, 0x01, 0x25, 0xe5, 0x0e, 
	0x0e, 0x0d, 0xe6, 0x0d, 0x0e, 0xd2, 0x0d, 0xd0, 
	0xdf, 0xe0, 0xe7, 0x24, 0xe8, 0xdc, 0xdb, 0x12, 
	0x03, 0xe9, 0xbf, 0xbf, 0xce, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xea, 0xa2, 0xb5, 0x09, 0x23, 0x25, 0xeb, 
	0xcf, 0xd3, 0xec, 0xed, 0xec, 0xee, 0xc6, 0xef, 
	0x0d, 0xe0, 0xf0, 0xf1, 0xf1, 0x10, 0xe8, 0xf2, 
	0x04, 0x39, 0x02, 0x09, 0x13, 0x4f, 0x00, 0x13, 
	
};

Gfx rr_pyramid_Desert_Pyramid_Floor_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 rr_pyramid_Desert_Pyramid_Floor_ci8_pal_rgba16[] = {
	0x30, 0x81, 0x40, 0x81, 0x38, 0x41, 0x18, 0x01, 
	0x00, 0x01, 0x49, 0x01, 0x51, 0x41, 0x51, 0x01, 
	0x38, 0x81, 0x28, 0x01, 0xc4, 0xd1, 0xde, 0xe3, 
	0xde, 0x5d, 0xdd, 0xd9, 0xdd, 0x97, 0xac, 0x0b, 
	0xac, 0x4d, 0xb4, 0x8d, 0xce, 0x5b, 0x10, 0x01, 
	0x94, 0x0d, 0x9c, 0x91, 0x9c, 0xd3, 0xac, 0xd5, 
	0xa5, 0x17, 0xbd, 0xdb, 0x6a, 0x43, 0x93, 0x8b, 
	0x93, 0xcb, 0xac, 0x91, 0xad, 0x17, 0xad, 0x59, 
	0xad, 0x5d, 0xad, 0x5b, 0xad, 0x5f, 0x93, 0x85, 
	0xb4, 0x4b, 0xa4, 0x09, 0x8b, 0x05, 0x7a, 0xc1, 
	0x83, 0x03, 0x83, 0x05, 0xa4, 0x8f, 0x62, 0x01, 
	0x8b, 0xcb, 0x83, 0xcb, 0x93, 0x89, 0x9c, 0x0d, 
	0xac, 0x93, 0x94, 0x91, 0xad, 0x61, 0x40, 0xc1, 
	0x51, 0x81, 0x8b, 0x8b, 0x83, 0x49, 0x7b, 0x49, 
	0xad, 0x57, 0x30, 0x01, 0xac, 0x95, 0xa4, 0x91, 
	0x94, 0x4f, 0xc5, 0x19, 0xc5, 0xdf, 0xc6, 0x29, 
	0xc6, 0x23, 0xc6, 0x27, 0x9c, 0xd5, 0x9c, 0x4f, 
	0x7a, 0xc5, 0x8b, 0x89, 0x83, 0x8b, 0x72, 0x83, 
	0xa4, 0x93, 0x93, 0x49, 0xb4, 0x93, 0xc4, 0xd7, 
	0xbc, 0x95, 0x8b, 0x49, 0x83, 0x89, 0x20, 0x01, 
	0x8b, 0x47, 0xbc, 0xd5, 0xac, 0x51, 0x9c, 0x8f, 
	0x72, 0xc5, 0xa4, 0x4d, 0xa4, 0x0d, 0xc5, 0x17, 
	0xa4, 0x51, 0x93, 0xcd, 0x83, 0x07, 0x9b, 0x8b, 
	0x8b, 0x07, 0xbc, 0x91, 0xb4, 0xd3, 0xb4, 0x91, 
	0xa3, 0xcb, 0x82, 0xc5, 0xa4, 0x4f, 0xc4, 0x91, 
	0xbc, 0xd3, 0xc4, 0x93, 0x62, 0x41, 0x94, 0x93, 
	0x7a, 0x83, 0xb4, 0x51, 0xb4, 0x4f, 0xb4, 0x8f, 
	0xbc, 0xd1, 0xc4, 0x4f, 0xbc, 0x93, 0xc4, 0x95, 
	0x30, 0x41, 0x9b, 0xcb, 0xc4, 0x0f, 0xbc, 0x4f, 
	0xa4, 0xd3, 0xa5, 0x15, 0x72, 0x85, 0xb4, 0xd1, 
	0x6a, 0x41, 0xac, 0xd3, 0xb5, 0x11, 0x9c, 0xcf, 
	0x93, 0x07, 0x08, 0x01, 0xc5, 0x9d, 0x48, 0xc1, 
	0x7b, 0x8d, 0x7b, 0x4b, 0x73, 0x8d, 0x83, 0xcf, 
	0x8c, 0x51, 0x84, 0x13, 0x94, 0x55, 0xc4, 0xd3, 
	0xc5, 0x15, 0xc6, 0x1f, 0x40, 0x01, 0x83, 0x8d, 
	0x94, 0x95, 0x94, 0x99, 0x94, 0x97, 0x93, 0xcf, 
	0x7b, 0x0b, 0x72, 0xc9, 0x7b, 0x09, 0x73, 0x4b, 
	0x6b, 0x09, 0x62, 0xc9, 0x5a, 0xc9, 0xc4, 0xd5, 
	0x6a, 0x45, 0x93, 0x8f, 0x8b, 0x4d, 0x8b, 0x8f, 
	0x94, 0x11, 0x73, 0x09, 0x6a, 0xc9, 0xc5, 0x9b, 
	0x62, 0x03, 0x93, 0xd1, 0x7a, 0xc9, 0x8c, 0x57, 
	0xc5, 0xdd, 0x8b, 0xcf, 0x83, 0x8f, 0x93, 0x4d, 
	0x7a, 0x87, 0x6a, 0x87, 0xbd, 0x9d, 0x83, 0x4d, 
	0x7b, 0x0d, 0x7a, 0xc7, 0x62, 0x87, 0x8b, 0x4f, 
	0x83, 0x4b, 0x93, 0x8d, 0x8b, 0x4b, 0xbd, 0x5b, 
	0x6a, 0x85, 0x83, 0x0b, 0x72, 0x87, 0x59, 0xc1, 
	0x93, 0x4b, 0x8b, 0x8d, 0x51, 0xc1, 0x9b, 0xcd, 
	0x8b, 0x0b, 0x49, 0x81, 0x62, 0x43, 0x51, 0xc3, 
	0x41, 0x01, 0x5a, 0x01, 0x94, 0x53, 0x69, 0xc1, 
	0xcd, 0xdb, 0xde, 0xe5, 0xde, 0x9f, 0xc5, 0xd7, 
	0xc5, 0x95, 0xcd, 0xd7, 0xce, 0x59, 0xce, 0x9d, 
	0xce, 0x9b, 0xd6, 0x9f, 0x5a, 0x03, 0xbc, 0x8f, 
	0xdd, 0xdb, 0xdd, 0x55, 0xdd, 0x99, 0xc5, 0x13, 
	0xac, 0x8f, 0xa4, 0xd1, 0xde, 0x5b, 0xbc, 0x8d, 
	0xd5, 0x13, 0xd5, 0x15, 0xbc, 0xcf, 0xac, 0x8d, 
	0xa4, 0x4b, 0x9c, 0x8d, 0xdd, 0x57, 0xc4, 0x8f, 
	0xc4, 0x8d, 0xa4, 0x8d, 0xde, 0xdd, 0x41, 0x81, 
	0x94, 0x13, 0xd5, 0x55, 0xde, 0x1d, 0xc4, 0x4d, 
	0xac, 0x4b, 0x39, 0x01, 0x5a, 0x05, 0xb4, 0x4d, 
	0xcc, 0x8f, 0xbc, 0x4b, 0xd4, 0x91, 0xde, 0x1b, 
	0xbc, 0x4d, 0xa4, 0x0b, 0xcd, 0x55, 
};

Vtx rr_pyramid_Cube_002_mesh_layer_1_vtx_cull[8] = {
	{{{-1236, -2473, 1236},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1236, 0, 1236},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1236, 0, -1236},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1236, -2473, -1236},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1236, -2473, 1236},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1236, 0, 1236},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1236, 0, -1236},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1236, -2473, -1236},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx rr_pyramid_Cube_002_mesh_layer_1_vtx_0[35] = {
	{{{-1236, -2473, 1236},0, {-3441, 3395},{0x8E, 0x39, 0x0, 0xFF}}},
	{{{0, 0, 0},0, {496, -4479},{0x8E, 0x39, 0x0, 0xFF}}},
	{{{-1236, -2473, -1236},0, {4433, 3395},{0x8E, 0x39, 0x0, 0xFF}}},
	{{{-1236, -2473, -1236},0, {-3441, 3395},{0x0, 0x39, 0x8E, 0xFF}}},
	{{{0, 0, 0},0, {496, -4479},{0x0, 0x39, 0x8E, 0xFF}}},
	{{{1236, -2473, -1236},0, {4433, 3395},{0x0, 0x39, 0x8E, 0xFF}}},
	{{{1236, -2473, 1236},0, {4433, 3395},{0x0, 0x39, 0x72, 0xFF}}},
	{{{0, 0, 0},0, {496, -4479},{0x0, 0x39, 0x72, 0xFF}}},
	{{{-1236, -2473, 1236},0, {-3441, 3395},{0x0, 0x39, 0x72, 0xFF}}},
	{{{0, 0, 0},0, {496, -4479},{0x72, 0x39, 0x0, 0xFF}}},
	{{{1236, -2473, 1236},0, {-3441, 3395},{0x72, 0x39, 0x0, 0xFF}}},
	{{{855, -1710, 446},0, {-925, 965},{0x72, 0x39, 0x0, 0xFF}}},
	{{{911, -1823, 317},0, {-512, 1326},{0x72, 0x39, 0x0, 0xFF}}},
	{{{943, -1885, 105},0, {162, 1525},{0x72, 0x39, 0x0, 0xFF}}},
	{{{916, -1833, -166},0, {1023, 1358},{0x72, 0x39, 0x0, 0xFF}}},
	{{{1236, -2473, -1236},0, {4433, 3395},{0x72, 0x39, 0x0, 0xFF}}},
	{{{916, -1832, -166},0, {1024, 1356},{0x72, 0x39, 0x0, 0xFF}}},
	{{{835, -1670, -283},0, {1398, 839},{0x72, 0x39, 0x0, 0xFF}}},
	{{{749, -1497, -279},0, {1384, 290},{0x72, 0x39, 0x0, 0xFF}}},
	{{{679, -1357, -249},0, {1290, -157},{0x72, 0x39, 0x0, 0xFF}}},
	{{{654, -1309, 11},0, {461, -311},{0x72, 0x39, 0x0, 0xFF}}},
	{{{807, -1615, 329},0, {-550, 663},{0x72, 0x39, 0x0, 0xFF}}},
	{{{756, -1512, 23},0, {421, 337},{0x72, 0x39, 0x0, 0xFF}}},
	{{{859, -1718, 237},0, {-258, 992},{0x72, 0x39, 0x0, 0xFF}}},
	{{{755, -1510, 19},0, {435, 329},{0x72, 0x39, 0x0, 0xFF}}},
	{{{770, -1539, -162},0, {1013, 423},{0x72, 0x39, 0x0, 0xFF}}},
	{{{876, -1751, -61},0, {690, 1098},{0x72, 0x39, 0x0, 0xFF}}},
	{{{879, -1758, 92},0, {205, 1119},{0x72, 0x39, 0x0, 0xFF}}},
	{{{838, -1676, -164},0, {1018, 859},{0x72, 0x39, 0x0, 0xFF}}},
	{{{700, -1399, -177},0, {1058, -24},{0x72, 0x39, 0x0, 0xFF}}},
	{{{943, -1885, 104},0, {166, 1524},{0x72, 0x39, 0x0, 0xFF}}},
	{{{727, -1453, -79},0, {748, 148},{0x72, 0x39, 0x0, 0xFF}}},
	{{{726, -1451, -77},0, {742, 142},{0x72, 0x39, 0x0, 0xFF}}},
	{{{755, -1510, 19},0, {435, 329},{0x72, 0x39, 0x0, 0xFF}}},
	{{{727, -1453, -79},0, {748, 148},{0x72, 0x39, 0x0, 0xFF}}},
};

Gfx rr_pyramid_Cube_002_mesh_layer_1_tri_0[] = {
	gsSPVertex(rr_pyramid_Cube_002_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 11, 10, 0, 13, 12, 10, 0),
	gsSP2Triangles(14, 13, 10, 0, 14, 10, 15, 0),
	gsSP2Triangles(15, 16, 14, 0, 15, 17, 16, 0),
	gsSP2Triangles(18, 17, 15, 0, 19, 18, 15, 0),
	gsSP2Triangles(19, 15, 9, 0, 9, 20, 19, 0),
	gsSP2Triangles(9, 21, 20, 0, 9, 11, 21, 0),
	gsSP2Triangles(21, 22, 20, 0, 21, 23, 22, 0),
	gsSP2Triangles(24, 22, 23, 0, 25, 24, 23, 0),
	gsSP2Triangles(23, 26, 25, 0, 23, 27, 26, 0),
	gsSP2Triangles(26, 28, 25, 0, 22, 24, 20, 0),
	gsSP2Triangles(19, 29, 18, 0, 16, 30, 14, 0),
	gsSP2Triangles(14, 30, 13, 0, 13, 30, 12, 0),
	gsSP1Triangle(25, 31, 24, 0),
	gsSPVertex(rr_pyramid_Cube_002_mesh_layer_1_vtx_0 + 32, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx rr_pyramid_Cube_002_mesh_layer_1_vtx_1[4] = {
	{{{-1236, -2473, -1236},0, {-3441, -2642},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1236, -2473, -1236},0, {4433, -2642},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1236, -2473, 1236},0, {4433, 5232},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-1236, -2473, 1236},0, {-3441, 5232},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx rr_pyramid_Cube_002_mesh_layer_1_tri_1[] = {
	gsSPVertex(rr_pyramid_Cube_002_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx rr_pyramid_Cube_002_mesh_layer_1_vtx_2[18] = {
	{{{916, -1832, -166},0, {1024, 1356},{0x72, 0x39, 0x0, 0xFF}}},
	{{{835, -1670, -283},0, {1398, 839},{0x72, 0x39, 0x0, 0xFF}}},
	{{{749, -1497, -279},0, {1384, 290},{0x72, 0x39, 0x0, 0xFF}}},
	{{{770, -1539, -162},0, {1013, 423},{0x72, 0x39, 0x0, 0xFF}}},
	{{{727, -1453, -79},0, {748, 148},{0x72, 0x39, 0x0, 0xFF}}},
	{{{700, -1399, -177},0, {1058, -24},{0x72, 0x39, 0x0, 0xFF}}},
	{{{726, -1451, -77},0, {742, 142},{0x72, 0x39, 0x0, 0xFF}}},
	{{{654, -1309, 11},0, {461, -311},{0x72, 0x39, 0x0, 0xFF}}},
	{{{679, -1357, -249},0, {1290, -157},{0x72, 0x39, 0x0, 0xFF}}},
	{{{755, -1510, 19},0, {435, 329},{0x72, 0x39, 0x0, 0xFF}}},
	{{{911, -1823, 317},0, {-512, 1326},{0x72, 0x39, 0x0, 0xFF}}},
	{{{943, -1885, 104},0, {166, 1524},{0x72, 0x39, 0x0, 0xFF}}},
	{{{859, -1718, 237},0, {-258, 992},{0x72, 0x39, 0x0, 0xFF}}},
	{{{879, -1758, 92},0, {205, 1119},{0x72, 0x39, 0x0, 0xFF}}},
	{{{876, -1751, -61},0, {690, 1098},{0x72, 0x39, 0x0, 0xFF}}},
	{{{838, -1676, -164},0, {1018, 859},{0x72, 0x39, 0x0, 0xFF}}},
	{{{807, -1615, 329},0, {-550, 663},{0x72, 0x39, 0x0, 0xFF}}},
	{{{855, -1710, 446},0, {-925, 965},{0x72, 0x39, 0x0, 0xFF}}},
};

Gfx rr_pyramid_Cube_002_mesh_layer_1_tri_2[] = {
	gsSPVertex(rr_pyramid_Cube_002_mesh_layer_1_vtx_2 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(6, 4, 5, 0, 5, 7, 6, 0),
	gsSP2Triangles(5, 8, 7, 0, 7, 9, 6, 0),
	gsSP2Triangles(10, 11, 0, 0, 12, 10, 0, 0),
	gsSP2Triangles(13, 12, 0, 0, 14, 13, 0, 0),
	gsSP2Triangles(0, 15, 14, 0, 0, 3, 15, 0),
	gsSP2Triangles(12, 16, 10, 0, 16, 17, 10, 0),
	gsSPEndDisplayList(),
};


Gfx mat_rr_pyramid_Pyramid_Brick[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, rr_pyramid_Desert_Pyramid_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 123),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, rr_pyramid_Desert_Pyramid_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(rr_pyramid_Pyramid_Brick_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rr_pyramid_Pyramid_Brick[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_rr_pyramid_Pyramid_Floor[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, rr_pyramid_Desert_Pyramid_Floor_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 242),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, rr_pyramid_Desert_Pyramid_Floor_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(rr_pyramid_Pyramid_Floor_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rr_pyramid_Pyramid_Floor[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_rr_pyramid_Pyramid_Brick_Red[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, rr_pyramid_Desert_Pyramid_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 123),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, rr_pyramid_Desert_Pyramid_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 254, 91, 95, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rr_pyramid_Pyramid_Brick_Red[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx rr_pyramid_Cube_002_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(rr_pyramid_Cube_002_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_rr_pyramid_Pyramid_Brick),
	gsSPDisplayList(rr_pyramid_Cube_002_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_rr_pyramid_Pyramid_Brick),
	gsSPDisplayList(mat_rr_pyramid_Pyramid_Floor),
	gsSPDisplayList(rr_pyramid_Cube_002_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_rr_pyramid_Pyramid_Floor),
	gsSPDisplayList(mat_rr_pyramid_Pyramid_Brick_Red),
	gsSPDisplayList(rr_pyramid_Cube_002_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_rr_pyramid_Pyramid_Brick_Red),
	gsSPEndDisplayList(),
};

Gfx rr_pyramid_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

