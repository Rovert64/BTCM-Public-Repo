Lights1 bone_elevator_VertexStone_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 bone_elevator_Stone_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 bone_elevator_Warning_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx bone_elevator_Monotexture_ci8_aligner[] = {gsSPEndDisplayList()};
u8 bone_elevator_Monotexture_ci8[] = {
	0x0, 0x1, 0x2, 0x1, 0x3, 0x3, 0x4, 0x4, 0x5, 
	0x5, 0x5, 0x5, 0x6, 0x6, 0x4, 0x7, 0x7, 0x8, 
	0x8, 0x7, 0x7, 0x4, 0x9, 0x9, 0x4, 0x4, 0x9, 
	0x9, 0x6, 0xA, 0x6, 0xA, 0x1, 0xB, 0xC, 0xD, 
	0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 
	0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 
	0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 0xE, 
	0x1, 0x2, 0xC, 0xF, 0xC, 0x2, 0x2, 0x2, 0x2, 
	0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 
	0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 
	0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0xE, 0xB, 0xC, 
	0xB, 0x10, 0x10, 0x11, 0x11, 0x10, 0x10, 0x10, 0xE, 
	0x1, 0xE, 0xE, 0xE, 0x10, 0x10, 0xE, 0xE, 0xE, 
	0x1, 0xE, 0xE, 0x1, 0x12, 0xE, 0xE, 0xE, 0xE, 
	0x1, 0xE, 0x6, 0xE, 0x2, 0x10, 0x7, 0x7, 0x13, 
	0x13, 0x4, 0x7, 0x4, 0x4, 0x4, 0x4, 0x7, 0x14, 
	0x7, 0x9, 0x6, 0x6, 0xA, 0xA, 0xA, 0xA, 0xA, 
	0xA, 0x6, 0xA, 0x9, 0x9, 0x6, 0x6, 0x6, 0xE, 
	0x2, 0x10, 0x7, 0x3, 0x15, 0x3, 0x4, 0x4, 0x4, 
	0x4, 0x7, 0x7, 0x14, 0x14, 0x7, 0x6, 0xA, 0x6, 
	0xA, 0xA, 0x6, 0x6, 0xA, 0xA, 0xA, 0xA, 0x9, 
	0x9, 0x6, 0xA, 0x6, 0xE, 0x2, 0x10, 0x13, 0x15, 
	0x15, 0x3, 0x4, 0x4, 0x7, 0x7, 0x7, 0x7, 0x7, 
	0x7, 0x9, 0xA, 0xA, 0xA, 0xA, 0xA, 0x6, 0x6, 
	0xA, 0xA, 0xA, 0x6, 0x9, 0x9, 0x6, 0xA, 0x9, 
	0xE, 0x2, 0xE, 0x3, 0x13, 0x3, 0x3, 0x4, 0x7, 
	0x14, 0x14, 0x7, 0x4, 0x4, 0x4, 0xA, 0xA, 0xA, 
	0xA, 0xA, 0xA, 0xA, 0x6, 0x6, 0xA, 0xA, 0x9, 
	0x9, 0x9, 0xA, 0x16, 0x17, 0xE, 0x2, 0xE, 0x18, 
	0x14, 0x4, 0x4, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 
	0x13, 0x3, 0x19, 0x19, 0x19, 0x19, 0x6, 0x6, 0x6, 
	0x6, 0x17, 0x6, 0x6, 0x17, 0x17, 0x17, 0xA, 0x1A, 
	0x17, 0xE, 0x2, 0x10, 0x14, 0x14, 0x18, 0x18, 0x1B, 
	0x1B, 0x9, 0x9, 0x3, 0x13, 0x13, 0x3, 0x6, 0x6, 
	0x6, 0x6, 0x4, 0x7, 0x4, 0x9, 0x4, 0x17, 0x17, 
	0x17, 0x17, 0x17, 0xA, 0x1A, 0x17, 0xE, 0x2, 0x10, 
	0x18, 0x4, 0x4, 0x18, 0x1B, 0x9, 0x9, 0xA, 0x15, 
	0x13, 0x3, 0x15, 0x6, 0x6, 0x19, 0x9, 0x7, 0x7, 
	0x7, 0x7, 0x4, 0x17, 0x6, 0x6, 0x17, 0x6, 0xA, 
	0x1A, 0x17, 0xE, 0x2, 0xE, 0x9, 0x9, 0x9, 0x9, 
	0x9, 0x9, 0x9, 0xA, 0x15, 0x13, 0x13, 0x3, 0x6, 
	0x19, 0x19, 0x6, 0x9, 0x9, 0x4, 0x7, 0x4, 0x17, 
	0x6, 0x6, 0x17, 0x6, 0x1A, 0x1A, 0x6, 0xE, 0x2, 
	0xE, 0x8, 0x5, 0x5, 0x5, 0x7, 0x7, 0x4, 0x6, 
	0x9, 0x7, 0x7, 0x7, 0x13, 0x3, 0xA, 0xA, 0x6, 
	0x6, 0x9, 0x9, 0x9, 0x9, 0x6, 0x9, 0x17, 0xA, 
	0x1A, 0x1C, 0x6, 0xE, 0x2, 0xE, 0x8, 0x8, 0x8, 
	0x8, 0x7, 0x7, 0x4, 0x9, 0x7, 0x7, 0x9, 0x9, 
	0x3, 0x3, 0xA, 0xA, 0x6, 0x9, 0x6, 0xA, 0x9, 
	0x9, 0x9, 0x9, 0x17, 0xA, 0x1A, 0x1C, 0x4, 0xE, 
	0x2, 0xE, 0x8, 0x1D, 0x7, 0x1D, 0x4, 0x9, 0x9, 
	0x9, 0x9, 0x9, 0x15, 0xA, 0xA, 0x9, 0x9, 0xA, 
	0xA, 0xA, 0xA, 0xA, 0xA, 0x6, 0x6, 0x6, 0xA, 
	0xA, 0x1A, 0x1C, 0x7, 0x10, 0x2, 0xE, 0x1D, 0x1D, 
	0x1D, 0x1D, 0x4, 0x4, 0x9, 0x6, 0x15, 0x15, 0xA, 
	0xA, 0xA, 0x9, 0x3, 0xA, 0xA, 0x6, 0xA, 0xA, 
	0xA, 0xA, 0xA, 0x6, 0xA, 0xA, 0x1A, 0x1C, 0x9, 
	0xE, 0x2, 0xE, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 
	0x9, 0x6, 0xA, 0xA, 0xA, 0xA, 0x6, 0x6, 0xA, 
	0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0xA, 0xA, 
	0xA, 0x1A, 0x1A, 0x1C, 0x1E, 0x1, 0x2, 0x1, 0x15, 
	0x15, 0x15, 0x15, 0x6, 0x9, 0x9, 0x9, 0xA, 0xA, 
	0xA, 0xA, 0xA, 0xA, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 
	0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0xA, 0x1A, 0x1A, 0x1C, 
	0x1E, 0x1, 0x2, 0x1, 0xA, 0x15, 0x15, 0x15, 0x6, 
	0x6, 0x9, 0x6, 0xA, 0xA, 0xA, 0x6, 0x6, 0xA, 
	0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 
	0x1A, 0xA, 0x6, 0x1A, 0x1C, 0x8, 0xE, 0x2, 0xE, 
	0x9, 0x9, 0x9, 0x15, 0xA, 0x6, 0x6, 0xA, 0xA, 
	0xA, 0x6, 0x6, 0x6, 0xA, 0x1A, 0x1A, 0x1A, 0x1A, 
	0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1F, 0x6, 0x6, 0x1A, 
	0x1C, 0x7, 0xE, 0x2, 0xE, 0x4, 0x4, 0x9, 0x6, 
	0xA, 0x9, 0x6, 0xA, 0xA, 0xA, 0xA, 0x6, 0x6, 
	0xA, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0xA, 
	0xA, 0xA, 0xA, 0x1F, 0x1A, 0x1A, 0x7, 0xE, 0x2, 
	0xE, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0xA, 
	0xA, 0x6, 0x6, 0x17, 0x4, 0x6, 0x1A, 0x1A, 0x1A, 
	0x1A, 0x1A, 0x1A, 0x1A, 0xA, 0xA, 0xA, 0x16, 0x16, 
	0x1A, 0x1A, 0x4, 0xE, 0x2, 0xE, 0x9, 0x6, 0x9, 
	0x9, 0x9, 0x6, 0xA, 0x6, 0x6, 0x17, 0x17, 0x4, 
	0x4, 0x4, 0xA, 0x1A, 0xA, 0xA, 0x1A, 0x1A, 0x1A, 
	0xA, 0xA, 0xA, 0x16, 0x16, 0x1A, 0x1A, 0x4, 0xE, 
	0x2, 0x1, 0x6, 0x6, 0x6, 0x6, 0xA, 0xA, 0xA, 
	0xA, 0x6, 0x17, 0x17, 0x17, 0x4, 0x6, 0xA, 0xA, 
	0x6, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0x16, 
	0x16, 0x1A, 0xA, 0x4, 0x1, 0x2, 0x20, 0xA, 0xA, 
	0xA, 0xA, 0xA, 0x6, 0x17, 0x17, 0x6, 0xA, 0xA, 
	0x6, 0x0, 0xA, 0x1F, 0x1F, 0xA, 0xA, 0xA, 0xA, 
	0x1F, 0x1F, 0x1F, 0x1F, 0x1A, 0x1A, 0x1A, 0x1A, 0x6, 
	0x1, 0x2, 0x20, 0xA, 0xA, 0xA, 0xA, 0xA, 0x17, 
	0x4, 0x4, 0x6, 0xA, 0xA, 0x6, 0x0, 0x1F, 0x1F, 
	0x0, 0x6, 0x6, 0xA, 0xA, 0x1F, 0x1A, 0x1A, 0x1A, 
	0x1A, 0x1A, 0x1A, 0x1A, 0x6, 0x1, 0x2, 0x20, 0xA, 
	0x6, 0x6, 0xA, 0xA, 0x6, 0x17, 0x17, 0xA, 0xA, 
	0xA, 0x6, 0x0, 0xA, 0xA, 0x9, 0x6, 0x6, 0xA, 
	0xA, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x21, 0x1A, 0x1A, 
	0x6, 0xE, 0x2, 0xE, 0x6, 0x6, 0xA, 0xA, 0xA, 
	0x6, 0x17, 0x6, 0xA, 0x6, 0x6, 0xA, 0x0, 0x0, 
	0x9, 0x9, 0x6, 0x6, 0xA, 0xA, 0x1A, 0x1F, 0x1A, 
	0x1A, 0x21, 0x21, 0xA, 0x1A, 0x6, 0x22, 0x2, 0xE, 
	0x6, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 0xA, 
	0x6, 0x6, 0xA, 0xA, 0x6, 0x6, 0x6, 0x6, 0x6, 
	0xA, 0xA, 0xA, 0xA, 0xA, 0x5, 0x6, 0x6, 0x0, 
	0x23, 0x6, 0x22, 0x2, 0xE, 0x6, 0x6, 0xA, 0xA, 
	0xA, 0xA, 0x24, 0x24, 0xA, 0xA, 0xA, 0xA, 0xA, 
	0x6, 0x6, 0xA, 0xA, 0xA, 0xA, 0x6, 0xA, 0xA, 
	0x5, 0x5, 0x6, 0x9, 0x0, 0x23, 0xA, 0x1, 0x2, 
	0x22, 0x9, 0x0, 0x23, 0x23, 0x1A, 0x1A, 0x1C, 0x1C, 
	0x1C, 0x1C, 0x1C, 0x1C, 0x23, 0x23, 0x0, 0x23, 0x1A, 
	0x1A, 0x1A, 0x1A, 0x1E, 0x1E, 0x1E, 0x1E, 0x23, 0x23, 
	0x23, 0x23, 0x16, 0x1, 0x2, 0x1, 0x0, 0x23, 0x23, 
	0x23, 0x1C, 0x1C, 0x1C, 0x1C, 0x25, 0x25, 0x25, 0x1C, 
	0x23, 0x23, 0x23, 0x23, 0x1A, 0x1A, 0x1A, 0x1A, 0x1E, 
	0x1E, 0x1E, 0x1E, 0x23, 0x0, 0x23, 0x23, 
};

