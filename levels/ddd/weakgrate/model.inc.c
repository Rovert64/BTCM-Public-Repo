Lights1 weakgrate_Grate_Side_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx weakgrate_Fan1_ci8_aligner[] = {gsSPEndDisplayList()};
u8 weakgrate_Fan1_ci8[] = {
	0x00, 0x00, 0x01, 0x00, 0x02, 0x02, 0x02, 0x03, 
	0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x06, 0x06, 
	0x07, 0x07, 0x08, 0x08, 0x09, 0x09, 0x0a, 0x0a, 
	0x0b, 0x0b, 0x0b, 0x07, 0x0c, 0x0c, 0x0d, 0x0d, 
	0x00, 0x01, 0x0e, 0x0f, 0x10, 0x03, 0x02, 0x02, 
	0x08, 0x08, 0x09, 0x09, 0x11, 0x11, 0x11, 0x11, 
	0x12, 0x12, 0x12, 0x12, 0x13, 0x13, 0x13, 0x13, 
	0x0b, 0x14, 0x0f, 0x0f, 0x15, 0x10, 0x0c, 0x0d, 
	0x00, 0x0e, 0x0f, 0x0f, 0x16, 0x10, 0x03, 0x02, 
	0x09, 0x09, 0x17, 0x09, 0x11, 0x11, 0x11, 0x11, 
	0x09, 0x09, 0x12, 0x09, 0x0a, 0x13, 0x0a, 0x0a, 
	0x07, 0x0f, 0x0f, 0x14, 0x10, 0x15, 0x0c, 0x0c, 
	0x00, 0x0e, 0x0f, 0x0e, 0x10, 0x16, 0x03, 0x02, 
	0x09, 0x09, 0x17, 0x17, 0x11, 0x18, 0x11, 0x11, 
	0x09, 0x07, 0x09, 0x09, 0x09, 0x0a, 0x13, 0x0a, 
	0x07, 0x0f, 0x0f, 0x0f, 0x10, 0x15, 0x0c, 0x0c, 
	0x19, 0x0d, 0x0f, 0x0d, 0x0f, 0x0f, 0x1a, 0x1b, 
	0x07, 0x0a, 0x0a, 0x0a, 0x1c, 0x18, 0x1c, 0x13, 
	0x0a, 0x09, 0x18, 0x18, 0x07, 0x1d, 0x1d, 0x1d, 
	0x0a, 0x0f, 0x0f, 0x0f, 0x15, 0x15, 0x09, 0x0e, 
	0x19, 0x19, 0x0d, 0x0f, 0x0f, 0x0f, 0x03, 0x03, 
	0x07, 0x00, 0x0a, 0x0a, 0x1c, 0x1c, 0x1c, 0x1c, 
	0x09, 0x09, 0x18, 0x18, 0x07, 0x1d, 0x1d, 0x1d, 
	0x0a, 0x08, 0x0f, 0x0f, 0x15, 0x1e, 0x09, 0x0e, 
	0x19, 0x1f, 0x19, 0x0d, 0x03, 0x03, 0x03, 0x03, 
	0x20, 0x00, 0x0a, 0x0a, 0x09, 0x18, 0x13, 0x1c, 
	0x0a, 0x0a, 0x09, 0x18, 0x08, 0x08, 0x08, 0x07, 
	0x0a, 0x0a, 0x08, 0x08, 0x0e, 0x09, 0x09, 0x1e, 
	0x0d, 0x1f, 0x1f, 0x19, 0x03, 0x03, 0x03, 0x1b, 
	0x07, 0x07, 0x0a, 0x07, 0x09, 0x09, 0x13, 0x13, 
	0x0a, 0x0a, 0x09, 0x18, 0x07, 0x08, 0x06, 0x06, 
	0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x1e, 
	0x21, 0x0a, 0x0a, 0x19, 0x08, 0x22, 0x22, 0x08, 
	0x09, 0x09, 0x23, 0x09, 0x12, 0x12, 0x12, 0x12, 
	0x13, 0x13, 0x0a, 0x09, 0x24, 0x06, 0x06, 0x06, 
	0x0e, 0x08, 0x08, 0x08, 0x25, 0x25, 0x26, 0x03, 
	0x22, 0x21, 0x0a, 0x22, 0x22, 0x08, 0x08, 0x07, 
	0x23, 0x23, 0x09, 0x09, 0x12, 0x27, 0x27, 0x12, 
	0x13, 0x0a, 0x09, 0x09, 0x24, 0x06, 0x06, 0x06, 
	0x08, 0x0e, 0x0e, 0x05, 0x25, 0x25, 0x26, 0x03, 
	0x21, 0x19, 0x0a, 0x22, 0x08, 0x08, 0x07, 0x1c, 
	0x0a, 0x0a, 0x09, 0x0a, 0x12, 0x27, 0x28, 0x27, 
	0x13, 0x0a, 0x0a, 0x0a, 0x29, 0x24, 0x06, 0x24, 
	0x0e, 0x0e, 0x05, 0x05, 0x26, 0x25, 0x26, 0x2a, 
	0x19, 0x22, 0x0a, 0x21, 0x07, 0x07, 0x1c, 0x1c, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x12, 0x28, 0x12, 0x28, 
	0x13, 0x13, 0x0a, 0x0a, 0x29, 0x06, 0x06, 0x24, 
	0x08, 0x08, 0x05, 0x05, 0x26, 0x25, 0x03, 0x2a, 
	0x19, 0x19, 0x09, 0x19, 0x19, 0x25, 0x25, 0x25, 
	0x0a, 0x0a, 0x2b, 0x2b, 0x12, 0x17, 0x12, 0x17, 
	0x2c, 0x2c, 0x2c, 0x09, 0x29, 0x24, 0x24, 0x24, 
	0x2d, 0x0e, 0x0e, 0x2e, 0x05, 0x29, 0x05, 0x2f, 
	0x0e, 0x09, 0x2b, 0x09, 0x19, 0x25, 0x25, 0x25, 
	0x2b, 0x2b, 0x2c, 0x2b, 0x12, 0x17, 0x17, 0x17, 
	0x2c, 0x2c, 0x2c, 0x09, 0x24, 0x08, 0x24, 0x24, 
	0x0e, 0x2d, 0x0e, 0x03, 0x05, 0x29, 0x05, 0x2f, 
	0x0e, 0x2b, 0x2b, 0x09, 0x21, 0x21, 0x25, 0x25, 
	0x2b, 0x2b, 0x2c, 0x2b, 0x12, 0x17, 0x17, 0x12, 
	0x2c, 0x09, 0x09, 0x09, 0x24, 0x24, 0x08, 0x08, 
	0x0e, 0x2d, 0x0e, 0x03, 0x05, 0x29, 0x1a, 0x2f, 
	0x0e, 0x2b, 0x2b, 0x09, 0x25, 0x21, 0x21, 0x21, 
	0x2c, 0x2c, 0x2c, 0x2b, 0x12, 0x12, 0x12, 0x2c, 
	0x2c, 0x2c, 0x30, 0x21, 0x24, 0x08, 0x08, 0x08, 
	0x0e, 0x0e, 0x0e, 0x03, 0x05, 0x29, 0x1a, 0x2f, 
	0x0e, 0x12, 0x31, 0x12, 0x13, 0x0a, 0x0a, 0x0a, 
	0x2c, 0x2b, 0x2c, 0x2b, 0x32, 0x32, 0x32, 0x25, 
	0x21, 0x25, 0x21, 0x08, 0x1b, 0x1b, 0x1b, 0x1b, 
	0x05, 0x05, 0x05, 0x33, 0x34, 0x06, 0x34, 0x35, 
	0x0e, 0x12, 0x31, 0x12, 0x36, 0x13, 0x36, 0x13, 
	0x2c, 0x2c, 0x37, 0x2c, 0x32, 0x32, 0x25, 0x30, 
	0x25, 0x21, 0x21, 0x08, 0x1b, 0x1b, 0x1b, 0x26, 
	0x05, 0x33, 0x05, 0x33, 0x34, 0x06, 0x34, 0x1a, 
	0x0e, 0x12, 0x31, 0x31, 0x31, 0x31, 0x36, 0x36, 
	0x2c, 0x2c, 0x2c, 0x37, 0x25, 0x25, 0x25, 0x21, 
	0x21, 0x08, 0x08, 0x08, 0x26, 0x1b, 0x26, 0x26, 
	0x33, 0x33, 0x1a, 0x33, 0x1a, 0x06, 0x1a, 0x35, 
	0x0e, 0x12, 0x31, 0x31, 0x31, 0x31, 0x31, 0x36, 
	0x2b, 0x37, 0x37, 0x37, 0x30, 0x30, 0x21, 0x21, 
	0x21, 0x08, 0x08, 0x08, 0x38, 0x38, 0x38, 0x26, 
	0x33, 0x1a, 0x1a, 0x1a, 0x35, 0x06, 0x35, 0x35, 
	0x22, 0x30, 0x39, 0x39, 0x3a, 0x3a, 0x3a, 0x2c, 
	0x37, 0x37, 0x02, 0x30, 0x3b, 0x3b, 0x3b, 0x3b, 
	0x19, 0x22, 0x22, 0x3c, 0x2e, 0x2e, 0x03, 0x03, 
	0x1e, 0x1e, 0x1e, 0x1e, 0x10, 0x03, 0x0f, 0x0f, 
	0x22, 0x30, 0x39, 0x39, 0x3a, 0x2c, 0x2c, 0x2c, 
	0x30, 0x30, 0x30, 0x02, 0x02, 0x3d, 0x3b, 0x3b, 
	0x19, 0x19, 0x22, 0x3c, 0x2e, 0x03, 0x03, 0x03, 
	0x03, 0x26, 0x1e, 0x1e, 0x10, 0x1a, 0x0f, 0x10, 
	0x22, 0x30, 0x39, 0x39, 0x2c, 0x37, 0x37, 0x37, 
	0x37, 0x02, 0x02, 0x30, 0x02, 0x02, 0x02, 0x02, 
	0x19, 0x19, 0x22, 0x3c, 0x03, 0x03, 0x03, 0x03, 
	0x26, 0x03, 0x03, 0x1e, 0x1a, 0x1a, 0x10, 0x1a, 
	0x30, 0x0a, 0x39, 0x0a, 0x37, 0x30, 0x30, 0x30, 
	0x02, 0x02, 0x02, 0x02, 0x3d, 0x3d, 0x02, 0x02, 
	0x19, 0x22, 0x22, 0x22, 0x03, 0x26, 0x26, 0x26, 
	0x26, 0x03, 0x03, 0x26, 0x1a, 0x1a, 0x03, 0x03, 
	0x08, 0x37, 0x37, 0x37, 0x26, 0x26, 0x26, 0x26, 
	0x19, 0x19, 0x22, 0x22, 0x1b, 0x21, 0x21, 0x1b, 
	0x1b, 0x22, 0x3c, 0x3c, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x26, 0x26, 0x25, 0x26, 0x26, 0x26, 0x1a, 0x26, 
	0x37, 0x37, 0x37, 0x37, 0x25, 0x25, 0x26, 0x25, 
	0x22, 0x22, 0x22, 0x22, 0x1b, 0x25, 0x1b, 0x1b, 
	0x1b, 0x1b, 0x1b, 0x22, 0x3e, 0x3e, 0x22, 0x02, 
	0x26, 0x25, 0x26, 0x2f, 0x15, 0x1a, 0x1a, 0x26, 
	0x08, 0x08, 0x0d, 0x0d, 0x2f, 0x1e, 0x25, 0x26, 
	0x3c, 0x22, 0x22, 0x22, 0x21, 0x25, 0x21, 0x1b, 
	0x1b, 0x1b, 0x1b, 0x22, 0x22, 0x22, 0x22, 0x02, 
	0x25, 0x26, 0x2f, 0x2f, 0x3f, 0x3f, 0x1a, 0x26, 
	0x08, 0x0d, 0x40, 0x40, 0x1e, 0x2f, 0x1e, 0x25, 
	0x19, 0x22, 0x22, 0x19, 0x25, 0x21, 0x21, 0x21, 
	0x25, 0x22, 0x1b, 0x22, 0x22, 0x22, 0x02, 0x02, 
	0x26, 0x26, 0x2f, 0x1e, 0x15, 0x3f, 0x15, 0x26, 
	0x0a, 0x0e, 0x3f, 0x1a, 0x2f, 0x2f, 0x2f, 0x41, 
	0x42, 0x26, 0x26, 0x42, 0x21, 0x21, 0x21, 0x21, 
	0x1b, 0x1b, 0x43, 0x43, 0x26, 0x38, 0x26, 0x42, 
	0x08, 0x1a, 0x44, 0x1a, 0x15, 0x3f, 0x3f, 0x26, 
	0x0a, 0x1a, 0x3f, 0x3f, 0x2f, 0x2f, 0x2f, 0x41, 
	0x26, 0x42, 0x26, 0x42, 0x21, 0x21, 0x21, 0x21, 
	0x1b, 0x1b, 0x43, 0x43, 0x04, 0x26, 0x38, 0x26, 
	0x08, 0x33, 0x44, 0x44, 0x15, 0x3f, 0x15, 0x26, 
	0x0a, 0x1a, 0x3f, 0x3f, 0x2f, 0x2f, 0x34, 0x34, 
	0x26, 0x03, 0x26, 0x26, 0x21, 0x21, 0x21, 0x21, 
	0x1b, 0x43, 0x1b, 0x03, 0x38, 0x26, 0x26, 0x26, 
	0x33, 0x1a, 0x1a, 0x44, 0x3f, 0x15, 0x1a, 0x26, 
	0x0a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 
	0x03, 0x1e, 0x1e, 0x1e, 0x1a, 0x1a, 0x1a, 0x1a, 
	0x34, 0x34, 0x03, 0x34, 0x04, 0x04, 0x04, 0x38, 
	0x08, 0x08, 0x08, 0x08, 0x26, 0x26, 0x26, 0x26, 
	
};

