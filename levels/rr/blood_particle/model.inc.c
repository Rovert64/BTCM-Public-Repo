Lights1 blood_particle_blood_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx blood_particle_Blood_i8_aligner[] = {gsSPEndDisplayList()};
u8 blood_particle_Blood_i8[] = {
	0x4f, 0x4f, 0x4d, 0x4f, 0x52, 0x4d, 0x42, 0x45, 
	0x4c, 0x52, 0x57, 0x5c, 0x60, 0x62, 0x63, 0x5a, 
	0x50, 0x4b, 0x44, 0x3f, 0x49, 0x48, 0x4d, 0x4f, 
	0x4c, 0x4d, 0x50, 0x51, 0x51, 0x52, 0x57, 0x57, 
	0x55, 0x57, 0x5a, 0x60, 0x58, 0x4f, 0x4a, 0x51, 
	0x55, 0x5b, 0x60, 0x54, 0x53, 0x53, 0x51, 0x56, 
	0x54, 0x52, 0x53, 0x56, 0x50, 0x4b, 0x50, 0x54, 
	0x5f, 0x57, 0x53, 0x4f, 0x52, 0x4a, 0x4c, 0x50, 
	0x5d, 0x55, 0x54, 0x52, 0x52, 0x50, 0x43, 0x4a, 
	0x51, 0x59, 0x58, 0x5d, 0x62, 0x5f, 0x60, 0x59, 
	0x4f, 0x53, 0x46, 0x45, 0x3e, 0x44, 0x4c, 0x55, 
	0x59, 0x57, 0x56, 0x52, 0x58, 0x59, 0x59, 0x59, 
	0x52, 0x51, 0x54, 0x54, 0x59, 0x59, 0x56, 0x58, 
	0x5d, 0x5b, 0x5b, 0x5a, 0x58, 0x56, 0x51, 0x57, 
	0x5b, 0x4e, 0x55, 0x51, 0x54, 0x52, 0x50, 0x55, 
	0x58, 0x5e, 0x5b, 0x5c, 0x51, 0x4a, 0x50, 0x53, 
	0x57, 0x57, 0x55, 0x50, 0x4f, 0x4d, 0x4b, 0x54, 
	0x52, 0x56, 0x54, 0x59, 0x5a, 0x56, 0x5e, 0x5a, 
	0x54, 0x4d, 0x4e, 0x48, 0x47, 0x46, 0x4f, 0x53, 
	0x55, 0x5a, 0x59, 0x5b, 0x5f, 0x62, 0x66, 0x5e, 
	0x59, 0x55, 0x59, 0x57, 0x5b, 0x5d, 0x60, 0x5d, 
	0x5c, 0x59, 0x54, 0x56, 0x5d, 0x58, 0x52, 0x4d, 
	0x4d, 0x55, 0x53, 0x5b, 0x5c, 0x59, 0x54, 0x5d, 
	0x57, 0x52, 0x59, 0x60, 0x57, 0x56, 0x58, 0x51, 
	0x51, 0x54, 0x59, 0x4e, 0x4c, 0x4a, 0x4b, 0x49, 
	0x50, 0x5b, 0x55, 0x53, 0x54, 0x55, 0x55, 0x55, 
	0x4f, 0x54, 0x54, 0x51, 0x4a, 0x4e, 0x4c, 0x55, 
	0x57, 0x57, 0x57, 0x5c, 0x5e, 0x6c, 0x69, 0x60, 
	0x58, 0x4f, 0x50, 0x54, 0x58, 0x61, 0x66, 0x63, 
	0x5f, 0x5e, 0x4f, 0x54, 0x5b, 0x5f, 0x61, 0x59, 
	0x50, 0x52, 0x58, 0x62, 0x60, 0x5b, 0x52, 0x52, 
	0x55, 0x4f, 0x58, 0x62, 0x57, 0x5b, 0x5b, 0x59, 
	0x55, 0x5a, 0x55, 0x4f, 0x4d, 0x47, 0x44, 0x45, 
	0x48, 0x4b, 0x4c, 0x51, 0x4d, 0x4f, 0x50, 0x4f, 
	0x4d, 0x4e, 0x50, 0x52, 0x51, 0x4a, 0x4e, 0x4c, 
	0x4b, 0x51, 0x54, 0x5b, 0x60, 0x64, 0x68, 0x61, 
	0x55, 0x55, 0x4c, 0x54, 0x57, 0x69, 0x68, 0x61, 
	0x59, 0x55, 0x4c, 0x57, 0x58, 0x5f, 0x66, 0x61, 
	0x50, 0x55, 0x55, 0x5e, 0x60, 0x61, 0x57, 0x53, 
	0x4f, 0x4d, 0x5b, 0x62, 0x62, 0x64, 0x61, 0x5b, 
	0x5b, 0x59, 0x56, 0x59, 0x4e, 0x4a, 0x46, 0x49, 
	0x49, 0x4a, 0x48, 0x4a, 0x47, 0x50, 0x54, 0x59, 
	0x55, 0x4a, 0x4f, 0x55, 0x54, 0x4f, 0x4a, 0x47, 
	0x46, 0x51, 0x55, 0x5b, 0x61, 0x60, 0x60, 0x5e, 
	0x56, 0x57, 0x4e, 0x57, 0x59, 0x5a, 0x60, 0x61, 
	0x57, 0x55, 0x50, 0x51, 0x59, 0x58, 0x62, 0x58, 
	0x50, 0x55, 0x5d, 0x5a, 0x5c, 0x58, 0x53, 0x4d, 
	0x4f, 0x50, 0x56, 0x55, 0x60, 0x60, 0x57, 0x5c, 
	0x55, 0x54, 0x52, 0x50, 0x51, 0x4b, 0x49, 0x44, 
	0x46, 0x48, 0x47, 0x4c, 0x4a, 0x51, 0x55, 0x5d, 
	0x5a, 0x50, 0x4e, 0x51, 0x52, 0x4d, 0x4a, 0x51, 
	0x55, 0x52, 0x57, 0x5b, 0x68, 0x63, 0x5e, 0x58, 
	0x56, 0x5c, 0x53, 0x51, 0x58, 0x5d, 0x5b, 0x5a, 
	0x5b, 0x52, 0x4f, 0x50, 0x50, 0x50, 0x57, 0x56, 
	0x53, 0x5b, 0x5e, 0x60, 0x5c, 0x57, 0x51, 0x48, 
	0x4f, 0x4e, 0x50, 0x5d, 0x60, 0x59, 0x54, 0x53, 
	0x52, 0x54, 0x51, 0x52, 0x4e, 0x49, 0x49, 0x4a, 
	0x4a, 0x43, 0x44, 0x4e, 0x4f, 0x52, 0x56, 0x5a, 
	0x5c, 0x50, 0x4a, 0x4e, 0x4d, 0x4c, 0x48, 0x4a, 
	0x4a, 0x48, 0x51, 0x54, 0x56, 0x55, 0x53, 0x55, 
	0x5a, 0x5b, 0x5a, 0x4f, 0x50, 0x56, 0x60, 0x63, 
	0x60, 0x5a, 0x55, 0x55, 0x4d, 0x55, 0x59, 0x51, 
	0x50, 0x5a, 0x5a, 0x5c, 0x5d, 0x4f, 0x4f, 0x4e, 
	0x44, 0x47, 0x50, 0x4f, 0x54, 0x5b, 0x58, 0x4d, 
	0x4a, 0x51, 0x57, 0x54, 0x4a, 0x43, 0x49, 0x47, 
	0x4c, 0x47, 0x4d, 0x4a, 0x52, 0x51, 0x52, 0x55, 
	0x54, 0x5a, 0x54, 0x4c, 0x46, 0x4a, 0x46, 0x46, 
	0x46, 0x4b, 0x57, 0x5c, 0x65, 0x5b, 0x58, 0x54, 
	0x54, 0x5b, 0x5b, 0x59, 0x59, 0x55, 0x58, 0x5c, 
	0x68, 0x5a, 0x51, 0x50, 0x4e, 0x54, 0x4d, 0x50, 
	0x54, 0x56, 0x55, 0x54, 0x51, 0x4d, 0x5b, 0x56, 
	0x55, 0x4a, 0x4b, 0x52, 0x53, 0x58, 0x57, 0x4d, 
	0x4a, 0x4b, 0x4a, 0x4a, 0x49, 0x41, 0x45, 0x45, 
	0x51, 0x50, 0x55, 0x55, 0x54, 0x4f, 0x51, 0x57, 
	0x52, 0x55, 0x59, 0x4d, 0x49, 0x4c, 0x45, 0x42, 
	0x47, 0x4b, 0x50, 0x54, 0x56, 0x54, 0x56, 0x57, 
	0x56, 0x55, 0x57, 0x56, 0x4f, 0x52, 0x56, 0x5a, 
	0x5e, 0x57, 0x52, 0x52, 0x4f, 0x4e, 0x4b, 0x54, 
	0x55, 0x54, 0x4b, 0x51, 0x4c, 0x4e, 0x57, 0x5f, 
	0x59, 0x51, 0x4a, 0x4d, 0x4c, 0x4d, 0x49, 0x4c, 
	0x44, 0x49, 0x44, 0x45, 0x47, 0x47, 0x4e, 0x4c, 
	0x48, 0x52, 0x54, 0x53, 0x51, 0x51, 0x54, 0x57, 
	0x5d, 0x5e, 0x59, 0x4e, 0x47, 0x45, 0x46, 0x41, 
	0x47, 0x49, 0x51, 0x4a, 0x53, 0x54, 0x5f, 0x5c, 
	0x63, 0x5b, 0x5d, 0x5a, 0x4f, 0x53, 0x59, 0x5b, 
	0x59, 0x57, 0x51, 0x51, 0x4f, 0x4c, 0x4d, 0x52, 
	0x59, 0x57, 0x4a, 0x49, 0x4d, 0x5c, 0x60, 0x60, 
	0x62, 0x54, 0x4d, 0x51, 0x58, 0x4d, 0x51, 0x49, 
	0x4d, 0x4f, 0x47, 0x4d, 0x55, 0x4a, 0x50, 0x51, 
	0x51, 0x52, 0x54, 0x51, 0x57, 0x55, 0x50, 0x52, 
	0x59, 0x5d, 0x5a, 0x50, 0x4e, 0x46, 0x4a, 0x4b, 
	0x47, 0x48, 0x4a, 0x4b, 0x4f, 0x5b, 0x5b, 0x5f, 
	0x63, 0x5b, 0x60, 0x5a, 0x4f, 0x59, 0x57, 0x58, 
	0x5a, 0x51, 0x54, 0x5c, 0x54, 0x52, 0x51, 0x51, 
	0x52, 0x49, 0x4a, 0x4f, 0x54, 0x60, 0x67, 0x65, 
	0x5d, 0x58, 0x58, 0x57, 0x54, 0x54, 0x51, 0x4d, 
	0x4c, 0x4a, 0x46, 0x4d, 0x54, 0x4d, 0x4f, 0x48, 
	0x58, 0x53, 0x5a, 0x5d, 0x54, 0x57, 0x4e, 0x4f, 
	0x55, 0x55, 0x51, 0x58, 0x4b, 0x4b, 0x4b, 0x4f, 
	0x49, 0x47, 0x43, 0x4b, 0x4f, 0x51, 0x58, 0x5e, 
	0x5f, 0x5b, 0x59, 0x59, 0x4f, 0x56, 0x55, 0x55, 
	0x57, 0x55, 0x5b, 0x5b, 0x55, 0x52, 0x57, 0x57, 
	0x52, 0x52, 0x4c, 0x4a, 0x55, 0x59, 0x5d, 0x5e, 
	0x63, 0x57, 0x54, 0x5d, 0x5d, 0x57, 0x55, 0x54, 
	0x53, 0x4f, 0x4c, 0x4f, 0x4b, 0x52, 0x50, 0x49, 
	0x56, 0x58, 0x5b, 0x5a, 0x5b, 0x59, 0x55, 0x4f, 
	0x4c, 0x4b, 0x54, 0x55, 0x4f, 0x51, 0x4c, 0x51, 
	0x47, 0x4a, 0x48, 0x46, 0x4a, 0x4f, 0x55, 0x5d, 
	0x59, 0x54, 0x55, 0x51, 0x52, 0x4c, 0x4e, 0x51, 
	0x51, 0x55, 0x57, 0x57, 0x56, 0x5c, 0x54, 0x5b, 
	0x57, 0x53, 0x50, 0x52, 0x54, 0x5a, 0x5e, 0x5a, 
	0x59, 0x59, 0x55, 0x61, 0x5f, 0x54, 0x4f, 0x59, 
	0x60, 0x5d, 0x51, 0x4a, 0x45, 0x52, 0x4f, 0x4c, 
	0x59, 0x58, 0x5c, 0x5d, 0x5b, 0x58, 0x52, 0x56, 
	0x55, 0x4a, 0x50, 0x4f, 0x53, 0x4d, 0x4b, 0x51, 
	0x51, 0x4f, 0x51, 0x44, 0x45, 0x4d, 0x58, 0x52, 
	0x52, 0x50, 0x4a, 0x4f, 0x48, 0x4a, 0x4a, 0x50, 
	0x51, 0x52, 0x4f, 0x52, 0x57, 0x55, 0x58, 0x54, 
	0x57, 0x54, 0x56, 0x5a, 0x55, 0x5a, 0x54, 0x5d, 
	0x54, 0x55, 0x5d, 0x63, 0x5a, 0x51, 0x53, 0x59, 
	0x5b, 0x5d, 0x51, 0x46, 0x49, 0x46, 0x47, 0x49, 
	0x50, 0x55, 0x5e, 0x60, 0x5d, 0x5d, 0x5e, 0x51, 
	0x54, 0x52, 0x54, 0x54, 0x57, 0x52, 0x52, 0x50, 
	0x50, 0x51, 0x4b, 0x4c, 0x50, 0x52, 0x57, 0x56, 
	0x52, 0x4d, 0x47, 0x49, 0x47, 0x44, 0x44, 0x50, 
	0x4e, 0x51, 0x50, 0x50, 0x51, 0x52, 0x56, 0x51, 
	0x55, 0x53, 0x58, 0x5d, 0x5d, 0x59, 0x55, 0x4f, 
	0x4f, 0x54, 0x57, 0x57, 0x58, 0x58, 0x58, 0x55, 
	0x5a, 0x57, 0x54, 0x4f, 0x45, 0x47, 0x45, 0x45, 
	0x4c, 0x4d, 0x54, 0x5f, 0x61, 0x64, 0x5b, 0x52, 
	0x55, 0x53, 0x51, 0x55, 0x55, 0x54, 0x4f, 0x4a, 
	0x4f, 0x55, 0x4d, 0x52, 0x57, 0x58, 0x5a, 0x56, 
	0x4e, 0x4f, 0x4b, 0x45, 0x42, 0x41, 0x49, 0x51, 
	0x53, 0x51, 0x49, 0x49, 0x4b, 0x4f, 0x4d, 0x4e, 
	0x54, 0x57, 0x5b, 0x5b, 0x5a, 0x60, 0x54, 0x51, 
	0x4f, 0x4b, 0x51, 0x52, 0x51, 0x54, 0x4f, 0x52, 
	0x52, 0x4a, 0x4b, 0x4c, 0x4d, 0x4d, 0x4d, 0x49, 
	0x50, 0x54, 0x5a, 0x55, 0x5b, 0x52, 0x58, 0x59, 
	0x54, 0x59, 0x57, 0x4b, 0x4c, 0x4c, 0x4c, 0x44, 
	0x49, 0x4e, 0x4c, 0x51, 0x53, 0x59, 0x5d, 0x55, 
	0x52, 0x4f, 0x46, 0x49, 0x42, 0x45, 0x4a, 0x47, 
	0x44, 0x48, 0x51, 0x4a, 0x4d, 0x4b, 0x4d, 0x47, 
	0x4f, 0x52, 0x5d, 0x5e, 0x54, 0x4f, 0x4e, 0x45, 
	0x4e, 0x5b, 0x57, 0x59, 0x4e, 0x56, 0x4c, 0x4b, 
	0x44, 0x46, 0x4e, 0x54, 0x52, 0x57, 0x57, 0x4c, 
	0x4d, 0x57, 0x5e, 0x5c, 0x60, 0x53, 0x54, 0x52, 
	0x50, 0x56, 0x55, 0x4b, 0x4b, 0x4d, 0x4f, 0x44, 
	0x40, 0x46, 0x50, 0x50, 0x51, 0x5b, 0x59, 0x55, 
	0x57, 0x55, 0x50, 0x50, 0x49, 0x46, 0x41, 0x42, 
	0x41, 0x44, 0x53, 0x46, 0x4c, 0x4b, 0x48, 0x47, 
	0x46, 0x51, 0x56, 0x58, 0x51, 0x52, 0x48, 0x49, 
	0x4a, 0x53, 0x4e, 0x50, 0x50, 0x53, 0x46, 0x46, 
	0x50, 0x4d, 0x4b, 0x52, 0x58, 0x57, 0x54, 0x53, 
	0x54, 0x58, 0x5d, 0x60, 0x57, 0x57, 0x4f, 0x50, 
	0x51, 0x54, 0x57, 0x51, 0x5b, 0x50, 0x4d, 0x46, 
	0x42, 0x4a, 0x46, 0x4b, 0x51, 0x55, 0x58, 0x58, 
	0x53, 0x5f, 0x58, 0x55, 0x4e, 0x4a, 0x4a, 0x4c, 
	0x44, 0x45, 0x46, 0x44, 0x44, 0x48, 0x46, 0x47, 
	0x4a, 0x4d, 0x54, 0x59, 0x51, 0x4b, 0x47, 0x48, 
	0x4d, 0x50, 0x54, 0x57, 0x5a, 0x50, 0x46, 0x4a, 
	0x47, 0x46, 0x51, 0x53, 0x56, 0x57, 0x54, 0x50, 
	0x50, 0x50, 0x55, 0x58, 0x5d, 0x55, 0x51, 0x4f, 
	0x59, 0x59, 0x59, 0x57, 0x52, 0x45, 0x4b, 0x4b, 
	0x4a, 0x47, 0x49, 0x54, 0x56, 0x5a, 0x59, 0x53, 
	0x57, 0x59, 0x5a, 0x59, 0x52, 0x51, 0x54, 0x4a, 
	0x49, 0x43, 0x46, 0x3e, 0x44, 0x47, 0x47, 0x49, 
	0x4d, 0x4b, 0x52, 0x54, 0x4c, 0x4c, 0x4d, 0x4d, 
	0x4c, 0x52, 0x57, 0x54, 0x52, 0x4e, 0x4d, 0x4a, 
	0x49, 0x44, 0x4b, 0x54, 0x54, 0x54, 0x51, 0x54, 
	0x51, 0x56, 0x51, 0x51, 0x54, 0x59, 0x59, 0x55, 
	0x5e, 0x5b, 0x54, 0x57, 0x54, 0x4a, 0x48, 0x4f, 
	0x50, 0x4d, 0x4b, 0x54, 0x53, 0x5d, 0x54, 0x59, 
	0x54, 0x51, 0x53, 0x58, 0x57, 0x56, 0x55, 0x56, 
	0x4a, 0x46, 0x45, 0x43, 0x3f, 0x4b, 0x46, 0x4c, 
	0x49, 0x51, 0x50, 0x51, 0x4e, 0x4c, 0x51, 0x51, 
	0x4e, 0x4d, 0x56, 0x54, 0x57, 0x4e, 0x4e, 0x51, 
	0x4b, 0x46, 0x4b, 0x4c, 0x48, 0x57, 0x52, 0x57, 
	0x51, 0x54, 0x51, 0x55, 0x55, 0x57, 0x57, 0x57, 
	0x60, 0x54, 0x52, 0x57, 0x52, 0x4c, 0x49, 0x4c, 
	0x4f, 0x4f, 0x4a, 0x58, 0x53, 0x51, 0x57, 0x51, 
	0x53, 0x55, 0x57, 0x5b, 0x55, 0x5b, 0x5b, 0x55, 
	0x4d, 0x47, 0x47, 0x41, 0x3c, 0x45, 0x43, 0x45, 
	0x47, 0x4c, 0x50, 0x51, 0x4b, 0x48, 0x4d, 0x54, 
	0x4e, 0x4f, 0x51, 0x54, 0x55, 0x51, 0x4d, 0x54, 
	0x47, 0x49, 0x4b, 0x54, 0x4d, 0x55, 0x55, 0x5f, 
	0x57, 0x54, 0x4e, 0x55, 0x56, 0x5b, 0x5e, 0x53, 
	0x50, 0x5c, 0x55, 0x4d, 0x52, 0x53, 0x54, 0x55, 
	0x4c, 0x4a, 0x44, 0x4f, 0x57, 0x51, 0x4c, 0x4d, 
	0x55, 0x59, 0x54, 0x5a, 0x5b, 0x5b, 0x58, 0x51, 
	0x4f, 0x4c, 0x41, 0x3c, 0x3a, 0x3f, 0x49, 0x49, 
	0x45, 0x45, 0x50, 0x56, 0x54, 0x49, 0x51, 0x50, 
	0x51, 0x55, 0x57, 0x59, 0x54, 0x55, 0x4f, 0x50, 
	0x4c, 0x4e, 0x4c, 0x4a, 0x4a, 0x57, 0x5a, 0x63, 
	0x62, 0x57, 0x4e, 0x55, 0x56, 0x51, 0x59, 0x52, 
	0x54, 0x4c, 0x4a, 0x4f, 0x4e, 0x4f, 0x4d, 0x52, 
	0x51, 0x53, 0x4d, 0x4a, 0x4b, 0x51, 0x47, 0x4c, 
	0x50, 0x51, 0x55, 0x5d, 0x59, 0x5a, 0x5d, 0x5b, 
	0x51, 0x4f, 0x46, 0x49, 0x42, 0x45, 0x44, 0x46, 
	0x49, 0x44, 0x50, 0x55, 0x5a, 0x4d, 0x4d, 0x5a, 
	0x51, 0x54, 0x57, 0x52, 0x4f, 0x50, 0x52, 0x4f, 
	0x4d, 0x50, 0x4f, 0x4c, 0x4e, 0x57, 0x60, 0x68, 
	0x60, 0x5a, 0x55, 0x4c, 0x4f, 0x4d, 0x50, 0x4a, 
	0x4d, 0x4f, 0x55, 0x4a, 0x53, 0x54, 0x4a, 0x55, 
	0x5b, 0x54, 0x56, 0x52, 0x50, 0x53, 0x51, 0x4e, 
	0x49, 0x4e, 0x53, 0x58, 0x5b, 0x61, 0x63, 0x56, 
	0x4f, 0x4a, 0x4a, 0x48, 0x42, 0x40, 0x42, 0x44, 
	0x46, 0x46, 0x50, 0x51, 0x58, 0x53, 0x52, 0x58, 
	0x50, 0x59, 0x59, 0x51, 0x47, 0x4e, 0x4a, 0x48, 
	0x47, 0x52, 0x57, 0x4b, 0x51, 0x59, 0x63, 0x67, 
	0x64, 0x58, 0x52, 0x54, 0x51, 0x51, 0x52, 0x51, 
	0x53, 0x4d, 0x5b, 0x4d, 0x5a, 0x53, 0x4e, 0x58, 
	0x5f, 0x57, 0x5b, 0x5b, 0x50, 0x54, 0x56, 0x53, 
	0x56, 0x51, 0x55, 0x60, 0x5b, 0x61, 0x5c, 0x57, 
	0x4e, 0x4c, 0x45, 0x45, 0x41, 0x47, 0x49, 0x49, 
	0x47, 0x4b, 0x4c, 0x52, 0x56, 0x57, 0x54, 0x57, 
	0x53, 0x51, 0x57, 0x54, 0x52, 0x50, 0x4b, 0x49, 
	0x48, 0x4e, 0x4f, 0x50, 0x4b, 0x58, 0x5a, 0x5b, 
	0x58, 0x52, 0x4b, 0x48, 0x51, 0x59, 0x5e, 0x5e, 
	0x58, 0x57, 0x4b, 0x51, 0x55, 0x4f, 0x50, 0x5b, 
	0x58, 0x53, 0x51, 0x53, 0x5a, 0x55, 0x58, 0x58, 
	0x61, 0x54, 0x57, 0x59, 0x5a, 0x5c, 0x57, 0x4e, 
	0x4e, 0x4b, 0x4a, 0x48, 0x4b, 0x42, 0x43, 0x44, 
	0x40, 0x44, 0x51, 0x53, 0x5a, 0x55, 0x50, 0x50, 
	0x54, 0x54, 0x5b, 0x59, 0x54, 0x50, 0x4c, 0x47, 
	0x48, 0x4f, 0x54, 0x57, 0x54, 0x51, 0x54, 0x57, 
	0x4a, 0x4f, 0x47, 0x4d, 0x55, 0x59, 0x5b, 0x5d, 
	0x58, 0x59, 0x4a, 0x4c, 0x51, 0x4a, 0x4c, 0x51, 
	0x50, 0x5a, 0x59, 0x59, 0x58, 0x57, 0x55, 0x60, 
	0x5f, 0x54, 0x5a, 0x54, 0x51, 0x54, 0x52, 0x4b, 
	0x4a, 0x52, 0x53, 0x51, 0x4a, 0x47, 0x4a, 0x45, 
	0x47, 0x4e, 0x4e, 0x53, 0x5b, 0x5e, 0x5d, 0x50, 
	0x4d, 0x52, 0x50, 0x54, 0x52, 0x55, 0x4f, 0x50, 
	0x53, 0x59, 0x5e, 0x62, 0x54, 0x50, 0x49, 0x49, 
	0x4c, 0x43, 0x46, 0x4c, 0x54, 0x5b, 0x5b, 0x56, 
	0x54, 0x4f, 0x4b, 0x48, 0x44, 0x4a, 0x4b, 0x53, 
	0x59, 0x58, 0x59, 0x58, 0x54, 0x59, 0x5d, 0x61, 
	0x57, 0x57, 0x55, 0x57, 0x53, 0x54, 0x51, 0x52, 
	0x55, 0x4f, 0x53, 0x52, 0x48, 0x47, 0x47, 0x4a, 
	0x44, 0x4d, 0x51, 0x57, 0x51, 0x5b, 0x51, 0x51, 
	0x47, 0x50, 0x53, 0x57, 0x50, 0x57, 0x57, 0x57, 
	0x57, 0x5a, 0x5c, 0x5a, 0x54, 0x4d, 0x4f, 0x47, 
	0x4b, 0x48, 0x46, 0x4d, 0x51, 0x5f, 0x66, 0x62, 
	0x5d, 0x59, 0x51, 0x4d, 0x44, 0x4a, 0x54, 0x53, 
	0x5a, 0x60, 0x61, 0x59, 0x58, 0x58, 0x56, 0x57, 
	0x51, 0x56, 0x57, 0x59, 0x58, 0x56, 0x58, 0x5b, 
	0x57, 0x57, 0x58, 0x5a, 0x51, 0x4b, 0x4e, 0x4c, 
	0x49, 0x4e, 0x54, 0x59, 0x58, 0x55, 0x57, 0x4f, 
	0x4d, 0x4f, 0x4e, 0x59, 0x57, 0x5b, 0x5b, 0x57, 
	0x56, 0x55, 0x53, 0x51, 0x4f, 0x53, 0x4f, 0x4c, 
	0x4c, 0x4f, 0x48, 0x55, 0x50, 0x5c, 0x60, 0x6b, 
	0x5b, 0x59, 0x58, 0x4d, 0x41, 0x49, 0x57, 0x58, 
	0x5d, 0x61, 0x61, 0x5b, 0x53, 0x59, 0x4d, 0x52, 
	0x51, 0x54, 0x54, 0x55, 0x56, 0x54, 0x5e, 0x60, 
	0x61, 0x58, 0x5a, 0x5c, 0x54, 0x4a, 0x4a, 0x50, 
	0x52, 0x51, 0x59, 0x52, 0x54, 0x57, 0x55, 0x4b, 
	0x50, 0x50, 0x51, 0x59, 0x5d, 0x5f, 0x6a, 0x60, 
	0x54, 0x51, 0x4f, 0x54, 0x51, 0x51, 0x51, 0x48, 
	0x48, 0x50, 0x48, 0x4f, 0x52, 0x5d, 0x5b, 0x59, 
	0x5f, 0x5b, 0x59, 0x50, 0x48, 0x4a, 0x54, 0x58, 
	0x5d, 0x65, 0x61, 0x5a, 0x55, 0x52, 0x4d, 0x48, 
	0x4b, 0x4f, 0x55, 0x53, 0x54, 0x52, 0x55, 0x60, 
	0x5a, 0x5b, 0x67, 0x5e, 0x5d, 0x4a, 0x4c, 0x52, 
	0x57, 0x59, 0x53, 0x55, 0x52, 0x57, 0x54, 0x57, 
	0x58, 0x51, 0x55, 0x54, 0x5d, 0x5e, 0x59, 0x59, 
	0x51, 0x53, 0x57, 0x59, 0x56, 0x51, 0x45, 0x4a, 
	0x49, 0x54, 0x49, 0x4d, 0x59, 0x4f, 0x5d, 0x59, 
	0x54, 0x57, 0x56, 0x4a, 0x4d, 0x58, 0x52, 0x55, 
	0x59, 0x5a, 0x5a, 0x52, 0x51, 0x4f, 0x4d, 0x46, 
	0x47, 0x4c, 0x55, 0x59, 0x55, 0x52, 0x56, 0x54, 
	0x5a, 0x61, 0x5d, 0x63, 0x5b, 0x55, 0x52, 0x52, 
	0x54, 0x54, 0x50, 0x51, 0x5c, 0x54, 0x57, 0x58, 
	0x58, 0x59, 0x54, 0x55, 0x5d, 0x5e, 0x5b, 0x5a, 
	0x51, 0x49, 0x4f, 0x50, 0x4c, 0x54, 0x4d, 0x50, 
	0x4b, 0x51, 0x50, 0x54, 0x53, 0x4f, 0x55, 0x55, 
	0x56, 0x54, 0x57, 0x4b, 0x54, 0x55, 0x4a, 0x51, 
	0x57, 0x59, 0x55, 0x51, 0x4b, 0x50, 0x47, 0x48, 
	0x47, 0x4b, 0x56, 0x51, 0x52, 0x4f, 0x4c, 0x4f, 
	0x59, 0x61, 0x64, 0x5f, 0x5b, 0x57, 0x54, 0x5d, 
	0x5a, 0x4f, 0x52, 0x54, 0x58, 0x5a, 0x59, 0x54, 
	0x51, 0x58, 0x52, 0x52, 0x58, 0x5d, 0x5f, 0x57, 
	0x4e, 0x4a, 0x41, 0x4a, 0x50, 0x50, 0x4f, 0x57, 
	0x50, 0x50, 0x51, 0x53, 0x4e, 0x57, 0x53, 0x51, 
	0x4a, 0x4c, 0x54, 0x52, 0x51, 0x4f, 0x54, 0x58, 
	0x58, 0x5a, 0x58, 0x52, 0x51, 0x49, 0x45, 0x4a, 
	0x43, 0x4d, 0x51, 0x56, 0x5a, 0x56, 0x4c, 0x4c, 
	0x53, 0x5f, 0x60, 0x5c, 0x59, 0x55, 0x55, 0x63, 
	0x5f, 0x57, 0x55, 0x54, 0x57, 0x58, 0x55, 0x55, 
	0x51, 0x53, 0x57, 0x51, 0x54, 0x57, 0x56, 0x5b, 
	0x46, 0x40, 0x44, 0x47, 0x4c, 0x54, 0x55, 0x57, 
	0x55, 0x55, 0x50, 0x50, 0x49, 0x52, 0x52, 0x50, 
	0x54, 0x51, 0x51, 0x51, 0x51, 0x57, 0x5e, 0x57, 
	0x57, 0x5b, 0x5d, 0x54, 0x52, 0x4a, 0x44, 0x44, 
	0x44, 0x46, 0x4f, 0x57, 0x56, 0x56, 0x50, 0x4b, 
	0x4e, 0x55, 0x57, 0x5b, 0x52, 0x56, 0x56, 0x59, 
	0x5c, 0x59, 0x55, 0x52, 0x4f, 0x5a, 0x52, 0x58, 
	0x57, 0x54, 0x57, 0x58, 0x5a, 0x51, 0x51, 0x48, 
	0x4d, 0x4a, 0x47, 0x47, 0x52, 0x51, 0x59, 0x59, 
	0x5f, 0x51, 0x51, 0x4b, 0x51, 0x4c, 0x4f, 0x50, 
	0x50, 0x4f, 0x4a, 0x50, 0x59, 0x5d, 0x5e, 0x60, 
	0x58, 0x59, 0x4f, 0x55, 0x4d, 0x49, 0x4c, 0x4b, 
	0x49, 0x4a, 0x4a, 0x4c, 0x52, 0x50, 0x4d, 0x4f, 
	0x51, 0x51, 0x54, 0x53, 0x50, 0x54, 0x5c, 0x60, 
	0x60, 0x53, 0x55, 0x51, 0x51, 0x5d, 0x5b, 0x57, 
	0x54, 0x54, 0x4c, 0x4f, 0x57, 0x55, 0x53, 0x4e, 
	0x4d, 0x4b, 0x52, 0x4f, 0x52, 0x51, 0x50, 0x57, 
	0x5c, 0x57, 0x56, 0x50, 0x51, 0x48, 0x4e, 0x51, 
	0x4e, 0x4c, 0x4a, 0x4a, 0x56, 0x62, 0x6a, 0x60, 
	0x5f, 0x54, 0x51, 0x4e, 0x51, 0x4f, 0x4d, 0x4f, 
	0x4c, 0x53, 0x52, 0x4f, 0x48, 0x50, 0x54, 0x49, 
	0x4b, 0x4f, 0x54, 0x4f, 0x52, 0x54, 0x61, 0x62, 
	0x61, 0x5b, 0x57, 0x57, 0x52, 0x5f, 0x5f, 0x56, 
	0x5a, 0x57, 0x4e, 0x4a, 0x57, 0x5a, 0x55, 0x4a, 
	0x57, 0x4b, 0x4d, 0x56, 0x52, 0x51, 0x55, 0x53, 
	0x55, 0x5b, 0x59, 0x54, 0x51, 0x47, 0x49, 0x47, 
	0x4a, 0x4c, 0x44, 0x4d, 0x55, 0x60, 0x63, 0x61, 
	0x5b, 0x58, 0x52, 0x4f, 0x4a, 0x4d, 0x51, 0x4d, 
	0x4f, 0x57, 0x55, 0x4d, 0x4b, 0x51, 0x4e, 0x4f, 
	0x51, 0x54, 0x57, 0x50, 0x54, 0x56, 0x5c, 0x62, 
	0x60, 0x5b, 0x56, 0x50, 0x54, 0x5b, 0x63, 0x62, 
	0x63, 0x5a, 0x53, 0x52, 0x59, 0x5b, 0x53, 0x53, 
	0x59, 0x51, 0x50, 0x5b, 0x5a, 0x58, 0x54, 0x54, 
	0x55, 0x52, 0x55, 0x4e, 0x52, 0x48, 0x4c, 0x52, 
	0x4a, 0x51, 0x4d, 0x50, 0x53, 0x57, 0x5a, 0x5b, 
	0x5a, 0x5d, 0x5f, 0x55, 0x4b, 0x4e, 0x4f, 0x55, 
	0x51, 0x51, 0x58, 0x51, 0x54, 0x54, 0x4c, 0x4e, 
	0x56, 0x59, 0x54, 0x57, 0x51, 0x57, 0x5d, 0x5b, 
	0x64, 0x5e, 0x55, 0x52, 0x52, 0x57, 0x62, 0x67, 
	0x64, 0x59, 0x55, 0x56, 0x62, 0x5f, 0x52, 0x5b, 
	0x59, 0x50, 0x54, 0x5d, 0x58, 0x5a, 0x55, 0x56, 
	0x55, 0x56, 0x4e, 0x4a, 0x4c, 0x4d, 0x51, 0x52, 
	0x54, 0x4f, 0x56, 0x58, 0x50, 0x54, 0x5b, 0x5a, 
	0x58, 0x5b, 0x5e, 0x5b, 0x50, 0x4d, 0x50, 0x4e, 
	0x51, 0x57, 0x59, 0x52, 0x4e, 0x4f, 0x4f, 0x57, 
	0x57, 0x57, 0x51, 0x53, 0x53, 0x51, 0x57, 0x63, 
	0x68, 0x61, 0x5e, 0x59, 0x57, 0x58, 0x63, 0x5e, 
	0x54, 0x53, 0x52, 0x55, 0x56, 0x54, 0x50, 0x5a, 
	0x59, 0x51, 0x57, 0x60, 0x65, 0x60, 0x5e, 0x5a, 
	0x50, 0x4d, 0x48, 0x48, 0x49, 0x51, 0x55, 0x5e, 
	0x5a, 0x5a, 0x5e, 0x56, 0x58, 0x54, 0x59, 0x58, 
	0x55, 0x56, 0x59, 0x54, 0x50, 0x54, 0x55, 0x55, 
	0x54, 0x55, 0x53, 0x4e, 0x46, 0x51, 0x4d, 0x55, 
	0x50, 0x57, 0x5a, 0x56, 0x50, 0x52, 0x5c, 0x65, 
	0x64, 0x64, 0x60, 0x5d, 0x57, 0x55, 0x5d, 0x59, 
	0x59, 0x51, 0x47, 0x4a, 0x4b, 0x50, 0x55, 0x57, 
	0x51, 0x53, 0x53, 0x54, 0x58, 0x5a, 0x5d, 0x5e, 
	0x54, 0x50, 0x49, 0x4d, 0x4b, 0x50, 0x58, 0x56, 
	0x5a, 0x5f, 0x5b, 0x5b, 0x5d, 0x57, 0x5d, 0x56, 
	0x50, 0x50, 0x50, 0x4e, 0x52, 0x52, 0x51, 0x4e, 
	0x56, 0x57, 0x54, 0x56, 0x4f, 0x4e, 0x4a, 0x53, 
	0x57, 0x5c, 0x59, 0x58, 0x57, 0x54, 0x59, 0x5e, 
	0x58, 0x5b, 0x60, 0x5f, 0x55, 0x4f, 0x53, 0x51, 
	0x51, 0x4f, 0x49, 0x49, 0x4f, 0x4f, 0x4d, 0x53, 
	0x51, 0x52, 0x57, 0x58, 0x54, 0x54, 0x51, 0x55, 
	0x4c, 0x52, 0x4b, 0x4a, 0x49, 0x50, 0x58, 0x59, 
	0x5f, 0x5b, 0x59, 0x5a, 0x5f, 0x53, 0x52, 0x57, 
	0x4f, 0x54, 0x54, 0x49, 0x4a, 0x4f, 0x4f, 0x51, 
	0x57, 0x60, 0x58, 0x5d, 0x54, 0x4f, 0x48, 0x50, 
	0x5b, 0x59, 0x55, 0x54, 0x56, 0x58, 0x59, 0x59, 
	0x55, 0x58, 0x5b, 0x59, 0x55, 0x55, 0x4e, 0x4f, 
	0x50, 0x4c, 0x4a, 0x44, 0x4a, 0x49, 0x4d, 0x49, 
	0x4d, 0x50, 0x51, 0x59, 0x52, 0x4d, 0x4a, 0x4c, 
	0x4c, 0x4f, 0x4a, 0x47, 0x4f, 0x51, 0x57, 0x57, 
	0x5c, 0x59, 0x59, 0x59, 0x56, 0x56, 0x57, 0x52, 
	0x4f, 0x5c, 0x55, 0x51, 0x52, 0x4c, 0x4f, 0x51, 
	0x58, 0x59, 0x51, 0x53, 0x50, 0x4a, 0x46, 0x53, 
	0x59, 0x5e, 0x5c, 0x57, 0x57, 0x59, 0x5b, 0x52, 
	0x54, 0x55, 0x56, 0x55, 0x52, 0x4e, 0x4f, 0x4c, 
	0x53, 0x50, 0x52, 0x52, 0x4c, 0x47, 0x47, 0x48, 
	0x53, 0x54, 0x50, 0x53, 0x51, 0x50, 0x50, 0x4a, 
	0x46, 0x47, 0x46, 0x4c, 0x51, 0x5a, 0x61, 0x68, 
	0x60, 0x60, 0x54, 0x5a, 0x56, 0x51, 0x54, 0x53, 
	0x51, 0x54, 0x5e, 0x4e, 0x4a, 0x4a, 0x54, 0x57, 
	0x57, 0x5c, 0x57, 0x57, 0x4f, 0x4a, 0x4f, 0x4d, 
	0x57, 0x59, 0x59, 0x58, 0x54, 0x5d, 0x59, 0x56, 
	0x52, 0x4b, 0x4f, 0x51, 0x54, 0x4d, 0x4a, 0x4f, 
	0x52, 0x55, 0x55, 0x54, 0x4d, 0x51, 0x52, 0x4b, 
	0x52, 0x50, 0x4c, 0x51, 0x4a, 0x49, 0x47, 0x47, 
	0x44, 0x4a, 0x4c, 0x4e, 0x50, 0x57, 0x5a, 0x63, 
	0x65, 0x5b, 0x60, 0x5d, 0x5f, 0x54, 0x58, 0x5a, 
	0x4f, 0x50, 0x51, 0x4f, 0x4e, 0x49, 0x52, 0x59, 
	0x5f, 0x5e, 0x59, 0x57, 0x56, 0x4e, 0x4e, 0x52, 
	0x5a, 0x5a, 0x53, 0x51, 0x4d, 0x52, 0x52, 0x55, 
	0x51, 0x4c, 0x4b, 0x4b, 0x55, 0x4c, 0x4a, 0x4b, 
	0x4c, 0x52, 0x51, 0x51, 0x52, 0x50, 0x54, 0x56, 
	0x58, 0x57, 0x51, 0x50, 0x52, 0x42, 0x47, 0x48, 
	0x49, 0x50, 0x59, 0x5b, 0x53, 0x5d, 0x62, 0x5f, 
	0x61, 0x5e, 0x63, 0x62, 0x5e, 0x50, 0x57, 0x55, 
	0x51, 0x52, 0x56, 0x4d, 0x4a, 0x48, 0x54, 0x59, 
	0x5b, 0x5c, 0x5e, 0x54, 0x51, 0x49, 0x51, 0x54, 
	0x59, 0x5e, 0x5d, 0x59, 0x4f, 0x46, 0x4a, 0x54, 
	0x4e, 0x50, 0x4b, 0x4c, 0x4e, 0x4a, 0x45, 0x4d, 
	0x4b, 0x4c, 0x4d, 0x51, 0x51, 0x49, 0x51, 0x55, 
	0x54, 0x58, 0x57, 0x4f, 0x4d, 0x44, 0x46, 0x46, 
	0x4b, 0x57, 0x5e, 0x5b, 0x5b, 0x5a, 0x5b, 0x5b, 
	0x60, 0x60, 0x5f, 0x5b, 0x59, 0x54, 0x4c, 0x54, 
	0x58, 0x5b, 0x51, 0x51, 0x54, 0x4f, 0x4c, 0x58, 
	0x57, 0x59, 0x59, 0x51, 0x4e, 0x4f, 0x4c, 0x54, 
	0x52, 0x51, 0x53, 0x52, 0x51, 0x43, 0x49, 0x50, 
	0x53, 0x53, 0x4e, 0x4a, 0x4d, 0x4d, 0x4b, 0x43, 
	0x44, 0x49, 0x4b, 0x51, 0x49, 0x4b, 0x50, 0x5a, 
	0x5a, 0x54, 0x51, 0x4f, 0x49, 0x46, 0x49, 0x4a, 
	0x4f, 0x57, 0x60, 0x64, 0x67, 0x5b, 0x54, 0x52, 
	0x52, 0x60, 0x60, 0x60, 0x55, 0x4d, 0x4f, 0x52, 
	0x58, 0x59, 0x58, 0x50, 0x55, 0x57, 0x50, 0x54, 
	0x54, 0x50, 0x51, 0x4f, 0x4c, 0x4b, 0x54, 0x57, 
	0x5c, 0x54, 0x54, 0x4d, 0x4b, 0x4a, 0x4b, 0x4a, 
	0x50, 0x57, 0x4f, 0x46, 0x4b, 0x4d, 0x4f, 0x4e, 
	0x4d, 0x4c, 0x4e, 0x4a, 0x54, 0x54, 0x53, 0x54, 
	0x51, 0x51, 0x51, 0x4a, 0x4b, 0x4b, 0x4c, 0x4f, 
	0x51, 0x52, 0x62, 0x5e, 0x64, 0x5c, 0x55, 0x4f, 
	0x54, 0x57, 0x5a, 0x56, 0x53, 0x48, 0x4d, 0x54, 
	0x56, 0x5b, 0x54, 0x54, 0x58, 0x5a, 0x50, 0x51, 
	0x54, 0x56, 0x55, 0x52, 0x4a, 0x51, 0x52, 0x59, 
	0x5c, 0x5a, 0x5a, 0x4d, 0x4b, 0x53, 0x54, 0x55, 
	0x54, 0x4f, 0x51, 0x4a, 0x55, 0x50, 0x52, 0x54, 
	0x55, 0x54, 0x58, 0x52, 0x4b, 0x50, 0x54, 0x4f, 
	0x4f, 0x54, 0x4a, 0x4c, 0x50, 0x4d, 0x53, 0x51, 
	0x4f, 0x52, 0x57, 0x57, 0x59, 0x5a, 0x4e, 0x51, 
	0x4a, 0x4e, 0x54, 0x4c, 0x4b, 0x45, 0x49, 0x4d, 
	0x56, 0x61, 0x5e, 0x5d, 0x57, 0x5c, 0x53, 0x4f, 
	0x55, 0x54, 0x54, 0x4f, 0x47, 0x4b, 0x52, 0x54, 
	0x52, 0x56, 0x51, 0x4b, 0x4e, 0x51, 0x50, 0x59, 
	0x56, 0x4f, 0x49, 0x52, 0x4b, 0x52, 0x5a, 0x5a, 
	0x5d, 0x5b, 0x5f, 0x58, 0x50, 0x52, 0x52, 0x4c, 
	0x52, 0x52, 0x51, 0x4b, 0x4d, 0x50, 0x4f, 0x4f, 
	0x53, 0x54, 0x54, 0x51, 0x54, 0x52, 0x4d, 0x4b, 
	0x4d, 0x4a, 0x47, 0x44, 0x46, 0x4a, 0x49, 0x51, 
	0x5d, 0x63, 0x59, 0x60, 0x5d, 0x50, 0x4d, 0x4a, 
	0x4f, 0x5b, 0x51, 0x4d, 0x45, 0x4a, 0x49, 0x49, 
	0x4a, 0x4b, 0x4f, 0x50, 0x50, 0x4a, 0x4f, 0x57, 
	0x5f, 0x51, 0x51, 0x52, 0x52, 0x54, 0x5b, 0x62, 
	0x65, 0x61, 0x63, 0x5b, 0x56, 0x5a, 0x55, 0x4c, 
	0x59, 0x59, 0x5a, 0x54, 0x4c, 0x4e, 0x4b, 0x4f, 
	0x4f, 0x54, 0x55, 0x57, 0x4e, 0x50, 0x4b, 0x50, 
	0x4c, 0x47, 0x4b, 0x47, 0x45, 0x50, 0x4f, 0x59, 
	0x5e, 0x61, 0x57, 0x59, 0x57, 0x55, 0x49, 0x4c, 
	0x48, 0x50, 0x56, 0x4d, 0x46, 0x45, 0x44, 0x4b, 
	0x47, 0x4a, 0x4d, 0x4e, 0x50, 0x4d, 0x52, 0x58, 
	0x5d, 0x57, 0x50, 0x51, 0x52, 0x59, 0x63, 0x62, 
	0x63, 0x63, 0x63, 0x5b, 0x57, 0x63, 0x5b, 0x56, 
	0x67, 0x5f, 0x61, 0x56, 0x52, 0x51, 0x51, 0x53, 
	0x59, 0x59, 0x4f, 0x51, 0x4f, 0x4d, 0x51, 0x57, 
	0x54, 0x49, 0x47, 0x42, 0x47, 0x47, 0x51, 0x54, 
	0x58, 0x5f, 0x59, 0x58, 0x4e, 0x4f, 0x4d, 0x4d, 
	0x4e, 0x4a, 0x4f, 0x4f, 0x44, 0x44, 0x3c, 0x49, 
	0x48, 0x49, 0x52, 0x4f, 0x57, 0x59, 0x57, 0x55, 
	0x54, 0x4e, 0x4a, 0x52, 0x51, 0x5f, 0x5f, 0x58, 
	0x59, 0x5e, 0x55, 0x53, 0x5b, 0x56, 0x55, 0x5e, 
	0x59, 0x5e, 0x5d, 0x59, 0x54, 0x59, 0x51, 0x53, 
	0x52, 0x52, 0x50, 0x54, 0x57, 0x58, 0x57, 0x5c, 
	0x53, 0x4a, 0x4b, 0x41, 0x46, 0x45, 0x4a, 0x53, 
	0x58, 0x5b, 0x55, 0x56, 0x4f, 0x4b, 0x4d, 0x45, 
	0x4c, 0x48, 0x49, 0x49, 0x44, 0x39, 0x40, 0x48, 
	0x4c, 0x4b, 0x4c, 0x4c, 0x50, 0x5b, 0x59, 0x51, 
	0x50, 0x4a, 0x4c, 0x4d, 0x55, 0x59, 0x5a, 0x55, 
	0x53, 0x5a, 0x50, 0x54, 0x54, 0x51, 0x54, 0x58, 
	0x5b, 0x59, 0x57, 0x59, 0x57, 0x53, 0x52, 0x4e, 
	0x51, 0x56, 0x58, 0x5a, 0x60, 0x5e, 0x55, 0x5a, 
	0x5d, 0x56, 0x42, 0x42, 0x49, 0x4f, 0x53, 0x57, 
	0x5f, 0x61, 0x59, 0x57, 0x49, 0x46, 0x4f, 0x48, 
	0x47, 0x44, 0x42, 0x41, 0x3a, 0x38, 0x3d, 0x45, 
	0x47, 0x49, 0x46, 0x4b, 0x4a, 0x54, 0x59, 0x55, 
	0x56, 0x4a, 0x4c, 0x49, 0x4c, 0x51, 0x54, 0x4d, 
	0x4d, 0x4a, 0x4c, 0x46, 0x4e, 0x53, 0x59, 0x56, 
	0x58, 0x59, 0x54, 0x5b, 0x59, 0x54, 0x51, 0x51, 
	0x54, 0x57, 0x5c, 0x61, 0x63, 0x5b, 0x54, 0x59, 
	0x5a, 0x54, 0x51, 0x46, 0x4c, 0x4d, 0x52, 0x59, 
	0x5b, 0x58, 0x55, 0x56, 0x4d, 0x4e, 0x4b, 0x4e, 
	0x4a, 0x44, 0x44, 0x44, 0x41, 0x42, 0x3f, 0x3e, 
	0x3e, 0x46, 0x45, 0x43, 0x48, 0x58, 0x5d, 0x52, 
	0x55, 0x51, 0x54, 0x53, 0x52, 0x53, 0x52, 0x49, 
	0x49, 0x4c, 0x47, 0x46, 0x4b, 0x51, 0x50, 0x57, 
	0x5d, 0x5b, 0x5a, 0x5d, 0x5d, 0x56, 0x51, 0x55, 
	0x57, 0x58, 0x60, 0x67, 0x62, 0x60, 0x59, 0x56, 
	0x54, 0x55, 0x53, 0x4b, 0x49, 0x4e, 0x55, 0x60, 
	0x60, 0x5f, 0x5b, 0x52, 0x51, 0x52, 0x51, 0x54, 
	0x52, 0x50, 0x51, 0x50, 0x4c, 0x46, 0x46, 0x46, 
	0x46, 0x4d, 0x48, 0x46, 0x50, 0x59, 0x56, 0x51, 
	0x58, 0x5a, 0x5b, 0x59, 0x5a, 0x59, 0x5a, 0x4a, 
	0x47, 0x48, 0x46, 0x4e, 0x52, 0x57, 0x57, 0x61, 
	0x61, 0x56, 0x59, 0x5b, 0x58, 0x55, 0x4c, 0x52, 
	0x4d, 0x51, 0x5f, 0x5c, 0x60, 0x62, 0x5e, 0x58, 
	0x5b, 0x50, 0x54, 0x4b, 0x44, 0x4f, 0x57, 0x61, 
	0x69, 0x60, 0x55, 0x52, 0x51, 0x55, 0x58, 0x5b, 
	0x59, 0x54, 0x4c, 0x4a, 0x4d, 0x50, 0x4c, 0x48, 
	0x47, 0x4c, 0x4f, 0x4b, 0x49, 0x52, 0x51, 0x51, 
	0x59, 0x55, 0x5b, 0x60, 0x5e, 0x58, 0x5c, 0x54, 
	0x48, 0x48, 0x51, 0x51, 0x55, 0x57, 0x5d, 0x68, 
	0x62, 0x59, 0x59, 0x58, 0x56, 0x53, 0x4f, 0x4d, 
	0x47, 0x52, 0x51, 0x5b, 0x5c, 0x5b, 0x5f, 0x5b, 
	0x55, 0x4e, 0x4a, 0x41, 0x49, 0x4d, 0x57, 0x5e, 
	0x5c, 0x5a, 0x54, 0x4a, 0x4f, 0x59, 0x5f, 0x62, 
	0x5f, 0x5d, 0x56, 0x52, 0x56, 0x51, 0x4f, 0x50, 
	0x4b, 0x4f, 0x54, 0x54, 0x51, 0x4e, 0x4c, 0x4d, 
	0x56, 0x55, 0x5d, 0x62, 0x5d, 0x54, 0x5c, 0x4f, 
	0x4c, 0x48, 0x51, 0x50, 0x4e, 0x50, 0x5b, 0x60, 
	0x5d, 0x5a, 0x5a, 0x51, 0x50, 0x51, 0x50, 0x4b, 
	0x47, 0x47, 0x50, 0x57, 0x5b, 0x5e, 0x61, 0x57, 
	0x54, 0x4e, 0x44, 0x45, 0x4c, 0x4b, 0x54, 0x5d, 
	0x5f, 0x5d, 0x5a, 0x51, 0x4b, 0x55, 0x60, 0x65, 
	0x62, 0x5b, 0x57, 0x57, 0x50, 0x51, 0x4e, 0x4a, 
	0x4a, 0x51, 0x59, 0x55, 0x50, 0x4c, 0x4b, 0x52, 
	0x55, 0x57, 0x59, 0x5c, 0x5a, 0x57, 0x5c, 0x55, 
	0x55, 0x57, 0x56, 0x54, 0x49, 0x4d, 0x57, 0x5b, 
	0x52, 0x56, 0x52, 0x54, 0x53, 0x4f, 0x4d, 0x43, 
	0x4c, 0x4e, 0x4f, 0x5a, 0x61, 0x63, 0x5b, 0x59, 
	0x51, 0x48, 0x4b, 0x46, 0x42, 0x46, 0x4b, 0x54, 
	0x52, 0x54, 0x52, 0x4c, 0x4f, 0x54, 0x5b, 0x60, 
	0x5e, 0x5a, 0x5b, 0x5d, 0x53, 0x54, 0x50, 0x46, 
	0x4c, 0x56, 0x60, 0x5d, 0x4e, 0x52, 0x4d, 0x4f, 
	0x5b, 0x55, 0x57, 0x59, 0x5b, 0x57, 0x56, 0x55, 
	0x60, 0x5e, 0x57, 0x4f, 0x4d, 0x4a, 0x4d, 0x57, 
	
};