Gfx bone_elevator_Monotexture_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bone_elevator_Monotexture_ci8_pal_rgba16[] = {
	0x7B, 0xDD, 0xB5, 0xAD, 0xE7, 0x39, 0x7C, 0x21, 0x8C, 
	0x63, 0x7C, 0x1F, 0x7B, 0xDF, 0x94, 0xA5, 0x84, 0x61, 
	0x84, 0x21, 0x73, 0x9D, 0xDE, 0xF7, 0xEF, 0x7B, 0xD6, 
	0xB5, 0xBD, 0xEF, 0xF7, 0xBD, 0xC6, 0x31, 0xC6, 0x2F, 
	0xBD, 0xAD, 0x84, 0x63, 0x9C, 0xE7, 0x73, 0xDF, 0x6B, 
	0x59, 0x84, 0x1F, 0x8C, 0xA3, 0x73, 0xDD, 0x6B, 0x5B, 
	0x94, 0xA3, 0x63, 0x19, 0x94, 0x63, 0x7B, 0x9F, 0x73, 
	0x9B, 0xB5, 0xED, 0x73, 0x9F, 0xBD, 0xED, 0x73, 0x5B, 
	0x6B, 0x9B, 0x63, 0x17, 
};

Gfx bone_elevator_WarningTape_ci8_aligner[] = {gsSPEndDisplayList()};
u8 bone_elevator_WarningTape_ci8[] = {
	0x0, 0x0, 0x1, 0x1, 0x1, 0x2, 0x3, 0x4, 0x5, 
	0x6, 0x7, 0x4, 0x8, 0x9, 0x4, 0xA, 0xB, 0xC, 
	0xD, 0xE, 0x1, 0x0, 0x0, 0x0, 0x0, 0xF, 0x10, 
	0x11, 0x12, 0x13, 0x14, 0x15, 0x5, 0x15, 0x6, 0x16, 
	0x17, 0x18, 0xF, 0x19, 0x0, 0x1A, 0x19, 0x1, 0x1, 
	0x1, 0x1, 0x0, 0x1B, 0x1C, 0x4, 0x5, 0x5, 0x5, 
	0x5, 0x5, 0x5, 0x1D, 0x1E, 0x1F, 0x1, 0x1, 0xC, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0xF, 0x20, 0x5, 
	0x4, 0x7, 0x4, 0x5, 0x15, 0x4, 0x1C, 0x9, 0x21, 
	0x22, 0xC, 0x1, 0xC, 0x1, 0x1, 0x1, 0x0, 0xF, 
	0x1A, 0x23, 0x1C, 0x1C, 0x5, 0x5, 0x15, 0x8, 0x1D, 
	0x4, 0x7, 0x24, 0x25, 0xC, 0x1, 0x1, 0x1A, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x22, 0xA, 0x5, 0x5, 0x5, 
	0x5, 0x5, 0x26, 0x5, 0x1C, 0x1C, 0x20, 0xC, 0xC, 
	0x27, 0x0, 0x1, 0x1, 0x1, 0x1, 0xE, 0x1, 0x10, 
	0x28, 0x4, 0x5, 0x9, 0x9, 0x9, 0x15, 0x4, 0x4, 
	0x8, 0x29, 0xD, 0x2A, 0xC, 0x1, 0x0, 0x1, 0x1, 
	0x1, 0x1, 0x0, 0x20, 0x1D, 0x5, 0x4, 0x7, 0x15, 
	0x5, 0x5, 0x5, 0x5, 0x2B, 0x2C, 0x2D, 0xC, 0x1, 
	0x0, 0xE, 0x1, 0x1, 0x1, 0x0, 0x2, 0x3, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x9, 0x7, 0x24, 0x2E, 
	0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x2F, 
	0x30, 0x31, 0x6, 0x4, 0x1C, 0x26, 0x6, 0x5, 0x5, 
	0x9, 0x15, 0x2B, 0x31, 0x0, 0x27, 0x0, 0x1, 0x0, 
	0x0, 0x0, 0xC, 0x2D, 0x2C, 0x32, 0x26, 0x15, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x33, 0x0, 0x2F, 
	0x1, 0x0, 0x1, 0x1, 0xE, 0x0, 0x0, 0x1, 0x34, 
	0x9, 0x5, 0x1D, 0x5, 0x5, 0x5, 0x5, 0x7, 0x5, 
	0x32, 0x10, 0x1, 0xE, 0x0, 0x1, 0x1, 0x1, 0x30, 
	0x1, 0x1, 0xC, 0x34, 0x1C, 0x1D, 0x9, 0x35, 0x5, 
	0x5, 0x9, 0x9, 0x7, 0x36, 0x10, 0x0, 0xC, 0x1, 
	0x0, 0x1, 0x1, 0x1, 0x19, 0xC, 0x37, 0x1E, 0x26, 
	0x1C, 0x5, 0x5, 0x5, 0x5, 0x5, 0x7, 0x1C, 0x2, 
	0x1A, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x38, 
	0x22, 0x11, 0x5, 0x9, 0x5, 0x5, 0x5, 0x5, 0x4, 
	0x9, 0x4, 0x1B, 0xD, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0xC, 0x1, 0x1, 0x2C, 0x39, 0x26, 0x4, 0x5, 
	0x9, 0x9, 0x9, 0x9, 0x15, 0x15, 0x20, 0x19, 0x1, 
	0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x0, 0x29, 
	0x1C, 0x1C, 0x5, 0x5, 0x5, 0x26, 0x5, 0x5, 0x26, 
	0x13, 0x1F, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x1A, 0x37, 0x3A, 0x5, 0x5, 0x5, 0x5, 0x26, 
	0x5, 0x5, 0x15, 0x1E, 0x2E, 0x1, 0x1, 0x19, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x31, 0x3B, 0x4, 
	0x26, 0x15, 0x15, 0x9, 0x15, 0x6, 0x6, 0x3C, 0x31, 
	0x1, 0x19, 0x0, 0x1, 0x0, 0x1, 0x1, 0x19, 0x1, 
	0x10, 0x28, 0x5, 0x5, 0x5, 0x5, 0x5, 0x4, 0x26, 
	0x4, 0x1D, 0x3D, 0xD, 0x1, 0x1, 0x1A, 0x1, 0x1, 
	0x1A, 0x19, 0x1, 0x1A, 0x20, 0x1C, 0x4, 0x26, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x15, 0x3E, 0x1F, 0xC, 0xE, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x3F, 0x20, 
	0x1D, 0x4, 0x9, 0x9, 0x9, 0x5, 0x5, 0x6, 0x15, 
	0x40, 0x10, 0x38, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x1, 0x31, 0x3B, 0x9, 0x9, 0x9, 0x9, 0x5, 
	0x26, 0x4, 0x1C, 0x41, 0x25, 0xC, 0x1, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x10, 0x1E, 0x1C, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x7, 0x5, 0x42, 0x43, 
	0xC, 0x19, 0x1, 0x1, 0x1, 0x1, 0x1, 0xE, 0x1, 
	0x22, 0x44, 0x15, 0x5, 0x5, 0x5, 0x26, 0x15, 0x15, 
	0x3C, 0x9, 0x45, 0x2F, 0x0, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x19, 0x20, 0x1C, 0x7, 0x5, 0x5, 
	0x26, 0x26, 0x5, 0x5, 0x5, 0x46, 0x10, 0x1, 0x1, 
	0x1A, 0x1, 0x1, 0x1, 0x1, 0x1, 0x47, 0x23, 0x15, 
	0x5, 0x5, 0x9, 0x9, 0x5, 0x5, 0x5, 0x5, 0x1D, 
	0x28, 0x22, 0x0, 0xC, 0x0, 0x1, 0x1, 0x1, 0x0, 
	0xC, 0x30, 0x31, 0x3C, 0x5, 0x1C, 0x5, 0x26, 0x15, 
	0x5, 0x15, 0x9, 0x3C, 0x48, 0x47, 0xC, 0x1A, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0xC, 0x22, 0x49, 0x5, 0x1C, 
	0x5, 0x4, 0x9, 0x5, 0x5, 0x15, 0x5, 0x34, 0x19, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1A, 0xC, 0x2A, 
	0x34, 0x5, 0x1C, 0x26, 0x5, 0x5, 0x5, 0x5, 0x1C, 
	0x5, 0x1C, 0x20, 0x0, 0x19, 0x1, 0x1, 0x1, 0x1, 
	0x19, 0x1, 0x19, 0x27, 0x1B, 0x15, 0x5, 0x9, 0x4, 
	0x15, 0x9, 0x9, 0x4, 0x7, 0x2B, 0x10, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0xC, 0x31, 0x24, 
	0x1C, 0x1D, 0x5, 0x5, 0x5, 0x5, 0x9, 0x5, 0x3, 
	0x23, 0x1, 0x1, 0x1, 0x1, 0x1, 0x47, 0x1A, 0x1, 
	0x1A, 0x2C, 0x46, 0x5, 0x4, 0x5, 0x5, 0x5, 0x5, 
	0x9, 0x7, 0x4, 0x15, 0x31, 0x1A, 0x19, 0x1, 0x1, 
	0x47, 0x1, 0x1, 0x19, 0x1A, 0x10, 0x46, 0x26, 0x5, 
	0x4, 0x9, 0x9, 0x9, 0x15, 0x9, 0x26, 0x20, 0xC, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0xC, 0xE, 
	0x4A, 0x4, 0x6, 0x8, 0x15, 0x5, 0x4, 0x5, 0x4, 
	0x1C, 0x13, 0x22, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1A, 
	0x1, 0x1, 0x38, 0x31, 0x24, 0x5, 0x9, 0x26, 0x26, 
	0x5, 0x9, 0x9, 0x9, 0x15, 0x28, 0x10, 0x1, 0x19, 
	0x47, 0x1A, 0x1, 0x1A, 0x1A, 0x19, 0x1, 0x2, 0x7, 
	0x9, 0x1C, 0x9, 0x4, 0x4, 0x5, 0x26, 0x4, 0x3C, 
	0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0xC, 0x1, 
	0x1, 0x22, 0x1E, 0x15, 0x4B, 0x15, 0x9, 0x5, 0x5, 
	0x5, 0x4, 0x1C, 0x1B, 0x0, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x38, 0x1A, 0x19, 0x1A, 0x4C, 0x1D, 0x5, 0x5, 
	0x5, 0x9, 0x4, 0x9, 0x15, 0x9, 0x15, 0x4D, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0xD, 
	0x4C, 0x1C, 0x9, 0x4, 0x9, 0x9, 0x9, 0x9, 0x4, 
	0x1D, 0x32, 0x22, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x4E, 0x3A, 0x6, 0x5, 0x5, 0x5, 
	0x5, 0x5, 0x4, 0x1C, 0x24, 0x2E, 0x1, 0x1, 0x1A, 
	0x1A, 0x1, 0x1, 0x1, 0x47, 0x1, 0x10, 0x2B, 0x5, 
	0x5, 0x5, 0x9, 0x9, 0x5, 0x5, 0x7, 0x5, 0x41, 
	0x31, 0xC, 0x1, 0xF, 0x0, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x22, 0x1E, 0x15, 0x5, 0x5, 0x4, 0x5, 0x9, 
	0x4, 0x15, 0x9, 0x34, 0xF, 0xC, 0x27, 0x1, 0x1, 
	0x1, 0x0, 0x0, 0x1, 0x0, 0x45, 0x1D, 0x4, 0x5, 
	0x9, 0x5, 0x5, 0x4, 0x5, 0x5, 0x46, 0x22, 0xC, 
	0x19, 0x1, 0x0, 0x1, 0x1, 0x1, 0x19, 0x1A, 0x23, 
	0x1C, 0x4, 0x26, 0x9, 0x5, 0x15, 0x5, 0x1C, 0x9, 
	0x7, 0x11, 0x22, 0x2A, 0xC, 0x47, 0x1, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x2E, 0x3C, 0x9, 0x9, 0x5, 0x9, 
	0x9, 0x5, 0x26, 0x1C, 0x24, 0x48, 0x30, 0x1, 0x1, 
	0x1, 0x1, 0x0, 0xF, 0x1, 0x2F, 0x4F, 0x2B, 0x5, 
	0x4, 0x5, 0x5, 0x9, 0x26, 0x5, 0x7, 0x1C, 0x34, 
	0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1A, 0x1, 
	0x2A, 0x34, 0x5, 0x5, 0x5, 0x5, 0x5, 0x15, 0x15, 
	0x5, 0x5, 0x15, 0x50, 0x27, 0x1A, 0x1, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x0, 0x1, 0x34, 0x26, 0x7, 0x26, 
	0x26, 0x5, 0x5, 0x9, 0x5, 0x5, 0x28, 0x4F, 0x1, 
	0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2F, 0x0, 0x31, 
	0x24, 0x1C, 0x1C, 0x26, 0x15, 0x5, 0x5, 0x5, 0x5, 
	0x3C, 0x31, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x47, 
	0x51, 0x47, 0x22, 0x11, 0x5, 0x5, 0x5, 0x5, 0x5, 
	0x9, 0x7, 0x35, 0x9, 0x3C, 0x23, 0x1A, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0xC, 0x22, 0x46, 0x5, 
	0x1D, 0x4, 0x5, 0x5, 0x26, 0x5, 0x4, 0x26, 0x20, 
	0x19, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x27, 0xC, 
	0xF, 0x52, 0x4, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 
	0x5, 0x5, 0x1E, 0x22, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x47, 0x51, 0x19, 0xC, 0x31, 0x3, 0x5, 0x5, 0x4, 
	0x5, 0x5, 0x5, 0x1C, 0x5, 0x26, 0x46, 0x22, 0x1, 
	0x1, 0x1, 0x1, 0x47, 0x1A, 0x1A, 0x1, 0x1A, 0x2E, 
	0x24, 0x1D, 0x4, 0x5, 0x5, 0x5, 0x5, 0x5, 0x4, 
	0x3, 0x31, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x1, 0x22, 0x46, 0x1D, 0x5, 0x5, 0x5, 0x5, 
	0x1D, 0x9, 0x1C, 0x9, 0x20, 0xD, 0x1, 0x1, 0x47, 
	0x47, 0x47, 0x1A, 0x1, 0x1, 0x1, 0x52, 0x5, 0x1C, 
	0x26, 0x9, 0x5, 0x5, 0x5, 0x1D, 0x5, 0x1D, 0x4A, 
	0x1, 0x0, 0x1, 0x1A, 0x19, 0x1, 0x1, 0x1, 0x1, 
	0xF, 0x53, 0x1D, 0x4, 0x5, 0x5, 0x5, 0x5, 0x26, 
	0x4, 0x1C, 0x46, 0x54, 0xF, 0x19, 0x1A, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x2, 0x3C, 0x4, 0x26, 0x5, 
	0x5, 0x26, 0x5, 0x26, 0x7, 0x1C, 0x2, 0x1, 0x19, 
	0x1A, 0x1, 0x19, 0x47, 0x47, 0x1, 0x1, 0x10, 0x11, 
	0x15, 0x1C, 0x15, 0x5, 0x5, 0x5, 0x26, 0x4, 0x15, 
	0x24, 0x31, 0xC, 0x1, 0x1, 0x47, 0x1, 0x1, 0x1, 
	0x1, 0x0, 0x22, 0x1E, 0x26, 0x5, 0x5, 0x5, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x18, 0x0, 0xC, 0x1, 0x0, 
	0x0, 0x1, 0x1, 0x1, 0x1, 0xC, 0x1B, 0x5, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x4, 0x5, 0x5, 0x39, 0x10, 
	0xC, 0x19, 0x1, 0x47, 0x47, 0x47, 0x1, 0x19, 0x1, 
	0x2, 0x15, 0x5, 0x9, 0x4, 0x5, 0x9, 0x5, 0x1C, 
	0x4, 0x5, 0x11, 0x2C, 0x1A, 0x1, 0x1A, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x2, 0x3C, 0x5, 0x5, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x24, 0x25, 0x1, 0x1, 
	0xC, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x10, 0x2B, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 
	0x1B, 0x1, 0x19, 0x51, 0x47, 0x1, 0x47, 0x1A, 0x1, 
	0x1A, 0x1, 0x1B, 0x15, 0x5, 0x1C, 0x26, 0x9, 0x9, 
	0x9, 0x5, 0x9, 0x5, 0x34, 0x2A, 0x55, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x34, 0x5, 0x1C, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x1C, 0x5, 0x2B, 0x2C, 
	0x1, 0x1, 0x1A, 0x1, 0x1, 0x1, 0x1A, 0x2F, 0x2D, 
	0x48, 0x3, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 
	0x5, 0x3, 0x48, 0x47, 0x51, 0x47, 0x1, 0x47, 0x1, 
	0x1, 0x1A, 0x19, 0x22, 0x32, 0x1C, 0x4, 0x4, 0x5, 
	0x5, 0x26, 0x5, 0x5, 0x5, 0x15, 0x2, 0x47, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x38, 0x2C, 0x46, 
	0x5, 0x1C, 0x5, 0x5, 0x26, 0x26, 0x5, 0x5, 0x1C, 
	0x3D, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1A, 0x1, 
	0x1, 0x27, 0x1B, 0x5, 0x5, 0x5, 0x26, 0x5, 0x5, 
	0x5, 0x5, 0x5, 0x1E, 0x10, 0x47, 0x47, 0x47, 0x47, 
	0x1, 0x1, 0x1, 0x19, 0xE, 0x43, 0x18, 0x1C, 0x7, 
	0x5, 0x5, 0x5, 0x26, 0x5, 0x5, 0x26, 0x28, 0x10, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1A, 
	0x2E, 0x24, 0x1C, 0x4, 0x5, 0x9, 0x26, 0x5, 0x5, 
	0x5, 0x1C, 0x31, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x1, 0xC, 0x10, 0x46, 0x5, 0x5, 0x5, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x1B, 0x27, 0x19, 0x47, 
	0x47, 0x1, 0x1, 0x1, 0x1, 0xC, 0xE, 0x22, 0x13, 
	0x15, 0x4, 0x1C, 0x5, 0x5, 0x26, 0x26, 0x4, 0x1D, 
	0x1B, 0x0, 0x1, 0x1, 0x1A, 0x1, 0x1, 0x1A, 0x1, 
	0x1, 0x27, 0x1B, 0x15, 0x56, 0x1D, 0x5, 0x9, 0x9, 
	0x5, 0x5, 0x5, 0x11, 0x10, 0x1, 0x19, 0x1, 0x1, 
	0x0, 0x1, 0x1, 0x19, 0x1A, 0x2, 0x3, 0x5, 0x5, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x3, 0x2, 0xC, 
	0x19, 0x1A, 0x1, 0x1, 0x1, 0x1, 0x19, 0x1, 0x0, 
	0x2, 0x7, 0x5, 0x5, 0x9, 0x5, 0x5, 0x5, 0x4, 
	0x1D, 0x24, 0xB, 0x1A, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x0, 0x0, 0x1, 0x22, 0x46, 0x4, 0x4, 0x5, 0x5, 
	0x5, 0x9, 0x4, 0x4, 0x1D, 0x57, 0xD, 0xC, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x20, 0x5, 
	0x5, 0x4, 0x5, 0x9, 0x5, 0x5, 0x5, 0x5, 0x46, 
	0x58, 0x1A, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 
	0xE, 0x0, 0x20, 0x1C, 0x4, 0x1C, 0x4, 0x5, 0x5, 
	0x5, 0x5, 0x5, 0x46, 0x22, 0xC, 0x1, 0x1, 0x1, 
	0x1, 0x0, 0x1, 0x1, 0xE, 0x2, 0x3, 0x7, 0x5, 
	0x5, 0x4, 0x4, 0x4, 0x15, 0x5, 0x24, 0x2E, 0xC, 
	0x1, 0xC, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x10, 
	0x1E, 0x15, 0x4, 0x5, 0x5, 0x5, 0x5, 0x1C, 0x17, 
	0x15, 0x4A, 0x1, 0x1, 0x27, 0x1A, 0x1, 0x0, 0x0, 
	0x0, 0xE, 0xC, 0x10, 0x11, 0x4, 0x5, 0x5, 0x9, 
	0x9, 0x5, 0x5, 0x1C, 0x5, 0x34, 0x0, 0x1, 0xC, 
	0x1, 0x1, 0x0, 0x0, 0x30, 0x1, 0x19, 0x34, 0x4, 
	0x9, 0x9, 0x15, 0x7, 0x15, 0x15, 0x7, 0x4, 0x11, 
	0x2C, 0x0, 0xC, 0x0, 0x1, 0x1, 0x1, 0x1A, 0x27, 
	0x0, 0x31, 0x3A, 0x9, 0x5, 0x5, 0x5, 0x1D, 0x14, 
	0x59, 0x12, 0x3, 0x31, 0x0, 0xC, 0x1A, 0x1, 0x1, 
	0x0, 0x0, 0xF, 0xF, 0x0, 0x31, 0x24, 0x4, 0x7, 
	0x15, 0x9, 0x5, 0x9, 0x9, 0x9, 0x3C, 0x2, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0xC, 0x0, 0x5A, 
	0x11, 0x8, 0xA, 0x5B, 0x59, 0x15, 0x4, 0x4, 0x5, 
	0x7, 0x20, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0xC, 0x2A, 0xD, 0x29, 0x9, 0x7, 0x5, 0x5, 0x15, 
	0x15, 0x1C, 0x5, 0x5, 0x2B, 0x10, 0x1, 0x1, 0x1, 
	0x1, 0x0, 0x0, 0x0, 0x27, 0xC, 0xE, 0x3D, 0x15, 
	0x1C, 0x5, 0x1D, 0x15, 0x4, 0x9, 0x9, 0x15, 0x11, 
	0x10, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 
	0xE, 0x23, 0x1E, 0x5C, 0x5D, 0x15, 0x59, 0x59, 0x5, 
	0x9, 0x5E, 0x3C, 0x2E, 0x0, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0xE, 0x19, 0xC, 0x22, 0x39, 0x5, 0x5, 0x4, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x1B, 0x0, 0x19, 
	0x1, 0x0, 0x0, 0x1, 0x0, 0xE, 0x0, 0x0, 0x22, 
	0x46, 0x13, 0x6, 0x13, 0x13, 0x9, 0x7, 0x5F, 0x3C, 
	0x7, 0x4A, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 
	0xD, 0x27, 0xF, 0x1B, 0x3B, 0x1C, 0x1D, 0x1C, 0x3C, 
	0x5, 0x1C, 0x1C, 0x4, 0x11, 0x22, 0x1, 0x1, 0x0, 
	0x1, 0x1, 0x1, 0x1, 0x19, 0x1, 0x37, 0x7, 0x1C, 
	0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x4, 0x3, 0x2, 
	0x1, 0x1, 0x1, 0x0, 0x0, 
};