Gfx weakgrate_Fan1_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 weakgrate_Fan1_ci8_pal_rgba16[] = {
	0x6a, 0xcf, 0x93, 0xd5, 0x62, 0x51, 0x49, 0xcd, 
	0x41, 0x8d, 0x4a, 0x0d, 0x52, 0x4f, 0x62, 0x8f, 
	0x5a, 0x4f, 0x6a, 0xd1, 0x73, 0x13, 0x83, 0x93, 
	0x5a, 0x4d, 0x49, 0xcb, 0x52, 0x0d, 0x31, 0x49, 
	0x39, 0x49, 0x73, 0x53, 0x7b, 0x53, 0x7b, 0x55, 
	0x4a, 0x0b, 0x31, 0x09, 0x21, 0x07, 0x83, 0x95, 
	0x62, 0xcf, 0x62, 0x4f, 0x39, 0x8b, 0x5a, 0x51, 
	0x6b, 0x11, 0x72, 0xd1, 0x41, 0x8b, 0x83, 0x13, 
	0x62, 0x8d, 0x62, 0x91, 0x5a, 0x0f, 0x6a, 0x8f, 
	0x5a, 0x8f, 0x6a, 0xd3, 0x52, 0x0f, 0x7b, 0x93, 
	0x83, 0x53, 0x62, 0xd1, 0x39, 0x4b, 0x83, 0x55, 
	0x7b, 0x13, 0x5a, 0x8d, 0x49, 0x8d, 0x29, 0x09, 
	0x6a, 0x91, 0x94, 0x19, 0x7b, 0x15, 0x41, 0xcb, 
	0x41, 0xcd, 0x31, 0x4b, 0x8b, 0x95, 0x72, 0xd3, 
	0x49, 0xcf, 0x8b, 0xd7, 0x8b, 0x97, 0x6a, 0x93, 
	0x51, 0xcf, 0x5a, 0x11, 0x51, 0xcd, 0x20, 0xc7, 
	0x39, 0x89, 0x5a, 0x91, 0x62, 0x93, 0x4a, 0x0f, 
	0x29, 0x49, 
};