Vtx blood_particle_Cube_009_mesh_layer_5_vtx_cull[8] = {
	{{{-115, -128, 122},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-115, 128, 122},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-115, 128, -122},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-115, -128, -122},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{115, -128, 122},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{115, 128, 122},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{115, 128, -122},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{115, -128, -122},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx blood_particle_Cube_009_mesh_layer_5_vtx_0[14] = {
	{{{-12, -128, -7},0, {752, 2032},{0x57, 0x57, 0x57, 0xFF}}},
	{{{-115, -35, 46},0, {1264, 2032},{0x9D, 0x9D, 0x9D, 0xFF}}},
	{{{-92, 55, -70},0, {1264, 1520},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{11, -37, -122},0, {752, 1520},{0x8B, 0x8B, 0x8B, 0xFF}}},
	{{{12, 128, 7},0, {1264, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{115, 35, -46},0, {752, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-11, 37, 122},0, {1264, 496},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-115, -35, 46},0, {1776, 496},{0x9D, 0x9D, 0x9D, 0xFF}}},
	{{{-92, 55, -70},0, {1776, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{92, -55, 70},0, {752, 496},{0x8B, 0x8B, 0x8B, 0xFF}}},
	{{{-115, -35, 46},0, {1264, -16},{0x9D, 0x9D, 0x9D, 0xFF}}},
	{{{-12, -128, -7},0, {752, -16},{0x57, 0x57, 0x57, 0xFF}}},
	{{{11, -37, -122},0, {240, 1008},{0x8B, 0x8B, 0x8B, 0xFF}}},
	{{{-12, -128, -7},0, {240, 496},{0x57, 0x57, 0x57, 0xFF}}},
};

Gfx blood_particle_Cube_009_mesh_layer_5_tri_0[] = {
	gsSPVertex(blood_particle_Cube_009_mesh_layer_5_vtx_0 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 4, 7, 6, 0),
	gsSP2Triangles(4, 8, 7, 0, 5, 6, 9, 0),
	gsSP2Triangles(9, 6, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 5, 9, 0, 12, 9, 13, 0),
	gsSPEndDisplayList(),
};


Gfx mat_blood_particle_blood[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, TEXEL0, SHADE, 0, SHADE, 0, PRIMITIVE, 0, PRIMITIVE, TEXEL0, SHADE, 0, SHADE, 0, PRIMITIVE, 0),
	gsSPGeometryMode(G_CULL_BACK | G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, blood_particle_Blood_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsDPSetPrimColor(0, 0, 163, 15, 99, 204),
	gsSPSetLights1(blood_particle_blood_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_blood_particle_blood[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK | G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx blood_particle_Cube_009_mesh_layer_5[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(blood_particle_Cube_009_mesh_layer_5_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_blood_particle_blood),
	gsSPDisplayList(blood_particle_Cube_009_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_blood_particle_blood),
	gsSPEndDisplayList(),
};

Gfx blood_particle_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