Gfx bone_elevator_WarningTape_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bone_elevator_WarningTape_ci8_pal_rgba16[] = {
	0x10, 0x83, 0x10, 0x43, 0x83, 0x45, 0xF5, 0x85, 0xED, 
	0x81, 0xF5, 0x81, 0xE5, 0x43, 0xED, 0x83, 0xE5, 0x3, 
	0xED, 0x41, 0xE5, 0x5, 0x83, 0x9, 0x10, 0x45, 0x18, 
	0x83, 0x10, 0x85, 0x18, 0x85, 0x41, 0x83, 0xDD, 0x7, 
	0xDD, 0x1, 0xDD, 0x5, 0xDD, 0x3, 0xED, 0x43, 0xDD, 
	0x43, 0xED, 0x3, 0xBC, 0x89, 0x10, 0x41, 0x8, 0x43, 
	0xBC, 0x87, 0xF5, 0x83, 0xF5, 0x43, 0xE5, 0x45, 0x49, 
	0xC5, 0xBC, 0x47, 0xCC, 0xC9, 0x41, 0x85, 0x83, 0x5, 
	0xED, 0x85, 0x8B, 0x47, 0xF5, 0x41, 0x18, 0x43, 0xE5, 
	0x7, 0xB4, 0x49, 0x10, 0x81, 0xE5, 0x47, 0x49, 0x85, 
	0x8, 0x81, 0x83, 0x47, 0x18, 0x45, 0x8, 0x83, 0x83, 
	0x7, 0xDD, 0x9, 0xC4, 0x49, 0xBC, 0x49, 0xE5, 0x1, 
	0xD4, 0xC7, 0x7B, 0x7, 0x8, 0x45, 0xDD, 0x49, 0xED, 
	0x47, 0xF5, 0x45, 0xED, 0x45, 0xBC, 0x85, 0xDD, 0x45, 
	0x18, 0x81, 0xD5, 0x9, 0xED, 0x87, 0xC4, 0x89, 0x7B, 
	0x9, 0xD5, 0x7, 0xB4, 0x7, 0xDD, 0x47, 0x8, 0x41, 
	0x8B, 0x7, 0xE5, 0x9, 0xB4, 0x47, 0xD5, 0x1, 0xB4, 
	0x87, 0xAC, 0x47, 0x7B, 0x5, 0x41, 0xC3, 0xAC, 0x49, 
	0x10, 0x3, 0xB4, 0x89, 0xBC, 0x45, 0x41, 0xC5, 0x10, 
	0x5, 0xE5, 0x81, 0xB4, 0x4B, 0x49, 0xC3, 0xD4, 0xC3, 
	0x49, 0x87, 0xD4, 0x83, 0xDC, 0xC5, 0xD4, 0xC5, 0xE5, 
	0x41, 0xCC, 0xC3, 
};