Gfx weakgrate_Transgate_ia8_aligner[] = {gsSPEndDisplayList()};
u8 weakgrate_Transgate_ia8[] = {
	0x5f, 0x5f, 0x5f, 0x5f, 0x7f, 0x7f, 0x7f, 0x8f, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xcf, 0xcf, 0xcf, 0xcf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0x7f, 
	0x6f, 0x5f, 0x4f, 0x4f, 0x4f, 0x8f, 0xdf, 0xdf, 
	0x1f, 0x1f, 0x1f, 0x4f, 0xaf, 0x5f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 
	0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x2f, 
	0x2f, 0x3f, 0x3f, 0x3f, 0x4f, 0x4f, 0x8f, 0x8f, 
	0x1f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x6f, 0x6f, 
	0x1f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x3f, 0x3f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x8f, 0x8f, 
	0x7f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x3f, 0x3f, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x8f, 0x8f, 
	0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x4f, 0x4f, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x6f, 0x8f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x5f, 0x4f, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x5f, 0x6f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x5f, 0x4f, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x5f, 0x5f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x7f, 0x5f, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x5f, 0x6f, 
	0x6f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x6f, 0x9f, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x5f, 0x5f, 
	0xaf, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x6f, 0x9f, 
	0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x4f, 0x5f, 
	0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x9f, 0x9f, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x4f, 0x4f, 
	0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x9f, 0xdf, 
	0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x4f, 0x4f, 
	0xcf, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x9f, 0xdf, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x4f, 0x4f, 
	0x6f, 0x6f, 0x6f, 0x6f, 0x6f, 0x6f, 0x6f, 0x6f, 
	0x5f, 0x5f, 0x5f, 0x3f, 0x5f, 0x5f, 0x9f, 0xdf, 
	0x1f, 0x3f, 0x4f, 0x4f, 0x5f, 0x5f, 0x5f, 0x5f, 
	0x5f, 0x5f, 0x5f, 0x5f, 0x4f, 0x4f, 0x4f, 0x4f, 
	0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 
	0x7f, 0x5f, 0x5f, 0x3f, 0x5f, 0x5f, 0x9f, 0xdf, 
	0x1f, 0x3f, 0x3f, 0x4f, 0x5f, 0x5f, 0x5f, 0x7f, 
	0x8f, 0x8f, 0xbf, 0xbf, 0x9f, 0x9f, 0xef, 0xef, 
	0xcf, 0xcf, 0xcf, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 
	0x7f, 0x5f, 0x5f, 0x3f, 0x5f, 0x5f, 0xdf, 0xdf, 
	0x1f, 0x3f, 0x4f, 0x4f, 0x5f, 0x7f, 0x7f, 0x9f, 
	0x8f, 0xbf, 0xbf, 0xbf, 0x9f, 0x9f, 0xef, 0xef, 
	0x3f, 0x1f, 0x1f, 0x1f, 0x2f, 0x2f, 0x2f, 0x1f, 
	0x1f, 0x2f, 0x2f, 0x2f, 0x4f, 0x4f, 0xaf, 0xaf, 
	0x1f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 
	0x1f, 0x2f, 0x2f, 0x2f, 0x2f, 0x3f, 0x2f, 0x2f, 
	0x6f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x7f, 0xaf, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x2f, 0x2f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0xaf, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x3f, 0x3f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0xaf, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x4f, 0x4f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x7f, 0x7f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x5f, 0x4f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x6f, 0x6f, 
	0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x4f, 0x4f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x6f, 0x5f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x4f, 0x4f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x6f, 0x5f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x4f, 0x4f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x7f, 0x7f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x4f, 0x4f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x7f, 0x7f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x4f, 0x4f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x7f, 0x7f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xbf, 0x7f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x7f, 0x7f, 
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xbf, 0x7f, 
	0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xcf, 0x8f, 
	0x3f, 0x1f, 0x6f, 0x3f, 0x2f, 0x5f, 0x3f, 0x2f, 
	0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 
	0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 
	0x4f, 0x4f, 0x5f, 0x5f, 0x5f, 0x5f, 0x8f, 0xcf, 
	0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x5f, 
	0x7f, 0x7f, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 
	0xcf, 0xcf, 0xcf, 0x7f, 0x9f, 0x6f, 0x6f, 0x6f, 
	0x5f, 0x5f, 0x4f, 0x5f, 0x5f, 0x5f, 0xcf, 0xcf, 
	
};

