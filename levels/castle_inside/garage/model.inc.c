Lights1 garage_garage_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 garage__10_star_door_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx garage_Silo_i8_aligner[] = {gsSPEndDisplayList()};
u8 garage_Silo_i8[] = {
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa0, 0xa8, 0xa8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0xa8, 0xa8, 0xa8, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0xa0, 0x98, 0x98, 0xa0, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0xa0, 0x98, 0x98, 0xa0, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x90, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x90, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x90, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x90, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0xa0, 0x90, 0x90, 0x90, 0x90, 
	0xa0, 0x98, 0x98, 0xa0, 0x98, 0x98, 0xa0, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0xa0, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0xa0, 0x98, 0x98, 0xa0, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0x98, 0x98, 0xa0, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0xa0, 0x98, 0x98, 0xa0, 0x98, 
	0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x68, 0x60, 0x68, 0x68, 0x60, 0x60, 0x60, 0x60, 
	0x60, 0x68, 0x68, 0x60, 0x60, 0x68, 0x68, 0x68, 
	0x68, 0x60, 0x68, 0x60, 0x68, 0x68, 0x68, 0x68, 
	0x60, 0x60, 0x60, 0x60, 0x68, 0x68, 0x68, 0x60, 
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
	0x40, 0x40, 0x40, 0x40, 0x48, 0x40, 0x48, 0x48, 
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa0, 0xa0, 0xa0, 0xa0, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0xa0, 0xa0, 0xa0, 0xa0, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x48, 0x48, 0x48, 0x48, 0x40, 0x40, 0x40, 0x40, 
	0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
	0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x90, 0x98, 0x90, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x90, 0x98, 0x90, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x90, 0x98, 0x90, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x90, 0x98, 0x90, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
	0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 
	0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 
	0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0x98, 0x98, 0xa8, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x98, 0x98, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x98, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x98, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x90, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x98, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x98, 0x88, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x90, 0x90, 0x98, 0x90, 
	0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x98, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x60, 0x60, 0x68, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x60, 0x60, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 
	0x48, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
	0x48, 0x48, 0x48, 0x40, 0x40, 0x40, 0x40, 0x40, 
	0x48, 0x48, 0x40, 0x40, 0x48, 0x40, 0x48, 0x40, 
	0x40, 0x48, 0x40, 0x48, 0x48, 0x48, 0x48, 0x48, 
	0xb8, 0xa8, 0xa8, 0xb8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xb8, 0xa8, 0xa8, 0xb8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xb8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xa0, 0x98, 0x98, 0xa0, 0x98, 0x98, 0x98, 0x98, 
	0xa0, 0xa0, 0xa0, 0xa0, 0x98, 0x98, 0xa8, 0x98, 
	0xa0, 0x98, 0xa0, 0xa0, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0xa8, 0x98, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x88, 0x90, 0x88, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x88, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x88, 0x90, 
	0x88, 0x90, 0x90, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x88, 0x90, 0x88, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x88, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0x88, 0x90, 
	0x88, 0x90, 0x90, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x98, 0x90, 0x90, 0x90, 0x88, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x88, 0x88, 0x98, 0x88, 
	0x98, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x98, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x88, 0x88, 0x98, 0x88, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x88, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x88, 0x88, 0x98, 0x88, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x88, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0x88, 0x88, 0x98, 0x88, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x88, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 0x88, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x88, 0x90, 
	0x88, 0x90, 0x90, 0x90, 0x88, 0x90, 0x90, 0x90, 
	0x58, 0x50, 0x50, 0x50, 0x48, 0x48, 0x48, 0x50, 
	0x48, 0x58, 0x50, 0x58, 0x50, 0x48, 0x58, 0x50, 
	0x58, 0x48, 0x50, 0x50, 0x50, 0x50, 0x48, 0x50, 
	0x50, 0x48, 0x50, 0x50, 0x48, 0x50, 0x48, 0x50, 
	
};