Vtx bone_elevator_oonginggang_mesh_vtx_cull[8] = {
	{{{-1049, -5415, -1049},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1049, -5415, 1049},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1049, 0, 1049},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1049, 0, -1049},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1049, -5415, -1049},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1049, -5415, 1049},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1049, 0, 1049},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1049, 0, -1049},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
};

Vtx bone_elevator_oonginggang_mesh_vtx_0[24] = {
	{{{-37, -5415, 37},0, {395, 597},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-37, -155, 37},0, {597, 597},{0x64, 0x64, 0x64, 0xFF}}},
	{{{-37, -155, -37},0, {597, 395},{0x64, 0x64, 0x64, 0xFF}}},
	{{{-37, -5415, -37},0, {395, 395},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-37, -5415, -37},0, {395, 597},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-37, -155, -37},0, {597, 597},{0x64, 0x64, 0x64, 0xFF}}},
	{{{37, -155, -37},0, {597, 395},{0x64, 0x64, 0x64, 0xFF}}},
	{{{37, -5415, -37},0, {395, 395},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{37, -5415, -37},0, {395, 597},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{37, -155, -37},0, {597, 597},{0x64, 0x64, 0x64, 0xFF}}},
	{{{37, -155, 37},0, {597, 395},{0x64, 0x64, 0x64, 0xFF}}},
	{{{37, -5415, 37},0, {395, 395},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{37, -5415, 37},0, {395, 597},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{37, -155, 37},0, {597, 597},{0x64, 0x64, 0x64, 0xFF}}},
	{{{-37, -155, 37},0, {597, 395},{0x64, 0x64, 0x64, 0xFF}}},
	{{{-37, -5415, 37},0, {395, 395},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{1049, 0, 1049},0, {2598, -2099},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{1049, -155, -1049},0, {-2112, -2099},{0x72, 0x72, 0x72, 0xFF}}},
	{{{1049, 0, -1049},0, {-2112, -2099},{0xFE, 0xFE, 0xFE, 0xFF}}},
	{{{1049, -155, 1049},0, {2598, -2099},{0x72, 0x72, 0x72, 0xFF}}},
	{{{-1049, 0, 1049},0, {2598, 2611},{0xFD, 0xFD, 0xFD, 0xFF}}},
	{{{-1049, -155, 1049},0, {2598, 2611},{0x72, 0x72, 0x72, 0xFF}}},
	{{{-1049, 0, -1049},0, {-2112, 2611},{0xFB, 0xFB, 0xFB, 0xFF}}},
	{{{-1049, -155, -1049},0, {-2112, 2611},{0x72, 0x72, 0x72, 0xFF}}},
};