Vtx weakgrate_Cube_001_mesh_layer_1_vtx_cull[8] = {
	{{{-300, -58, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-300, 0, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-300, 0, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-300, -58, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{300, -58, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{300, 0, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{300, 0, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{300, -58, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx weakgrate_Cube_001_mesh_layer_1_vtx_0[46] = {
	{{{-300, -58, 300},0, {-16, 545},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-300, 0, 300},0, {-16, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-300, 0, -300},0, {1008, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-300, -58, -300},0, {1008, 545},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-300, -58, -300},0, {-16, 545},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-300, 0, -300},0, {-16, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, 0, -300},0, {1008, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, -58, -300},0, {1008, 545},{0xB1, 0xB1, 0xB1, 0xFF}}},
	{{{300, -58, -300},0, {1008, 545},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, 0, 300},0, {-16, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, -58, 300},0, {-16, 545},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, -58, 300},0, {1008, 545},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, 0, 300},0, {1008, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-300, -58, 300},0, {-16, 545},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-231, 0, 231},0, {101, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{231, 0, 231},0, {891, 447},{0xF2, 0xF2, 0xF2, 0xFF}}},
	{{{231, -58, 231},0, {891, 545},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-231, -58, 231},0, {101, 545},{0xB8, 0xB8, 0xB8, 0xFF}}},
	{{{-231, 0, -231},0, {891, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-231, -58, -231},0, {891, 545},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{231, 0, -231},0, {891, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-231, 0, -231},0, {101, 447},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-231, -58, -231},0, {101, 545},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{231, -58, -231},0, {891, 545},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{231, 0, 231},0, {101, 447},{0xF2, 0xF2, 0xF2, 0xFF}}},
	{{{231, -58, 231},0, {101, 545},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{300, -58, -300},0, {1008, -16},{0xB1, 0xB1, 0xB1, 0xFF}}},
	{{{231, -58, -231},0, {891, 101},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-231, -58, -231},0, {101, 101},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{300, -58, 300},0, {1008, 1008},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{231, -58, 231},0, {891, 891},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-300, -58, 300},0, {-16, 1008},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-300, -58, 300},0, {-16, 1008},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-231, -58, 231},0, {101, 891},{0xB8, 0xB8, 0xB8, 0xFF}}},
	{{{231, -58, 231},0, {891, 891},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-300, -58, -300},0, {-16, -16},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{-231, -58, -231},0, {101, 101},{0xAC, 0xAC, 0xAC, 0xFF}}},
	{{{300, -58, -300},0, {1008, -16},{0xB1, 0xB1, 0xB1, 0xFF}}},
	{{{-231, 0, 231},0, {101, 891},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-231, 0, -231},0, {101, 101},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-300, 0, -300},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, 0, -300},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{231, 0, -231},0, {891, 101},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, 0, 300},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{231, 0, 231},0, {891, 891},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-300, 0, 300},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
};

