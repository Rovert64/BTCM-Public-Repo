Lights1 chainpole_chain_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx chainpole_pogchain_ia4_aligner[] = {gsSPEndDisplayList()};
u8 chainpole_pogchain_ia4[] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x11, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x11, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x13, 0x30, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x1, 0x11, 0x11, 0x11, 0x11, 0x33, 0x53, 0x55, 0x55, 
	0x33, 0x33, 0x13, 0x11, 0x10, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x33, 0x53, 0x33, 0x33, 0x33, 0x33, 
	0x35, 0x75, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x25, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x77, 
	0x9B, 0x75, 0x55, 0x55, 0x57, 0x97, 0x50, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 0x11, 0x13, 0x33, 
	0x33, 0x33, 0x35, 0x33, 0x55, 0x75, 0x55, 0x55, 0x55, 
	0x53, 0x33, 0x59, 0x95, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x7, 0xBB, 0x95, 0x55, 0x55, 0x55, 0x53, 0x35, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0x79, 0xBB, 0x50, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x33, 0x33, 0x33, 0x35, 
	0x55, 0x55, 0x55, 0x57, 0x55, 0x55, 0x75, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x35, 0x9B, 0x70, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x9D, 0xB7, 0x55, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x53, 0x33, 0x33, 0x33, 0x33, 0x55, 0x7B, 
	0xD9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x57, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x57, 0x55, 0x53, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x55, 0x5B, 0xB7, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x9, 0xDB, 0x55, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x55, 0xBD, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x57, 0x97, 0x55, 
	0x55, 0x33, 0x35, 0x55, 0x53, 0x33, 0x35, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x35, 0x55, 0x55, 0xBB, 0x50, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x9D, 0xB5, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x31, 0x11, 0x31, 0x33, 0x35, 0x33, 
	0x33, 0x33, 0x59, 0xD9, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x9B, 0x77, 
	0x55, 0x55, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x53, 0x33, 0x10, 0x2, 0x23, 0x55, 0x79, 0x55, 0x5B, 
	0xB0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x5, 0xDB, 0x53, 0x33, 0x57, 0x73, 0x20, 
	0x0, 0x0, 0x13, 0x33, 0x33, 0x33, 0x30, 0x0, 0x22, 
	0x57, 0x73, 0x33, 0x35, 0xBD, 0x70, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x39, 0xD9, 
	0x75, 0x97, 0x35, 0x32, 0x20, 0x0, 0x33, 0x33, 0x33, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x79, 0xB7, 
	0x57, 0xD9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x2B, 0xD7, 0x35, 0x9B, 0x72, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x27, 0x75, 0x53, 0x5B, 0xB3, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7D, 
	0xB7, 0x7B, 0x95, 0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 
	0xB9, 0x57, 0xBD, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x7D, 0xB3, 0x59, 0xB5, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x5B, 0x77, 0x39, 0xD9, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 
	0xBD, 0x97, 0xBB, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x2, 0x99, 0x79, 0xBB, 0x90, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x3, 0xBD, 0x73, 0x59, 0x70, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xBB, 0x55, 0xBB, 
	0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x7, 0xDB, 0x79, 0xDB, 0x20, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x77, 0x55, 0x77, 0x50, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x77, 0x73, 0x37, 
	0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x77, 0x55, 
	0x79, 0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x37, 0x97, 0x57, 0x99, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x3, 0x33, 0x79, 0x99, 0x77, 0x77, 0x33, 0x33, 0x33, 
	0x57, 0x55, 0x55, 0x97, 0x53, 0x33, 0x33, 0x33, 0x55, 
	0x77, 0x77, 0x77, 0x55, 0x40, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x55, 0x57, 0x75, 0x33, 
	0x31, 0x11, 0x11, 0x11, 0x11, 0x13, 0x31, 0x13, 0x31, 
	0x11, 0x11, 0x11, 0x11, 0x33, 0x33, 0x33, 0x55, 0x54, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x33, 0x37, 0x9B, 0xDD, 0xDD, 0xD9, 0x55, 0x55, 
	0x55, 0x79, 0x77, 0x55, 0x57, 0x55, 0x55, 0x55, 0x57, 
	0x9D, 0xDD, 0xDB, 0x97, 0x77, 0x74, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0x77, 0x97, 0x77, 
	0x99, 0x99, 0x75, 0x33, 0x33, 0x33, 0x37, 0x75, 0x35, 
	0x55, 0x33, 0x33, 0x33, 0x35, 0x79, 0x99, 0x75, 0x35, 
	0x77, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x1, 0x13, 0x35, 0x9B, 0xBB, 0xBB, 0xB7, 0x33, 
	0x33, 0x33, 0x33, 0x35, 0x33, 0x33, 0x33, 0x33, 0x55, 
	0x53, 0x5B, 0xDD, 0xDD, 0xDB, 0x77, 0x59, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x57, 0x57, 0x57, 
	0xBD, 0xDD, 0xDD, 0xB7, 0x55, 0x55, 0x55, 0x5B, 0x95, 
	0x57, 0x95, 0x55, 0x55, 0x55, 0x59, 0xDD, 0xDD, 0xDB, 
	0x75, 0x53, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x3, 0x35, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x35, 0x55, 0x57, 0x77, 0x55, 0x59, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x77, 0x57, 
	0x79, 0xDD, 0xDD, 0xDD, 0x75, 0x33, 0x33, 0x33, 0x59, 
	0x53, 0x33, 0x55, 0x55, 0x55, 0x55, 0x57, 0xBD, 0xDD, 
	0xDD, 0xB5, 0x53, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x1, 0x35, 0x33, 0x11, 0x11, 0x11, 
	0x11, 0x33, 0x33, 0x33, 0x33, 0x13, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x77, 0x79, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x47, 
	0x35, 0x33, 0x55, 0x75, 0x55, 0x35, 0x33, 0x33, 0x33, 
	0x35, 0x33, 0x33, 0x33, 0x33, 0x55, 0x53, 0x35, 0x99, 
	0x99, 0x99, 0x99, 0x51, 0x10, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x37, 0x53, 0x31, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x13, 0x33, 0x35, 0x99, 
	0x92, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x7, 0x79, 0x53, 0x13, 0x31, 0x11, 0x33, 0x33, 0x33, 
	0x33, 0x31, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x11, 0x35, 0x99, 0x31, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x55, 0x31, 
	0x13, 0x33, 0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x13, 0x11, 0x13, 0x33, 0x31, 0x35, 
	0x55, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x25, 0x55, 0x33, 0x33, 0x53, 0x11, 0x13, 
	0x11, 0x11, 0x11, 0x31, 0x31, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x33, 0x37, 0x75, 0x30, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x37, 0x53, 0x33, 0x50, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x5, 0x53, 0x35, 0x77, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x77, 0x55, 0x59, 
	0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x35, 0x33, 0x15, 0x92, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x7B, 0x33, 0x11, 0x10, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x33, 0x55, 0x97, 
	0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x75, 0x55, 
	0x9B, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x7, 0x51, 0x13, 0xB5, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x7, 0xB7, 0x33, 0x33, 0x10, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x13, 0x35, 
	0x7B, 0x92, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x27, 0x79, 
	0x55, 0x97, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x5, 0xB7, 0x11, 0x59, 0x30, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x7B, 0x93, 0x33, 0x33, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 
	0x35, 0x37, 0xBB, 0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x9B, 
	0xB5, 0x37, 0x73, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x1, 0xBD, 0x73, 0x35, 0x95, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x59, 0xB9, 0x53, 0x33, 0x31, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x3, 0x11, 0x35, 0x59, 0xB9, 0x20, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x7B, 
	0xDB, 0x75, 0x55, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x5D, 0xB9, 0x57, 0x99, 
	0x95, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x33, 0x33, 
	0x33, 0x13, 0x55, 0x99, 0xBB, 0x95, 0x33, 0x33, 0x30, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x11, 0x13, 0x35, 0x79, 0x99, 0x99, 0x73, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x35, 0x79, 
	0xBD, 0xB5, 0x53, 0x53, 0x10, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xBB, 0x75, 
	0x79, 0x99, 0x99, 0x73, 0x33, 0x33, 0x33, 0x33, 0x11, 
	0x11, 0x11, 0x13, 0x35, 0x55, 0x55, 0x33, 0x55, 0x53, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x11, 0x11, 0x33, 0x35, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 
	0x9B, 0x97, 0x53, 0x35, 0x31, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5B, 
	0xB7, 0x75, 0x55, 0x55, 0x33, 0x31, 0x11, 0x11, 0x11, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x35, 0x55, 0x55, 
	0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x1, 0x11, 0x11, 0x33, 0x33, 
	0x35, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x53, 0x33, 0x31, 0x10, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x15, 0x9B, 0x77, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x31, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 0x11, 0x11, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x1, 0x35, 0x99, 0x75, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x31, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 
	0x11, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x11, 
	0x11, 0x11, 0x31, 0x33, 0x31, 0x11, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x1, 0x13, 0x53, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x11, 
	0x11, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x11, 0x11, 0x13, 0x31, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x11, 0x11, 0x11, 
	0x13, 0x33, 0x33, 0x33, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
};