Gfx bone_elevator_oonginggang_mesh_tri_0[] = {
	gsSPVertex(bone_elevator_oonginggang_mesh_vtx_0 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
	gsSP2Triangles(20, 19, 16, 0, 20, 21, 19, 0),
	gsSP2Triangles(22, 21, 20, 0, 22, 23, 21, 0),
	gsSP2Triangles(18, 23, 22, 0, 18, 17, 23, 0),
	gsSP2Triangles(23, 17, 19, 0, 23, 19, 21, 0),
	gsSPEndDisplayList(),
};Vtx bone_elevator_oonginggang_mesh_vtx_1[4] = {
	{{{-914, 0, 914},0, {2296, 2309},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{914, 0, 914},0, {2296, -1797},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{914, 0, -914},0, {-1809, -1797},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-914, 0, -914},0, {-1809, 2309},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx bone_elevator_oonginggang_mesh_tri_1[] = {
	gsSPVertex(bone_elevator_oonginggang_mesh_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx bone_elevator_oonginggang_mesh_vtx_2[8] = {
	{{{914, 0, 914},0, {2998, 3490},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-914, 0, 914},0, {-4980, 1491},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1049, 0, 1049},0, {-5863, 1638},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-1049, 0, -1049},0, {-1276, -2940},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-914, 0, -914},0, {-982, -2498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1049, 0, -1049},0, {7879, -646},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{914, 0, -914},0, {6996, -499},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1049, 0, 1049},0, {3292, 3932},{0x49, 0x49, 0x49, 0xFF}}},
};