Gfx weakgrate_Cube_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(weakgrate_Cube_001_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 6, 9, 0, 8, 9, 10, 0),
	gsSP2Triangles(11, 12, 1, 0, 11, 1, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 14, 17, 0, 18, 17, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 20, 23, 0, 24, 23, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 29, 27, 26, 0),
	gsSP2Triangles(29, 30, 27, 0, 31, 30, 29, 0),
	gsSPVertex(weakgrate_Cube_001_mesh_layer_1_vtx_0 + 32, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
	gsSP2Triangles(7, 10, 9, 0, 10, 11, 9, 0),
	gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
	gsSP2Triangles(12, 6, 13, 0, 6, 8, 13, 0),
	gsSPEndDisplayList(),
};

Vtx weakgrate_Cube_001_mesh_layer_4_vtx_cull[8] = {
	{{{-300, -58, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-300, 0, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-300, 0, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-300, -58, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{300, -58, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{300, 0, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{300, 0, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{300, -58, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx weakgrate_Cube_001_mesh_layer_4_vtx_0[4] = {
	{{{-231, 0, 231},0, {-3124, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-231, 0, -231},0, {496, 4116},{0x0, 0x81, 0x0, 0xFF}}},
	{{{231, 0, -231},0, {4116, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{231, 0, 231},0, {496, -3124},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx weakgrate_Cube_001_mesh_layer_4_tri_0[] = {
	gsSPVertex(weakgrate_Cube_001_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_weakgrate_Grate_Side[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, weakgrate_Fan1_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 68),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, weakgrate_Fan1_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(weakgrate_Grate_Side_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_weakgrate_Grate_Side[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_LIGHTING),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_weakgrate_Grate[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, TEXEL0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, weakgrate_Transgate_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 173, 137, 80, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_weakgrate_Grate[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx weakgrate_Cube_001_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(weakgrate_Cube_001_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_weakgrate_Grate_Side),
	gsSPDisplayList(weakgrate_Cube_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_weakgrate_Grate_Side),
	gsSPEndDisplayList(),
};

Gfx weakgrate_Cube_001_mesh_layer_4[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(weakgrate_Cube_001_mesh_layer_4_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_weakgrate_Grate),
	gsSPDisplayList(weakgrate_Cube_001_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_weakgrate_Grate),
	gsSPEndDisplayList(),
};

Gfx weakgrate_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