Gfx chainpole_Gold_ci8_aligner[] = {gsSPEndDisplayList()};
u8 chainpole_Gold_ci8[] = {
	0x0, 0x1, 0x2, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
	0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
	0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
	0x3, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x3, 0x3, 
	0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
	0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x4, 0x4, 
	0x4, 0x4, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
	0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
	0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x2, 0x3, 0x4, 
	0x4, 0x4, 0x5, 0x5, 0x5, 0x4, 0x5, 0x4, 0x5, 
	0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x2, 0x2, 0x3, 
	0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 
	0x3, 0x3, 0x4, 0x4, 0x4, 0x5, 0x6, 0x7, 0x7, 
	0x8, 0x6, 0x6, 0x7, 0x7, 0x9, 0x9, 0x9, 0x7, 
	0x7, 0x6, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 
	0x2, 0x2, 0x2, 0x2, 0x3, 0x4, 0x4, 0x4, 0x6, 
	0xA, 0x8, 0xB, 0xB, 0xB, 0xC, 0xD, 0xD, 0xD, 
	0xE, 0xF, 0xE, 0xF, 0xD, 0xD, 0xB, 0x1, 0x1, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x4, 0x4, 
	0x4, 0x4, 0x10, 0xA, 0x8, 0xB, 0x11, 0xD, 0xF, 
	0xF, 0xE, 0x12, 0x13, 0x14, 0x14, 0x14, 0x14, 0x12, 
	0x12, 0xE, 0xF, 0x2, 0x1, 0x1, 0x1, 0x15, 0x2, 
	0x16, 0x4, 0x4, 0x17, 0xA, 0xA, 0x8, 0x18, 0xB, 
	0x11, 0xF, 0xE, 0x12, 0x12, 0x13, 0x14, 0x19, 0x1A, 
	0x1A, 0x19, 0x19, 0x19, 0x14, 0x13, 0x12, 0x12, 0x3, 
	0x3, 0x4, 0x4, 0x5, 0x1B, 0xA, 0xA, 0xA, 0x8, 
	0x8, 0xB, 0xB, 0x11, 0xF, 0xE, 0x12, 0x13, 0x14, 
	0x14, 0x1A, 0x1A, 0x1C, 0x1C, 0x1C, 0x1A, 0x1A, 0x19, 
	0x19, 0x14, 0x14, 0x14, 0x17, 0x17, 0xA, 0xA, 0x8, 
	0x8, 0xB, 0xB, 0xB, 0xB, 0xB, 0xD, 0xF, 0xF, 
	0x12, 0x13, 0x14, 0x19, 0x19, 0x19, 0x1A, 0x1A, 0x1A, 
	0x1A, 0x1A, 0x19, 0x19, 0x1A, 0x19, 0x14, 0x14, 0x14, 
	0x1B, 0xA, 0x8, 0x18, 0xB, 0xC, 0xD, 0xD, 0xD, 
	0xF, 0xE, 0xE, 0x12, 0x13, 0x13, 0x14, 0x14, 0x1A, 
	0x19, 0x19, 0x14, 0x14, 0x14, 0x14, 0x14, 0x12, 0x14, 
	0x14, 0x14, 0x14, 0x14, 0x14, 0x1B, 0xA, 0x18, 0xB, 
	0x11, 0xD, 0xF, 0xE, 0xE, 0x12, 0x12, 0x12, 0x13, 
	0x13, 0x13, 0x13, 0x14, 0x14, 0x14, 0x13, 0x12, 0xE, 
	0xF, 0xD, 0xD, 0xD, 0xF, 0x12, 0x12, 0x12, 0x13, 
	0x14, 0x17, 0xA, 0x8, 0x18, 0xB, 0xD, 0xF, 0xE, 
	0x12, 0x12, 0x12, 0x12, 0x13, 0x12, 0x12, 0x12, 0x12, 
	0x12, 0xF, 0xF, 0xD, 0x1D, 0x1E, 0x1F, 0x20, 0x1F, 
	0x21, 0xD, 0xF, 0xF, 0xF, 0xF, 0x22, 0x17, 0x1B, 
	0xA, 0x8, 0xB, 0xD, 0xD, 0xF, 0xE, 0x12, 0x12, 
	0xE, 0xF, 0xF, 0xF, 0x11, 0x11, 0x1D, 0x23, 0x24, 
	0x25, 0x26, 0x27, 0x28, 0x27, 0x29, 0x20, 0x21, 0xB, 
	0xB, 0x11, 0x22, 0x22, 0x17, 0x17, 0x1B, 0x6, 0x7, 
	0x1D, 0xB, 0xD, 0xD, 0xD, 0xD, 0xB, 0x1D, 0x2A, 
	0x2B, 0x2C, 0x2D, 0x26, 0x2E, 0x2F, 0x30, 0x31, 0x32, 
	0x32, 0x33, 0x27, 0x34, 0x2C, 0x2B, 0x23, 0x22, 0x22, 
	0x22, 0x17, 0x17, 0x4, 0x35, 0x36, 0x36, 0x23, 0x23, 
	0x23, 0x23, 0x37, 0x2C, 0x38, 0x34, 0x2E, 0x39, 0x3A, 
	0x30, 0x33, 0x32, 0x3B, 0x3C, 0x3D, 0x3B, 0x31, 0x2F, 
	0x3E, 0x26, 0x26, 0x17, 0x17, 0x17, 0x17, 0x17, 0x4, 
	0x16, 0x16, 0x15, 0x3F, 0x3F, 0x40, 0x41, 0x42, 0x43, 
	0x44, 0x45, 0x39, 0x3A, 0x30, 0x33, 0x32, 0x46, 0x3B, 
	0x3C, 0x3D, 0x3B, 0x32, 0x47, 0x2F, 0x39, 0x39, 0xA, 
	0xA, 0xA, 0xA, 0xA, 0x1B, 0x5, 0x16, 0x16, 0x15, 
	0x0, 0x0, 0x42, 0x42, 0x48, 0x43, 0x44, 0x45, 0x49, 
	0x2F, 0x47, 0x30, 0x33, 0x31, 0x32, 0x31, 0x31, 0x47, 
	0x2F, 0x39, 0x49, 0x49, 0xB, 0xB, 0xB, 0xB, 0x18, 
	0x8, 0x8, 0xA, 0x6, 0x35, 0x16, 0x16, 0x1, 0x1, 
	0x1, 0x0, 0x42, 0x48, 0x43, 0x44, 0x45, 0x49, 0x39, 
	0x39, 0x39, 0x49, 0x45, 0x4A, 0x43, 0x43, 0x43, 0x44, 
	0xD, 0xF, 0xE, 0xE, 0xF, 0xD, 0x11, 0xB, 0xB, 
	0x9, 0x7, 0x36, 0x36, 0x35, 0x16, 0x2, 0x1, 0x1, 
	0x0, 0x42, 0x48, 0x48, 0x43, 0x43, 0x48, 0x42, 0x0, 
	0x1, 0x2, 0x2, 0x2, 0x1, 0x12, 0x13, 0x14, 0x14, 
	0x13, 0x12, 0xE, 0xE, 0xF, 0xD, 0x1D, 0x21, 0x23, 
	0x37, 0x37, 0x15, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 
	0x0, 0x0, 0x1, 0x2, 0x3, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x14, 0x14, 0x19, 0x19, 0x14, 0x14, 0x12, 0xE, 
	0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x24, 0x20, 0x25, 0x48, 
	0x42, 0x42, 0x0, 0x0, 0x0, 0x0, 0x1, 0x2, 0x3, 
	0x22, 0x22, 0x17, 0x17, 0x17, 0x17, 0x19, 0x1A, 0x1A, 
	0x1A, 0x19, 0x13, 0x50, 0x4C, 0x51, 0x52, 0x53, 0x53, 
	0x54, 0x55, 0x29, 0x26, 0x26, 0x4A, 0x44, 0x43, 0x48, 
	0x42, 0x0, 0x1, 0x2, 0x22, 0x22, 0x17, 0x17, 0x10, 
	0x10, 0xA, 0x19, 0x1A, 0x1A, 0x19, 0x13, 0x50, 0x4C, 
	0x56, 0x53, 0x57, 0x29, 0x58, 0x59, 0x5A, 0x39, 0x39, 
	0x39, 0x39, 0x39, 0x45, 0x4A, 0x43, 0x48, 0x42, 0x1, 
	0x3, 0x22, 0x17, 0x10, 0xA, 0xA, 0x8, 0x14, 0x14, 
	0x14, 0x13, 0xE, 0x4C, 0x4F, 0x5B, 0x29, 0x58, 0x5A, 
	0x28, 0x3A, 0x47, 0x47, 0x47, 0x30, 0x30, 0x47, 0x47, 
	0x2F, 0x49, 0x4A, 0x43, 0x0, 0x3, 0x17, 0x17, 0xA, 
	0x8, 0x8, 0x8, 0x12, 0x12, 0xE, 0xD, 0x1D, 0x4F, 
	0x25, 0x29, 0x3E, 0x28, 0x3A, 0x47, 0x30, 0x33, 0x33, 
	0x31, 0x31, 0x32, 0x32, 0x32, 0x31, 0x30, 0x2F, 0x45, 
	0x48, 0x2, 0x22, 0x17, 0xA, 0x8, 0x8, 0x5C, 0xF, 
	0xC, 0xB, 0x9, 0x37, 0x5D, 0x5E, 0x3E, 0x2F, 0x3A, 
	0x47, 0x33, 0x33, 0x31, 0x32, 0x46, 0x46, 0x3C, 0x3D, 
	0x3D, 0x3D, 0x3B, 0x31, 0x2F, 0x44, 0x1, 0x17, 0x17, 
	0xA, 0x8, 0x8, 0x8, 0x18, 0xA, 0xA, 0x3F, 0x38, 
	0x4A, 0x49, 0x2F, 0x3A, 0x47, 0x30, 0x33, 0x31, 0x32, 
	0x32, 0x46, 0x3B, 0x3C, 0x5F, 0x60, 0x61, 0x5F, 0x3B, 
	0x47, 0x4A, 0x0, 0x4, 0xA, 0xA, 0x8, 0x8, 0x8, 
	0x1B, 0x2, 0x0, 0x43, 0x4A, 0x49, 0x39, 0x2F, 0x3A, 
	0x47, 0x30, 0x30, 0x33, 0x31, 0x31, 0x32, 0x46, 0x3C, 
	0x5F, 0x61, 0x62, 0x61, 0x3C, 0x30, 0x4A, 0x40, 0x4, 
	0x10, 0xA, 0x8, 0x8, 0x8, 0x1, 0x42, 0x43, 0x4A, 
	0x45, 0x49, 0x39, 0x39, 0x2F, 0x2F, 0x3A, 0x47, 0x47, 
	0x30, 0x33, 0x33, 0x31, 0x46, 0x3C, 0x5F, 0x60, 0x60, 
	0x3C, 0x47, 0x26, 0x40, 0x4, 0x10, 0xA, 0xA, 0xA, 
	0xA, 0x48, 0x43, 0x43, 0x44, 0x44, 0x4A, 0x4A, 0x4A, 
	0x4A, 0x45, 0x49, 0x49, 0x49, 0x39, 0x2F, 0x2F, 0x3A, 
	0x30, 0x33, 0x32, 0x3B, 0x3C, 0x46, 0x47, 0x26, 0x41, 
	0x16, 0x5, 0xA, 0xA, 0x1B, 0x4, 0x48, 0x0, 0x0, 
	0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x48, 0x48, 0x43, 
	0x43, 0x43, 0x43, 0x43, 0x44, 0x44, 0x45, 0x49, 0x3A, 
	0x33, 0x31, 0x3A, 0x4A, 0x38, 0x15, 0x16, 0x16, 0x16, 
	0x15, 0x42, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
	0x1, 0x2, 0x1, 0x0, 0x44, 0x39, 0x47, 0x3A, 0x49, 
	0x2D, 0x40, 0x40, 0x40, 0x42, 0x44, 0x39, 
};