Gfx bone_elevator_oonginggang_mesh_tri_2[] = {
	gsSPVertex(bone_elevator_oonginggang_mesh_vtx_2 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 2, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bone_elevator_VertexStone[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bone_elevator_Monotexture_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 37),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, bone_elevator_Monotexture_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(bone_elevator_VertexStone_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bone_elevator_VertexStone[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_bone_elevator_Stone[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bone_elevator_Monotexture_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 37),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, bone_elevator_Monotexture_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(bone_elevator_Stone_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bone_elevator_Stone[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_bone_elevator_Warning[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bone_elevator_WarningTape_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 95),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 64, bone_elevator_WarningTape_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(bone_elevator_Warning_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bone_elevator_Warning[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx bone_elevator_oonginggang_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(bone_elevator_oonginggang_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_bone_elevator_VertexStone),
	gsSPDisplayList(bone_elevator_oonginggang_mesh_tri_0),
	gsSPDisplayList(mat_revert_bone_elevator_VertexStone),
	gsSPDisplayList(mat_bone_elevator_Stone),
	gsSPDisplayList(bone_elevator_oonginggang_mesh_tri_1),
	gsSPDisplayList(mat_revert_bone_elevator_Stone),
	gsSPDisplayList(mat_bone_elevator_Warning),
	gsSPDisplayList(bone_elevator_oonginggang_mesh_tri_2),
	gsSPDisplayList(mat_revert_bone_elevator_Warning),
	gsSPEndDisplayList(),
};



Gfx bone_elevator_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