Gfx garage__10_star_door_ci8_aligner[] = {gsSPEndDisplayList()};
u8 garage__10_star_door_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 
	0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 
	0x08, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x07, 0x0b, 
	0x0c, 0x0d, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x0f, 
	0x10, 0x11, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x13, 0x14, 
	0x14, 0x15, 0x16, 0x12, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0x0a, 0x17, 0x14, 0x14, 
	0x14, 0x14, 0x18, 0x19, 0x19, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1a, 0x07, 0x1b, 0x1c, 0x14, 0x14, 
	0x14, 0x14, 0x1d, 0x1e, 0x1f, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x21, 0x01, 0x22, 0x23, 0x14, 0x14, 0x14, 
	0x14, 0x14, 0x14, 0x24, 0x25, 0x26, 0x27, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x21, 
	0x21, 0x21, 0x21, 0x28, 0x14, 0x14, 0x14, 0x14, 
	0x14, 0x14, 0x14, 0x14, 0x29, 0x2a, 0x2b, 0x2c, 
	0x2d, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x21, 0x21, 0x21, 0x21, 0x21, 
	0x21, 0x04, 0x2d, 0x2f, 0x2f, 0x14, 0x14, 0x14, 
	0x14, 0x2f, 0x2f, 0x2f, 0x2f, 0x30, 0x31, 0x2e, 
	0x2d, 0x2d, 0x2e, 0x2e, 0x2e, 0x00, 0x00, 0x00, 
	0x00, 0x21, 0x21, 0x21, 0x21, 0x21, 0x04, 0x32, 
	0x2a, 0x14, 0x2f, 0x33, 0x33, 0x32, 0x14, 0x14, 
	0x2f, 0x33, 0x33, 0x33, 0x33, 0x32, 0x14, 0x34, 
	0x35, 0x0f, 0x2d, 0x2d, 0x2e, 0x2c, 0x36, 0x00, 
	0x0f, 0x37, 0x22, 0x38, 0x17, 0x39, 0x14, 0x14, 
	0x14, 0x2f, 0x33, 0x3a, 0x33, 0x32, 0x14, 0x2f, 
	0x33, 0x3a, 0x3a, 0x3a, 0x3a, 0x33, 0x32, 0x14, 
	0x14, 0x14, 0x1c, 0x10, 0x3b, 0x3c, 0x3d, 0x3e, 
	0x3f, 0x40, 0x41, 0x42, 0x14, 0x14, 0x14, 0x14, 
	0x2f, 0x33, 0x3a, 0x3a, 0x3a, 0x32, 0x14, 0x2f, 
	0x33, 0x3a, 0x14, 0x14, 0x3a, 0x3a, 0x32, 0x14, 
	0x14, 0x14, 0x14, 0x14, 0x43, 0x44, 0x45, 0x45, 
	0x00, 0x3f, 0x46, 0x47, 0x48, 0x14, 0x14, 0x14, 
	0x2f, 0x33, 0x3a, 0x3a, 0x3a, 0x32, 0x14, 0x2f, 
	0x33, 0x3a, 0x14, 0x14, 0x3a, 0x3a, 0x32, 0x14, 
	0x14, 0x14, 0x14, 0x49, 0x4a, 0x45, 0x45, 0x00, 
	0x00, 0x00, 0x4b, 0x4b, 0x47, 0x4c, 0x14, 0x14, 
	0x14, 0x32, 0x32, 0x33, 0x3a, 0x32, 0x14, 0x2f, 
	0x33, 0x3a, 0x14, 0x14, 0x3a, 0x3a, 0x32, 0x14, 
	0x14, 0x14, 0x14, 0x4d, 0x4e, 0x4f, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x4b, 0x3f, 0x50, 0x14, 0x14, 
	0x14, 0x14, 0x2f, 0x33, 0x3a, 0x32, 0x14, 0x2f, 
	0x33, 0x3a, 0x14, 0x14, 0x3a, 0x3a, 0x32, 0x14, 
	0x14, 0x1d, 0x51, 0x52, 0x53, 0x4e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x4b, 0x3f, 0x54, 0x55, 0x56, 
	0x4c, 0x14, 0x2f, 0x33, 0x3a, 0x32, 0x14, 0x2f, 
	0x33, 0x3a, 0x14, 0x14, 0x3a, 0x3a, 0x32, 0x56, 
	0x57, 0x58, 0x59, 0x52, 0x52, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x5a, 0x5a, 
	0x5b, 0x55, 0x2f, 0x33, 0x3a, 0x32, 0x14, 0x2f, 
	0x33, 0x3a, 0x14, 0x4c, 0x3a, 0x3a, 0x2f, 0x5a, 
	0x5c, 0x5d, 0x52, 0x52, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x5f, 0x5f, 
	0x5c, 0x5c, 0x2f, 0x33, 0x3a, 0x60, 0x57, 0x2f, 
	0x33, 0x3a, 0x5b, 0x5f, 0x3a, 0x3a, 0x2f, 0x46, 
	0x61, 0x52, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x63, 0x64, 
	0x5a, 0x65, 0x2f, 0x33, 0x3a, 0x5c, 0x5c, 0x2f, 
	0x33, 0x3a, 0x5c, 0x46, 0x3a, 0x3a, 0x2f, 0x5a, 
	0x66, 0x52, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x35, 
	0x5f, 0x33, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x2f, 
	0x33, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x2f, 0x5f, 
	0x59, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x67, 
	0x5b, 0x33, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x2f, 
	0x5f, 0x3a, 0x3a, 0x3a, 0x3a, 0x2f, 0x5b, 0x68, 
	0x66, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x6b, 
	0x60, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x5f, 
	0x5b, 0x2f, 0x2f, 0x2f, 0x2f, 0x60, 0x60, 0x57, 
	0x66, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x6a, 
	0x6d, 0x6e, 0x57, 0x57, 0x60, 0x60, 0x60, 0x60, 
	0x60, 0x60, 0x60, 0x57, 0x57, 0x6e, 0x6d, 0x6d, 
	0x66, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x6c, 
	0x6f, 0x6f, 0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 
	0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 0x6f, 0x6f, 0x2f, 
	0x70, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x27, 
	0x56, 0x2f, 0x2f, 0x2f, 0x6f, 0x6f, 0x55, 0x71, 
	0x71, 0x72, 0x6f, 0x2f, 0x2f, 0x2f, 0x56, 0x56, 
	0x66, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x74, 
	0x1d, 0x4c, 0x56, 0x75, 0x76, 0x77, 0x69, 0x53, 
	0x53, 0x69, 0x70, 0x71, 0x75, 0x4c, 0x1d, 0x14, 
	0x59, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x78, 
	0x79, 0x7a, 0x7b, 0x53, 0x4a, 0x53, 0x53, 0x53, 
	0x4a, 0x53, 0x53, 0x52, 0x52, 0x7c, 0x7d, 0x7e, 
	0x69, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 
	0x44, 0x81, 0x44, 0x44, 0x4a, 0x53, 0x53, 0x00, 
	0x00, 0x53, 0x53, 0x52, 0x52, 0x52, 0x52, 0x52, 
	0x52, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x83, 
	0x4e, 0x81, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x53, 0x52, 0x52, 0x52, 
	0x52, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x4e, 
	0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 
	0x52, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx garage__10_star_door_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 garage__10_star_door_ci8_pal_rgba16[] = {
	0x71, 0x00, 0xf7, 0xb9, 0xf6, 0x57, 0xf7, 0xaf, 
	0xf7, 0xb7, 0xf6, 0x17, 0xec, 0x49, 0xf7, 0xad, 
	0xf5, 0xd5, 0xec, 0x09, 0xf7, 0xab, 0xf7, 0xb5, 
	0xf5, 0x93, 0xe4, 0x09, 0xdc, 0x07, 0xf7, 0x17, 
	0xf6, 0xd1, 0xe4, 0x89, 0xdb, 0xc7, 0xf7, 0x57, 
	0xf6, 0xc7, 0xee, 0x07, 0xd3, 0xc7, 0xf7, 0x63, 
	0xe4, 0x87, 0xd3, 0x87, 0xf7, 0xb3, 0xf7, 0xa9, 
	0xf6, 0xc9, 0xf6, 0x87, 0xdc, 0x47, 0xec, 0x87, 
	0xf5, 0x8b, 0xf7, 0xbd, 0xf7, 0xb1, 0xf7, 0x15, 
	0xed, 0x87, 0xec, 0xc9, 0xf6, 0x4d, 0xf6, 0x93, 
	0xf7, 0x61, 0xf6, 0x89, 0xf7, 0x11, 0xf7, 0x55, 
	0xf6, 0xd9, 0xf7, 0x1b, 0xf7, 0x5b, 0xf6, 0x05, 
	0xf7, 0x09, 0xf7, 0x95, 0xf7, 0x65, 0xb9, 0x05, 
	0xf7, 0x0b, 0xf6, 0xcf, 0xf6, 0x97, 0xf7, 0xa3, 
	0xf7, 0xbb, 0xf7, 0x0d, 0xd9, 0x05, 0xf6, 0x13, 
	0xec, 0xcf, 0xc3, 0xc9, 0x92, 0x83, 0xd4, 0x03, 
	0xec, 0xc7, 0xf5, 0xcb, 0xf6, 0x8d, 0xc4, 0x85, 
	0x71, 0xc1, 0x61, 0x81, 0xd4, 0x05, 0xdc, 0x85, 
	0xee, 0x45, 0xee, 0x85, 0x72, 0x01, 0xcc, 0x03, 
	0xf6, 0x85, 0x9b, 0xc3, 0x69, 0x81, 0x61, 0x41, 
	0xe5, 0x85, 0xcd, 0x05, 0x7a, 0x41, 0x7a, 0x01, 
	0xd4, 0x43, 0xed, 0x85, 0xf6, 0x45, 0xed, 0x45, 
	0xd4, 0x85, 0x8a, 0x81, 0xdc, 0x45, 0xe4, 0xc5, 
	0xd3, 0xc5, 0x92, 0x81, 0xe4, 0x45, 0xe4, 0x85, 
	0xed, 0x05, 0xc3, 0xc3, 0xf4, 0xc7, 0xf5, 0x49, 
	0xf5, 0x89, 0xdc, 0x05, 0x92, 0xc1, 0xf7, 0x51, 
	0xec, 0xc5, 0x82, 0x41, 0xf7, 0x13, 0xf7, 0x53, 
	0xf6, 0xd3, 0xf5, 0x85, 0xf5, 0x45, 0xf5, 0xc5, 
	0x93, 0x01, 0xc4, 0x83, 0xe5, 0x45, 0xf6, 0x53, 
	0xf6, 0x51, 0xe5, 0xc5, 0xbc, 0x83, 0x9b, 0x41, 
	0xf5, 0x8f, 0xcc, 0xc5, 0xbc, 0x85, 0x93, 0x43, 
	0x93, 0x41, 0xc4, 0xc5, 0xc5, 0x07, 0xf5, 0x91, 
	0xcb, 0xc7, 0x69, 0xc1, 0xe4, 0x8b, 0x82, 0x01, 
	
};