Gfx chainpole_Gold_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 chainpole_Gold_ci8_pal_rgba16[] = {
	0xF7, 0x89, 0xF7, 0x87, 0xF7, 0x85, 0xF7, 0x83, 0xF7, 
	0x43, 0xEF, 0x43, 0xEF, 0x3, 0xEE, 0xC3, 0xEE, 0xC1, 
	0xE6, 0xC3, 0xEF, 0x1, 0xE6, 0x81, 0xDE, 0x81, 0xDE, 
	0x41, 0xD6, 0x1, 0xDE, 0x1, 0xF7, 0x1, 0xE6, 0x41, 
	0xD5, 0xC1, 0xCD, 0xC1, 0xCD, 0x81, 0xF7, 0x47, 0xF7, 
	0x45, 0xF7, 0x41, 0xE6, 0xC1, 0xC5, 0x81, 0xC5, 0x41, 
	0xEF, 0x41, 0xBD, 0x41, 0xE6, 0x83, 0xE6, 0xC7, 0xEE, 
	0xC9, 0xEF, 0xB, 0xE6, 0x85, 0xF7, 0x81, 0xEE, 0xC5, 
	0xEE, 0xCB, 0xEF, 0xD, 0xF7, 0x53, 0xF7, 0x59, 0xF7, 
	0x5B, 0xEF, 0x13, 0xE6, 0xC5, 0xEE, 0xC7, 0xEF, 0x9, 
	0xF7, 0x4F, 0xF7, 0x55, 0xF7, 0x9B, 0xF7, 0xA1, 0xF7, 
	0xA5, 0xF7, 0xA7, 0xF7, 0xA3, 0xF7, 0x51, 0xEF, 0x45, 
	0xEF, 0x5, 0xEF, 0x7, 0xF7, 0x4D, 0xF7, 0x99, 0xF7, 
	0x9D, 0xF7, 0xAB, 0xF7, 0xAD, 0xF7, 0xAF, 0xF7, 0x57, 
	0xEF, 0x47, 0xF7, 0x49, 0xF7, 0x4B, 0xF7, 0x8B, 0xF7, 
	0x8F, 0xF7, 0x91, 0xF7, 0x95, 0xF7, 0xA9, 0xF7, 0x9F, 
	0xF7, 0x8D, 0xF7, 0x97, 0xF7, 0x93, 0xDE, 0x3, 0xDE, 
	0x45, 0xDE, 0x87, 0xE6, 0x87, 0xE6, 0xC9, 0xD6, 0x3, 
	0xDE, 0x47, 0xE6, 0x8B, 0xE6, 0xCD, 0xEF, 0xF, 0xEF, 
	0x11, 0xE6, 0x89, 0xE6, 0xD1, 0xEF, 0x55, 0xEF, 0x57, 
	0xEF, 0x59, 0xEE, 0xCD, 0xEE, 0x81, 0xEF, 0x4D, 0xEF, 
	0x53, 0xF7, 0xB1, 0xF7, 0xB3, 0xF7, 0xB5, 0xF7, 0xB7, 
	
};