Vtx garage_Cube_011_mesh_layer_1_vtx_0[4] = {
	{{{265, -232, 2},0, {-1152, 5651},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-265, -232, 2},0, {2152, 5651},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-265, 232, 2},0, {2152, -146},{0x0, 0x0, 0x81, 0xFF}}},
	{{{265, 232, 2},0, {-1152, -146},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx garage_Cube_011_mesh_layer_1_tri_0[] = {
	gsSPVertex(garage_Cube_011_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx garage_Cube_011_mesh_layer_4_vtx_0[4] = {
	{{{-72, -72, -2},0, {1008, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-72, 72, -2},0, {1008, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{72, 72, -2},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{72, -72, -2},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx garage_Cube_011_mesh_layer_4_tri_0[] = {
	gsSPVertex(garage_Cube_011_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_garage_garage[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b, 32, garage_Silo_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(garage_garage_lights),
	gsSPEndDisplayList(),
};

Gfx mat_garage__10_star_door[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, garage__10_star_door_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 131),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, garage__10_star_door_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(garage__10_star_door_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_garage__10_star_door[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx garage_Cube_011_mesh_layer_1[] = {
	gsSPDisplayList(mat_garage_garage),
	gsSPDisplayList(garage_Cube_011_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx garage_Cube_011_mesh_layer_4[] = {
	gsSPDisplayList(mat_garage__10_star_door),
	gsSPDisplayList(garage_Cube_011_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_garage__10_star_door),
	gsSPEndDisplayList(),
};

Gfx garage_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