Vtx chainpole_Chain_036_mesh_vtx_cull[8] = {
	{{{-34, 0, -39},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-34, 0, 25},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-34, 679, 25},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-34, 679, -39},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{34, 0, -39},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{34, 0, 25},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{34, 679, 25},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{34, 679, -39},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
};

Vtx chainpole_Chain_036_mesh_vtx_0[8] = {
	{{{-25, 602, 0},0, {-7218, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-25, 0, 0},0, {8232, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{25, 0, 0},0, {8232, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{25, 602, 0},0, {-7218, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 602, 25},0, {-7218, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 0, 25},0, {8232, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 0, -25},0, {8232, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 602, -25},0, {-7218, -16},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx chainpole_Chain_036_mesh_tri_0[] = {
	gsSPVertex(chainpole_Chain_036_mesh_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};Vtx chainpole_Chain_036_mesh_vtx_1[14] = {
	{{{0, 589, 0},0, {496, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 611, -39},0, {667, 667},{0x0, 0xCC, 0x8C, 0xFF}}},
	{{{34, 611, 20},0, {325, 667},{0x65, 0xCC, 0x3A, 0xFF}}},
	{{{34, 656, 20},0, {325, 325},{0x65, 0x34, 0x3A, 0xFF}}},
	{{{0, 656, -39},0, {667, 325},{0x0, 0x34, 0x8C, 0xFF}}},
	{{{-34, 611, 20},0, {1008, 667},{0x9B, 0xCC, 0x3A, 0xFF}}},
	{{{0, 589, 0},0, {837, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-34, 656, 20},0, {1008, 325},{0x9B, 0x34, 0x3A, 0xFF}}},
	{{{0, 679, 0},0, {837, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 679, 0},0, {496, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 589, 0},0, {155, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-34, 611, 20},0, {-16, 667},{0x9B, 0xCC, 0x3A, 0xFF}}},
	{{{-34, 656, 20},0, {-16, 325},{0x9B, 0x34, 0x3A, 0xFF}}},
	{{{0, 679, 0},0, {155, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx chainpole_Chain_036_mesh_tri_1[] = {
	gsSPVertex(chainpole_Chain_036_mesh_vtx_1 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 5, 4, 1, 0),
	gsSP2Triangles(6, 5, 1, 0, 5, 7, 4, 0),
	gsSP2Triangles(7, 8, 4, 0, 4, 9, 3, 0),
	gsSP2Triangles(10, 2, 11, 0, 2, 12, 11, 0),
	gsSP2Triangles(2, 3, 12, 0, 3, 13, 12, 0),
	gsSPEndDisplayList(),
};


Gfx mat_chainpole_chain[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b, 64, chainpole_pogchain_ia4),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 254, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_4b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPSetTileSize(0, 0, 0, 508, 124),
	gsSPSetLights1(chainpole_chain_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_chainpole_chain[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};


Gfx mat_chainpole_Gold[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(1983, 1983, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, chainpole_Gold_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 98),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, chainpole_Gold_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_chainpole_Gold[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx chainpole_Chain_036_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(chainpole_Chain_036_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_chainpole_chain),
	gsSPDisplayList(chainpole_Chain_036_mesh_tri_0),
	gsSPDisplayList(mat_revert_chainpole_chain),
	gsSPDisplayList(mat_chainpole_Gold),
	gsSPDisplayList(chainpole_Chain_036_mesh_tri_1),
	gsSPDisplayList(mat_revert_chainpole_Gold),
	gsSPEndDisplayList(),
};



Gfx chainpole_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
