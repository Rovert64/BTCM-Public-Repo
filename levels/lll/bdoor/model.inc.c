Lights1 bdoor_Wooden_Door_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 bdoor_Wood_Flooring_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx bdoor_Wooden_Door_i8_aligner[] = {gsSPEndDisplayList()};
u8 bdoor_Wooden_Door_i8[] = {
	0xd6, 0xf1, 0xd6, 0xd6, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xec, 0xf9, 0xec, 0xe4, 0xf9, 
	0xf1, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xff, 0xe4, 0xff, 
	0xe4, 0xf1, 0xd6, 0xd6, 0xe4, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xec, 0xe4, 0xf9, 0xe4, 0xf9, 
	0xf1, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 0xe4, 0xf1, 
	0xf1, 0xf1, 0xd6, 0xca, 0xd7, 0xe3, 0xf0, 0xd7, 
	0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xeb, 0xd7, 0xdf, 
	0xe3, 0xf0, 0xe3, 0xe3, 0xd7, 0xd7, 0xd7, 0xf0, 
	0xe3, 0xd7, 0xd7, 0xe3, 0xe3, 0xff, 0xea, 0xea, 
	0xf1, 0xe4, 0xd6, 0xd7, 0xcb, 0xcb, 0xe3, 0xd6, 
	0xcb, 0xd2, 0xcb, 0xcb, 0xcb, 0xdd, 0xcb, 0xd2, 
	0xd6, 0xe3, 0xd6, 0xd6, 0xcb, 0xcb, 0xcb, 0xe3, 
	0xd6, 0xcb, 0xcb, 0xd6, 0xe3, 0xff, 0xf1, 0xea, 
	0xff, 0xe4, 0xd6, 0xd7, 0xcb, 0xc0, 0xd6, 0xc0, 
	0xc0, 0xca, 0xc0, 0xb4, 0xc0, 0xca, 0xb4, 0xca, 
	0xd6, 0xd6, 0xca, 0xca, 0xc0, 0xc0, 0xc0, 0xd6, 
	0xd6, 0xc0, 0xc0, 0xe3, 0xdd, 0xf8, 0xea, 0xe4, 
	0xff, 0xe4, 0xd6, 0xd7, 0xcb, 0xc0, 0xb5, 0xb5, 
	0xaa, 0xbf, 0xb5, 0xaa, 0xb5, 0xbf, 0xaa, 0xbf, 
	0xca, 0xca, 0xbf, 0xbf, 0xb5, 0xb5, 0xb5, 0xca, 
	0xca, 0xb5, 0xc0, 0xe3, 0xd7, 0xf8, 0xf8, 0xe4, 
	0xff, 0xe4, 0xe4, 0xd7, 0xcb, 0xca, 0xb5, 0xb5, 
	0xb5, 0xbf, 0xb5, 0xaa, 0xb5, 0xbf, 0xaa, 0xb5, 
	0xca, 0xca, 0xbf, 0xbf, 0xb5, 0xb5, 0xbf, 0xca, 
	0xca, 0xb5, 0xc0, 0xd6, 0xd7, 0xea, 0xf8, 0xe4, 
	0xff, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xb5, 
	0xb5, 0xbf, 0xb5, 0xaa, 0xaa, 0xbf, 0xaa, 0xb5, 
	0xca, 0xca, 0xbf, 0xbf, 0xb5, 0xb5, 0xbf, 0xca, 
	0xca, 0xbf, 0xc0, 0xcb, 0xd7, 0xea, 0xf8, 0xe4, 
	0xf1, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xb5, 
	0xb5, 0xb5, 0xb5, 0xaa, 0xaa, 0xbf, 0xaa, 0xbf, 
	0xca, 0xbf, 0xbf, 0xbf, 0xbf, 0xb5, 0xbf, 0xca, 
	0xca, 0xbf, 0xc0, 0xcb, 0xd7, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xb5, 
	0xb5, 0xb5, 0xb5, 0xaa, 0xb5, 0xbf, 0xb5, 0xbf, 
	0xca, 0xbf, 0xbf, 0xbf, 0xbf, 0xb5, 0xbf, 0xca, 
	0xca, 0xbf, 0xc0, 0xcb, 0xd7, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xb5, 
	0xbf, 0xb5, 0xb5, 0xaa, 0xb5, 0xbf, 0xb5, 0xbf, 
	0xca, 0xbf, 0xbf, 0xbf, 0xbf, 0xb5, 0xbf, 0xca, 
	0xca, 0xbf, 0xc0, 0xcb, 0xd7, 0xf1, 0xf1, 0xff, 
	0xf1, 0xe4, 0xe4, 0xe3, 0xcb, 0xc0, 0xb5, 0xb5, 
	0xbf, 0xb5, 0xb5, 0xaa, 0xb5, 0xbf, 0xbf, 0xb5, 
	0xca, 0xca, 0xbf, 0xbf, 0xbf, 0xb5, 0xbf, 0xbf, 
	0xca, 0xbf, 0xc0, 0xcb, 0xd7, 0xf1, 0xf1, 0xff, 
	0xf1, 0xe4, 0xe4, 0xe3, 0xbe, 0xc0, 0xb5, 0xaa, 
	0xbf, 0xb5, 0xaa, 0xaa, 0xb5, 0xb5, 0xb5, 0xb5, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xb5, 0xb5, 0xca, 0xbf, 
	0xca, 0xbf, 0xc0, 0xcb, 0xd7, 0xe4, 0xff, 0xff, 
	0xff, 0xe4, 0xe4, 0xe3, 0xbe, 0xc0, 0xbf, 0xb5, 
	0xbf, 0xaa, 0xaa, 0xaa, 0xb5, 0xb5, 0xb5, 0xb5, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xb5, 0xb5, 0xca, 0xbf, 
	0xca, 0xca, 0xc0, 0xcb, 0xe3, 0xe4, 0xff, 0xff, 
	0xff, 0xe4, 0xf1, 0xe3, 0xbe, 0xc0, 0xbf, 0xb5, 
	0xb5, 0xaa, 0xaa, 0xaa, 0xb5, 0xb5, 0xb5, 0xb5, 
	0xbf, 0xbf, 0xbf, 0xca, 0xb5, 0xb5, 0xca, 0xbf, 
	0xca, 0xbf, 0xc0, 0xcb, 0xf0, 0xe4, 0xff, 0xff, 
	0xff, 0xe4, 0xf1, 0xe3, 0xbe, 0xc0, 0xbf, 0xaa, 
	0xb5, 0xaa, 0xaa, 0xbf, 0xaa, 0xb5, 0xb5, 0xb5, 
	0xbf, 0xbf, 0xbf, 0xca, 0xb5, 0xb5, 0xca, 0xbf, 
	0xca, 0xbf, 0xc0, 0xcb, 0xf0, 0xe4, 0xff, 0xff, 
	0xff, 0xe4, 0xf1, 0xe3, 0xbe, 0xca, 0xbf, 0xaa, 
	0xaa, 0xaa, 0xaa, 0xbf, 0xae, 0xbf, 0xbf, 0xb5, 
	0xb5, 0xbf, 0xb5, 0xca, 0xb5, 0xb5, 0xca, 0xca, 
	0xca, 0xbf, 0xc0, 0xd6, 0xf0, 0xf1, 0xf1, 0xff, 
	0xff, 0xe4, 0xf1, 0xd7, 0xcb, 0xca, 0xbf, 0xaa, 
	0xaa, 0xb5, 0xaa, 0xb5, 0xae, 0xbf, 0xbf, 0xb5, 
	0xb5, 0xbf, 0xb5, 0xca, 0xb5, 0xb5, 0xca, 0xca, 
	0xbf, 0xb5, 0xc0, 0xd6, 0xf0, 0xf1, 0xf1, 0xff, 
	0xff, 0xe4, 0xf1, 0xd7, 0xcb, 0xca, 0xb5, 0xaa, 
	0xaa, 0xb5, 0xaa, 0xb5, 0xae, 0xb5, 0xbf, 0xbf, 
	0xb5, 0xb5, 0xb5, 0xca, 0xb5, 0xb5, 0xca, 0xbf, 
	0xbf, 0xb5, 0xc0, 0xd6, 0xf0, 0xf1, 0xf1, 0xff, 
	0xf1, 0xe4, 0xe4, 0xd7, 0xcb, 0xca, 0xb5, 0xaa, 
	0xaa, 0xaa, 0xaa, 0xb5, 0xae, 0xb5, 0xbf, 0xbf, 
	0xb5, 0xbf, 0xbf, 0xb5, 0xb5, 0xbf, 0xca, 0xbf, 
	0xbf, 0xb5, 0xc0, 0xd6, 0xf0, 0xf1, 0xf1, 0xff, 
	0xe4, 0xe4, 0xe4, 0xd7, 0xcb, 0xd6, 0xb5, 0xaa, 
	0xaa, 0xaa, 0xaa, 0xaa, 0xbf, 0xb5, 0xb5, 0xbf, 
	0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xbf, 0xca, 0xbf, 
	0xbf, 0xb5, 0xc0, 0xd6, 0xf0, 0xf1, 0xec, 0xff, 
	0xf1, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xaa, 
	0xb5, 0xb5, 0xaa, 0xb5, 0xca, 0xb5, 0xb5, 0xbf, 
	0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xca, 0xbf, 
	0xbf, 0xb5, 0xc0, 0xcb, 0xf0, 0xf1, 0xec, 0xff, 
	0xff, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xaa, 
	0xaa, 0xbf, 0xaa, 0xbf, 0xca, 0xb5, 0xb5, 0xb5, 
	0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xbf, 0xb5, 
	0xbf, 0xb5, 0xc0, 0xcb, 0xf0, 0xec, 0xf1, 0xff, 
	0xff, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xb5, 
	0xb5, 0xbf, 0xaa, 0xbf, 0xca, 0xb5, 0xb5, 0xbf, 
	0xb5, 0xb5, 0xb5, 0xbf, 0xb5, 0xb5, 0xbf, 0xb5, 
	0xb5, 0xb5, 0xc0, 0xd6, 0xf0, 0xec, 0xff, 0xff, 
	0xe4, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xb5, 
	0xb5, 0xb5, 0xb5, 0xbf, 0xca, 0xb5, 0xb5, 0xb5, 
	0xb5, 0xb5, 0xb5, 0xbf, 0xb5, 0xb5, 0xbf, 0xb5, 
	0xb5, 0xb5, 0xc0, 0xcb, 0xf0, 0xe4, 0xff, 0xff, 
	0xe4, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xb5, 0xaa, 
	0xbf, 0xb5, 0xb5, 0xb5, 0xbf, 0xb5, 0xb5, 0xb5, 
	0xb5, 0xb5, 0xb5, 0xbf, 0xbf, 0xb5, 0xbf, 0xb5, 
	0xb5, 0xb5, 0xc0, 0xcb, 0xe3, 0xe4, 0xff, 0xff, 
	0xe4, 0xe4, 0xe4, 0xd7, 0xcb, 0xc0, 0xc0, 0xb4, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xd6, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xca, 0xca, 
	0xc0, 0xc0, 0xc0, 0xcb, 0xe3, 0xf1, 0xff, 0xff, 
	0xe4, 0xd6, 0xe4, 0xd7, 0xcb, 0xcb, 0xcb, 0xbe, 
	0xd6, 0xd6, 0xcb, 0xcb, 0xe3, 0xcb, 0xd6, 0xcb, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xd6, 0xe3, 0xe3, 0xd6, 
	0xcb, 0xcb, 0xd6, 0xcb, 0xe3, 0xe4, 0xff, 0xff, 
	0xec, 0xd6, 0xdf, 0xdf, 0xd7, 0xe3, 0xca, 0xca, 
	0xd7, 0xeb, 0xdf, 0xd7, 0xd7, 0xd7, 0xe3, 0xe3, 
	0xd7, 0xca, 0xd7, 0xd7, 0xe3, 0xf0, 0xe3, 0xe3, 
	0xd7, 0xd7, 0xdd, 0xd7, 0xd7, 0xe4, 0xe4, 0xff, 
	0xec, 0xd6, 0xdf, 0xec, 0xd6, 0xf1, 0xe4, 0xd6, 
	0xe4, 0xec, 0xec, 0xe4, 0xe4, 0xe4, 0xf1, 0xff, 
	0xe4, 0xd6, 0xe4, 0xe4, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 
	0xec, 0xdf, 0xd6, 0xec, 0xe4, 0xe4, 0xe4, 0xd6, 
	0xe4, 0xe4, 0xec, 0xec, 0xe4, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 
	0xec, 0xec, 0xd6, 0xec, 0xd6, 0xf1, 0xe4, 0xd6, 
	0xe4, 0xe4, 0xec, 0xec, 0xff, 0xe4, 0xf1, 0xff, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 0xff, 
	
};

Gfx bdoor_house_floor_i8_aligner[] = {gsSPEndDisplayList()};
u8 bdoor_house_floor_i8[] = {
	0xcd, 0xcd, 0xbf, 0xbf, 0xbf, 0xbf, 0xc5, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xb7, 0xbf, 
	0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 0xb7, 0xb7, 
	0xb7, 0xc5, 0xb7, 0xc5, 0xd5, 0xd5, 0xdb, 0xdb, 
	0xdb, 0xfb, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xdb, 0xdb, 0xdb, 0xeb, 0xeb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xd5, 0xd5, 0xd5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xb7, 0xc5, 0xb7, 0xc5, 0xd5, 0xd5, 0xdb, 0xdb, 
	0xfb, 0xfb, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xeb, 0xeb, 0xeb, 0xeb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xd5, 0xd5, 0xd5, 0xd5, 0xcd, 0xcd, 
	0xcf, 0xc5, 0xd5, 0xd5, 0xd5, 0xd5, 0xcd, 0xcd, 
	0xc5, 0xc5, 0xc5, 0xbf, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xb7, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xa9, 0xa9, 
	0xa9, 0xc5, 0xb7, 0xb7, 0xc5, 0xc5, 0xcd, 0xcd, 
	0xcd, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xd5, 0xd5, 0xd5, 0xd5, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xc5, 0xc5, 
	0xcd, 0xc5, 0xbf, 0xbf, 0xbf, 0xc5, 0xc5, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xc5, 0xb7, 0xc5, 0xc5, 0xc5, 0xbf, 0xcd, 
	0xcd, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xeb, 0xeb, 
	0xeb, 0xeb, 0xe3, 0xe3, 0xe3, 0xdb, 0xd5, 0xd5, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xbf, 0xbf, 
	0xbf, 0xaf, 0xb7, 0xb7, 0xb7, 0xc5, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xc7, 0xaf, 0xaf, 0xbf, 0xcd, 0xcd, 0xd5, 
	0xeb, 0xeb, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xe3, 0xeb, 0xeb, 
	0xdb, 0xdb, 0xdb, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xd5, 0xd5, 0xdb, 0xdb, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xc5, 0xc5, 0xc5, 0xb7, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xa9, 
	0xa9, 0xc7, 0xaf, 0xbf, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xd5, 0xeb, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 
	0xe3, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xcd, 0xbf, 0xbf, 0xcd, 0xdb, 0xcd, 
	0xcd, 0xbf, 0xaf, 0xaf, 0xbf, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xbf, 0xc5, 0xc5, 0xc5, 0xc5, 0xbf, 0xaf, 
	0xaf, 0xaf, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xc7, 0xaf, 0xbf, 0xbf, 0xbf, 0xcd, 0xcd, 
	0xd5, 0xeb, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 
	0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xeb, 0xeb, 
	0xeb, 0xeb, 0xf3, 0xf3, 0xf3, 0xf3, 0xeb, 0xeb, 
	0xcd, 0xcd, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0x9f, 
	0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xa9, 0xa9, 
	0xa9, 0xb7, 0xaf, 0xaf, 0xbf, 0xbf, 0xc5, 0xc5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xd5, 0xd5, 0xcd, 0xcd, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xcd, 0xcd, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xb7, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xb7, 0xb7, 0xb7, 
	0xbf, 0x97, 0x9f, 0xaf, 0xaf, 0xc5, 0xc5, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xcd, 0xcd, 0xcd, 0xcd, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xbf, 0xb7, 0xb7, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xbf, 0x97, 0xaf, 0xaf, 0xc5, 0xc5, 0xcd, 0xdd, 
	0xdd, 0xed, 0xed, 0xed, 0xed, 0xe5, 0xe5, 0xdd, 
	0xdd, 0xdd, 0xdd, 0xdd, 0xcd, 0xcd, 0xcd, 0xdd, 
	0xdd, 0xdd, 0xdd, 0xcd, 0xdd, 0xdd, 0xdd, 0xdd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xcd, 0x9f, 0xaf, 0xaf, 0xc5, 0xc5, 0xcd, 0xcd, 
	0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 
	0xdd, 0xdd, 0xdd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xbf, 0xc5, 0xc5, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xcd, 0x9f, 0xaf, 0xaf, 0xc5, 0xc5, 0xc5, 0xcd, 
	0xcd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd5, 0xd5, 0xd5, 
	0xe5, 0xed, 0xed, 0xed, 0xdd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xbf, 0xbf, 0xbf, 0xbf, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xc5, 0xa7, 0xb7, 0xb7, 0xc5, 0xbd, 0xbd, 0xcd, 
	0xcd, 0xdd, 0xdd, 0xdd, 0xcd, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 
	0xdd, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xbd, 0xbd, 
	0xbd, 0xbd, 0xbd, 0xaf, 0xaf, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xb7, 0xb7, 0xb7, 0xaf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xc5, 0xa7, 0xb7, 0xb7, 0xb7, 0xbd, 0xbd, 0xbd, 
	0xcd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xcd, 0xcd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 
	0xdd, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xcd, 0xcd, 0xcd, 0xcd, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xa7, 0xa7, 0xa7, 0xb7, 0xb7, 0xbd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xcd, 0xcd, 0xcd, 0xcd, 0xdd, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xc5, 0xc5, 0xc5, 
	0xaf, 0xb7, 0xa7, 0xa7, 0xa7, 0x9f, 0x9f, 0x9f, 
	0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 
	0xaf, 0xa7, 0xa7, 0xa7, 0xb7, 0xb7, 0xb7, 0xbd, 
	0xbd, 0xc5, 0xc5, 0xc5, 0xc5, 0xbd, 0xbd, 0xbd, 
	0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xaf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xbf, 0xbf, 0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 
	0xf3, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 
	0xe5, 0xe5, 0xdd, 0xdd, 0xdd, 0xd5, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xdd, 0xdd, 0xd5, 0xe5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xe5, 0xaf, 0xc7, 0xe5, 0xe5, 0xe5, 0xe5, 0xf3, 
	0xf3, 0xf3, 0xfb, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xed, 0xed, 0xed, 0xed, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xfb, 0xfb, 0xfb, 0xfb, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xe5, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 
	0xdd, 0xdd, 0xdd, 0xdd, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xed, 0xed, 0xed, 0xed, 0xe5, 0xe5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xe5, 0xe5, 0xe5, 
	0xe5, 0xbf, 0xe5, 0xe5, 0xe5, 0xf3, 0xf3, 0xff, 
	0xff, 0xff, 0xff, 0xfb, 0xf3, 0xf3, 0xfb, 0xfb, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xf3, 
	0xfb, 0xfb, 0xfb, 0xfb, 0xed, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xe5, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 
	0xdd, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xe5, 0xed, 0xed, 0xdd, 0xd5, 0xd5, 0xd5, 0xcd, 
	0xcd, 0xc5, 0xd5, 0xd5, 0xe5, 0xe5, 0xe5, 0xe5, 
	0xe5, 0xc7, 0xe5, 0xe5, 0xe5, 0xe5, 0xf3, 0xff, 
	0xff, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfb, 0xfb, 0xf3, 0xf3, 0xf3, 
	0xfb, 0xfb, 0xfb, 0xed, 0xfb, 0xf3, 0xf3, 0xe5, 
	0xe5, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xe5, 0xf3, 
	0xf3, 0xdd, 0xd5, 0xd5, 0xd5, 0xd5, 0xcd, 0xcd, 
	0xcd, 0xd5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 
	0xe5, 0xc7, 0xe5, 0xe5, 0xe5, 0xf3, 0xf3, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 
	0xfb, 0xfb, 0xed, 0xed, 0xed, 0xfb, 0xfb, 0xfb, 
	0xfb, 0xfb, 0xfb, 0xfb, 0xed, 0xe5, 0xe5, 0xdd, 
	0xdd, 0xd5, 0xd5, 0xe5, 0xfb, 0xed, 0xfb, 0xfb, 
	0xfb, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xe5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xdd, 
	0xdd, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 
	0xe5, 0xd5, 0xdd, 0xdd, 0xeb, 0xeb, 0xf3, 0xff, 
	0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 
	0xfb, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 
	0xfb, 0xed, 0xed, 0xe5, 0xe5, 0xdd, 0xdd, 0xe5, 
	0xe5, 0xfb, 0xfb, 0xfb, 0xfb, 0xed, 0xed, 0xed, 
	0xed, 0xf3, 0xf3, 0xf3, 0xf3, 0xe5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xdd, 0xdd, 0xed, 
	0xed, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 
	0xe5, 0xd5, 0xeb, 0xeb, 0xeb, 0xeb, 0xf3, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 
	0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xfb, 0xfb, 0xfb, 0xfb, 0xed, 0xed, 0xfb, 
	0xfb, 0xf3, 0xf3, 0xdd, 0xdd, 0xd5, 0xd5, 0xe5, 
	0xe5, 0xdd, 0xdd, 0xed, 0xed, 0xed, 0xed, 0xed, 
	0xdd, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xd5, 0xd5, 
	0xe5, 0xd5, 0xeb, 0xeb, 0xeb, 0xeb, 0xf3, 0xff, 
	0xff, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xff, 0xfb, 0xfb, 0xfb, 
	0xdd, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 
	0xdd, 0xd5, 0xd5, 0xd5, 0xdd, 0xdd, 0xdd, 0xdd, 
	0xdd, 0xd5, 0xd5, 0xcd, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xe5, 0xd5, 0xdd, 0xdd, 0xdd, 0xeb, 0xeb, 0xeb, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xdd, 0xdd, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xc5, 0xc5, 0xcd, 0xdb, 
	0xdb, 0xdb, 0xe3, 0xe3, 0xe3, 0xdb, 0xdb, 0xd5, 
	0xd5, 0xd5, 0xe5, 0xd5, 0xcf, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xe5, 0xd5, 0xd5, 0xc5, 0xc5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xc5, 0xc5, 0xcd, 0xcd, 0xc5, 
	0xb7, 0xb7, 0xb7, 0xc5, 0xbf, 0xb7, 0xb7, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xa9, 0xb7, 0xc5, 0xc5, 0xc5, 0xc5, 0xcd, 0xdb, 
	0xe3, 0xe3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xd5, 
	0xe5, 0xe5, 0xe5, 0xd5, 0xd5, 0xe5, 0xe5, 0xe5, 
	0xcf, 0xd5, 0xe5, 0xe5, 0xe5, 0xc5, 0xc5, 0xd5, 
	0xe5, 0xe5, 0xe5, 0xc5, 0xcf, 0xcd, 0xcd, 0xcd, 
	0xb7, 0xb1, 0xb1, 0xb7, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xd5, 
	0xb7, 0xb7, 0xb7, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xe5, 0xe5, 0xe5, 0xd5, 
	0xcf, 0xd5, 0xd5, 0xd5, 0xc5, 0xc5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xb1, 0xb1, 0xb1, 0xb7, 0xbf, 0xbf, 0xb7, 
	0xb1, 0xbf, 0xbf, 0xbf, 0xb1, 0xb1, 0xb1, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xbf, 0xbf, 0xbf, 0xb7, 0xbf, 
	0xa9, 0xa9, 0xb7, 0xb7, 0xc5, 0xcd, 0xcd, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xe5, 0xe5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xcf, 0xc5, 0xd5, 0xd5, 0xd5, 
	0xe5, 0xd5, 0xc5, 0xc5, 0xcf, 0xcf, 0xc5, 0xc5, 
	0xc5, 0xb1, 0xb1, 0xb1, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xab, 0xbf, 0xbf, 0xb1, 0xb1, 0xb7, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xb1, 0xbf, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xc5, 0xc5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xcd, 0xc5, 0xc5, 0xcd, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xbf, 0xbf, 0xd5, 0xcf, 0xcf, 0xcf, 0xcf, 
	0xb7, 0xb1, 0xb1, 0xb1, 0xb1, 0xc5, 0xc5, 0xb7, 
	0xa9, 0xa9, 0xbf, 0xbf, 0xa9, 0xbf, 0xbf, 0xa9, 
	0xb1, 0xb1, 0xb1, 0xb1, 0xa9, 0xa9, 0xbf, 0xbf, 
	0xb7, 0xb7, 0xc5, 0xc5, 0xc5, 0xd5, 0xd5, 0xd5, 
	0xe5, 0xe5, 0xe5, 0xe5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xdb, 0xdb, 0xcd, 0xcd, 0xd5, 0xcf, 0xcf, 0xcf, 
	0xc5, 0xcd, 0xcd, 0xdb, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xcf, 0xcf, 0xcf, 0xb7, 
	0xb1, 0xb1, 0xb1, 0xb1, 0xc5, 0xc5, 0xb7, 0xb1, 
	0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 
	0xb1, 0xb1, 0xb1, 0xb1, 0xa9, 0xa9, 0xa9, 0xbf, 
	0xa9, 0xa9, 0xb7, 0xb7, 0xb7, 0xc5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xcd, 0xcd, 0xc5, 0xc5, 0xd5, 0xd5, 0xd5, 0xdb, 
	0xdb, 0xdb, 0xcd, 0xcd, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xcf, 0xb7, 0xb7, 0xb7, 
	0xb1, 0xb7, 0xb7, 0xc5, 0xb7, 0xb1, 0xb1, 0xb1, 
	0xa9, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xb1, 0xb1, 0xb1, 0xb1, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xb7, 0xb7, 0xb7, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xc5, 0xc5, 0xc5, 0xcd, 0xd5, 0xd5, 0xd5, 0xcf, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xaf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xaf, 0xaf, 0xa7, 0xa7, 0xaf, 0xaf, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb1, 0xb1, 0xb7, 0xb1, 
	0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 
	0xa7, 0xa7, 0xa7, 0xa7, 0x97, 0x97, 0x97, 0xbf, 
	0xbb, 0xad, 0xad, 0xad, 0xa5, 0x95, 0x95, 0x95, 
	0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0xa5, 
	0xa5, 0xa5, 0xa5, 0xa5, 0xa5, 0xa5, 0x95, 0x95, 
	0x9d, 0x9d, 0xad, 0xad, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xbb, 0xbb, 0xbb, 0xa7, 0xad, 0xad, 0x9d, 0x9d, 
	0x95, 0x95, 0xa5, 0xa5, 0xa5, 0xa5, 0xa5, 0xa5, 
	0xa5, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 
	0x95, 0x95, 0x95, 0xa5, 0xad, 0xad, 0xad, 0xbb, 
	0xbb, 0xad, 0xad, 0xa7, 0x9d, 0x9d, 0x9d, 0xbb, 
	0xb5, 0xb5, 0xb5, 0xb5, 0xa5, 0xa5, 0xbb, 0xbb, 
	0xad, 0xad, 0xc5, 0xc5, 0xcb, 0xcb, 0xcb, 0xcb, 
	0xb3, 0xb3, 0xad, 0xad, 0xbb, 0xc5, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xb5, 0xad, 0xad, 0xb3, 0xb3, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xc5, 0xc5, 0xad, 0xad, 
	0xbb, 0xbb, 0xa5, 0xa5, 0xb5, 0xb5, 0xb5, 0xb5, 
	0xbb, 0x9d, 0x9d, 0x9d, 0xa7, 0xad, 0xad, 0xbb, 
	0xad, 0xa7, 0xa7, 0xa7, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xb5, 0xb5, 0xb5, 0xb5, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xad, 0xad, 0xcb, 0xcb, 
	0xd3, 0xd3, 0xb3, 0xb3, 0xb5, 0xb5, 0xbb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xb5, 0xb3, 0xb3, 0xd3, 0xd3, 
	0xcb, 0xcb, 0xad, 0xad, 0xc5, 0xc5, 0xc5, 0xc5, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xb5, 0xb5, 0xb5, 0xb5, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xa7, 0xa7, 0xa7, 0xad, 
	0xad, 0xa7, 0xbb, 0xad, 0x9d, 0x9d, 0xa5, 0xbb, 
	0xb5, 0xb5, 0xb5, 0xb5, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xc5, 0xad, 0xc5, 0xc5, 0xcb, 0xcb, 0xad, 0xad, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xc5, 0xb5, 0xb5, 0xc5, 
	0xdb, 0xdb, 0xdb, 0xb5, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xad, 0xad, 0xcb, 0xcb, 0xc5, 0xc5, 0xad, 0xc5, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xb5, 0xb5, 0xb5, 0xb5, 
	0xbb, 0xa5, 0x9d, 0x9d, 0xad, 0xbb, 0xa7, 0xad, 
	0xcb, 0xad, 0xad, 0x97, 0xa7, 0xbb, 0xbb, 0xbb, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xb5, 0xbb, 
	0xbb, 0xcb, 0xbb, 0xad, 0xcb, 0xcb, 0xcb, 0xbb, 
	0xb5, 0xdb, 0xdb, 0xdb, 0xdb, 0xc5, 0xb5, 0xbb, 
	0xdb, 0xdb, 0xdb, 0xad, 0xdb, 0xdb, 0xdb, 0xb5, 
	0xbb, 0xcb, 0xcb, 0xcb, 0xad, 0xbb, 0xcb, 0xbb, 
	0xbb, 0xb5, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xbb, 0xbb, 0xbb, 0xa7, 0x97, 0xad, 0xad, 0xcb, 
	0xcb, 0xad, 0x97, 0xa7, 0xbb, 0xa7, 0x97, 0xa7, 
	0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xaf, 
	0xad, 0xcb, 0xcb, 0xbb, 0xb5, 0xcb, 0xcb, 0xcb, 
	0xb5, 0xbb, 0xdb, 0xdb, 0xdb, 0xc5, 0xb5, 0xbb, 
	0xdb, 0xdb, 0xdb, 0xad, 0xdb, 0xdb, 0xbb, 0xb5, 
	0xcb, 0xcb, 0xcb, 0xb5, 0xbb, 0xcb, 0xcb, 0xad, 
	0xaf, 0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 
	0xa7, 0x97, 0xa7, 0xbb, 0xa7, 0x97, 0xad, 0xcb, 
	0xcb, 0xa7, 0x97, 0xad, 0xbb, 0x97, 0x97, 0xbb, 
	0xbb, 0xaf, 0xb5, 0xbb, 0xbb, 0xbb, 0xbb, 0xb5, 
	0xad, 0xcb, 0xcb, 0xbb, 0xb5, 0xbb, 0xcb, 0xcb, 
	0xbb, 0xb5, 0xdb, 0xdb, 0xdb, 0xc5, 0xb5, 0xbb, 
	0xdb, 0xdb, 0xdb, 0xad, 0xdb, 0xdb, 0xb5, 0xbb, 
	0xcb, 0xcb, 0xbb, 0xb5, 0xbb, 0xcb, 0xcb, 0xad, 
	0xb5, 0xbb, 0xbb, 0xbb, 0xbb, 0xb5, 0xaf, 0xbb, 
	0xbb, 0x97, 0x97, 0xbb, 0xad, 0x97, 0xa7, 0xcb, 
	0xad, 0x97, 0x97, 0xad, 0xa7, 0x97, 0x97, 0x9d, 
	0xb5, 0xb5, 0xaf, 0xaf, 0xb5, 0xb5, 0xaf, 0xaf, 
	0xad, 0xad, 0xad, 0xad, 0xb5, 0xbb, 0xbb, 0xb5, 
	0xa7, 0xb5, 0xbb, 0xbb, 0xb5, 0xb5, 0xb5, 0xbb, 
	0xdb, 0xbb, 0xad, 0x9d, 0xbb, 0xbb, 0xb5, 0xa7, 
	0xb5, 0xbb, 0xbb, 0xb5, 0xad, 0xad, 0xad, 0xad, 
	0xaf, 0xaf, 0xb5, 0xb5, 0xaf, 0xaf, 0xb5, 0xb5, 
	0x9d, 0x97, 0x97, 0xa7, 0xad, 0x97, 0x97, 0xad, 
	0xc5, 0xc5, 0xd5, 0xd5, 0xd5, 0xd5, 0xdb, 0xdb, 
	0xe3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xc3, 0xc3, 0xc3, 0xc3, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xc3, 0xc3, 0xc3, 0xc3, 
	0xc3, 0xc3, 0xc3, 0xc3, 0xcb, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xc3, 
	0xc5, 0xd5, 0xd5, 0xeb, 0xeb, 0xeb, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xeb, 0xeb, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xeb, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xeb, 0xeb, 0xeb, 0xeb, 0xeb, 0xeb, 0xeb, 0xeb, 
	0xeb, 0xeb, 0xeb, 0xeb, 0xe5, 0xe5, 0xe5, 0xe5, 
	0xe5, 0xe5, 0xe5, 0xe5, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xbf, 0xbf, 0xc5, 0xd5, 0xd5, 0xdb, 0xeb, 0xeb, 
	0xf3, 0xf3, 0xf3, 0xe3, 0xe3, 0xe3, 0xdb, 0xe3, 
	0xeb, 0xeb, 0xeb, 0xe3, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xd5, 0xe3, 0xe3, 0xe3, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xe5, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xc5, 0xc5, 0xc5, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xdb, 
	0xbf, 0xc5, 0xc5, 0xc5, 0xd5, 0xd5, 0xdb, 0xeb, 
	0xe3, 0xe3, 0xf3, 0xf3, 0xdb, 0xdb, 0xf3, 0xf3, 
	0xeb, 0xdb, 0xdb, 0xeb, 0xeb, 0xeb, 0xeb, 0xeb, 
	0xe3, 0xe3, 0xe3, 0xe3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xeb, 0xeb, 0xeb, 0xdb, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xe5, 0xe5, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xc5, 0xc5, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xdb, 
	0xc5, 0xd5, 0xd5, 0xd5, 0xdb, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xff, 0xf3, 0xe3, 0xdb, 0xf3, 0xf3, 0xe3, 
	0xdb, 0xdb, 0xf3, 0xf3, 0xdb, 0xd5, 0xdb, 0xeb, 
	0xeb, 0xeb, 0xdb, 0xdb, 0xf3, 0xf3, 0xe3, 0xe3, 
	0xeb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xcd, 0xcd, 0xcd, 0xdb, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xcd, 0xbf, 0xcd, 
	0xc5, 0xd5, 0xd5, 0xe5, 0xdb, 0xdb, 0xf3, 0xf3, 
	0xff, 0xff, 0xf3, 0xe3, 0xdb, 0xf3, 0xf3, 0xe3, 
	0xdb, 0xdb, 0xe3, 0xf3, 0xeb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xeb, 0xf3, 0xe3, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xcd, 0xcd, 0xcd, 0xdb, 0xdb, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xbf, 0xbf, 0xbf, 0xcd, 
	0xc5, 0xd5, 0xe5, 0xe5, 0xdb, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xff, 0xff, 0xf3, 0xe3, 0xe3, 0xe3, 0xf3, 
	0xe3, 0xe3, 0xe3, 0xe3, 0xeb, 0xeb, 0xeb, 0xeb, 
	0xeb, 0xeb, 0xeb, 0xeb, 0xe3, 0xdb, 0xdb, 0xdb, 
	0xeb, 0xeb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xcd, 
	0xcd, 0xdb, 0xdb, 0xdb, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xcd, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xcd, 
	0xc5, 0xc5, 0xc5, 0xc5, 0xd5, 0xd5, 0xdb, 0xdb, 
	0xe3, 0xe3, 0xe3, 0xe3, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xbf, 0xbf, 
	0xcd, 0xcd, 0xbf, 0xbf, 0xbf, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xbf, 0xbf, 0xbf, 0xbf, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xaf, 0xbf, 0xaf, 0xcd, 
	0xa5, 0xa5, 0xa5, 0x9d, 0x9d, 0x9d, 0x9d, 0x9d, 
	0x9d, 0x9d, 0x9d, 0xad, 0xa7, 0xa7, 0xbd, 0xb5, 
	0xb5, 0xb5, 0xb5, 0xb5, 0xbb, 0xbb, 0xcb, 0xd3, 
	0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 
	0xc3, 0xc3, 0xc3, 0xcb, 0xcb, 0xcb, 0xcb, 0xbb, 
	0xbb, 0xbb, 0xbb, 0xc3, 0xc3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xad, 0xad, 0xad, 0xad, 0xad, 
	0xad, 0xad, 0xad, 0xb3, 0xb3, 0xa5, 0xa5, 0xa5, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 
	0xcb, 0xcb, 0xcb, 0xd3, 0xd3, 0xbd, 0xd3, 0xc5, 
	0xdb, 0xdb, 0xdb, 0xcb, 0xcb, 0xcb, 0xe1, 0xff, 
	0xff, 0xff, 0xd3, 0xd3, 0xe9, 0xe9, 0xe9, 0xf1, 
	0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xdb, 0xe1, 
	0xe1, 0xe1, 0xe1, 0xdb, 0xdb, 0xc3, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xcb, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xbd, 0xbd, 0xad, 0xd3, 0xc5, 
	0xdb, 0xdb, 0xdb, 0xe1, 0xcb, 0xcb, 0xcb, 0xe1, 
	0xff, 0xff, 0xff, 0xe9, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xdb, 0xdb, 0xdb, 0xdb, 0xe1, 
	0xcb, 0xc3, 0xc3, 0xbb, 0xbb, 0xc3, 0xdb, 0xc3, 
	0xc3, 0xbb, 0xbb, 0xc3, 0xdb, 0xdb, 0xdb, 0xc3, 
	0xc3, 0xc3, 0xc3, 0xbb, 0xbb, 0xbb, 0xbb, 0xb3, 
	0xad, 0xad, 0xad, 0xa5, 0xa5, 0xa5, 0xa5, 0xa5, 
	0xa5, 0xa5, 0xa5, 0xa7, 0xa7, 0xa7, 0xbd, 0xc5, 
	0xdb, 0xdb, 0xdb, 0xe1, 0xe1, 0xe1, 0xe1, 0xd3, 
	0xd3, 0xd3, 0xe1, 0xe9, 0xe9, 0xe9, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xcb, 0xcb, 0xd3, 0xd3, 0xc3, 
	0xc3, 0xcb, 0xe1, 0xdb, 0xdb, 0xc3, 0xbb, 0xbb, 
	0xc3, 0xdb, 0xdb, 0xc3, 0xc3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xbb, 0xbb, 0xbb, 0xbb, 0xad, 
	0xbb, 0xbb, 0xbb, 0xb5, 0xb5, 0xb5, 0xb5, 0xb5, 
	0xb5, 0xb5, 0xb5, 0xbd, 0xbd, 0xbd, 0xd3, 0xcb, 
	0xdb, 0xdb, 0xdb, 0xe1, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xf1, 0xe1, 0xe1, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 
	0xcb, 0xcb, 0xc5, 0xc5, 0xc5, 0xc5, 0xcb, 0xcb, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 
	0xcb, 0xcb, 0xcb, 0xbd, 0xbd, 0xbd, 0xd3, 0xbb, 
	0xcb, 0xcb, 0xdb, 0xdb, 0xe1, 0xf1, 0xf1, 0xf1, 
	0xf1, 0xf1, 0xf1, 0xe1, 0xe1, 0xe1, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 
	0xad, 0xad, 0xad, 0xb5, 0xb5, 0xb5, 0xad, 0xad, 
	0xad, 0xad, 0xb5, 0xad, 0xad, 0xad, 0xbd, 0xbb, 
	0xbb, 0xbb, 0xbb, 0xdb, 0xdb, 0xdb, 0xe1, 0xe1, 
	0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 
	0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xd3, 0xd3, 0xcb, 
	0xcb, 0xcb, 0xcb, 0xcb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xaf, 0xaf, 0xaf, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 
	0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xaf, 0xbf, 
	0xbf, 0xcd, 0xcd, 0xdb, 0xdb, 0xe3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 
	0xe3, 0xe3, 0xe3, 0xe3, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 
	0xcd, 0xdb, 0xdb, 0xd5, 0xd5, 0xcd, 0xc5, 0xbf, 
	0xb7, 0xb7, 0xb7, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xb7, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xcd, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xaf, 0xa7, 0xa7, 0xa7, 0xa7, 
	0xa7, 0x97, 0xa7, 0xa7, 0xa7, 0xa7, 0x97, 0x97, 
	0xa7, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 
	0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0xa7, 
	0xbb, 0xd3, 0xd3, 0xd3, 0xbb, 0xbb, 0xcb, 0xd3, 
	0xf1, 0xf1, 0xf1, 0xd3, 0xcb, 0xcb, 0xd3, 0xd3, 
	0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xbd, 0xaf, 0xbb, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd3, 0xd3, 
	0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 
	0xd3, 0xd3, 0xcb, 0xcb, 0xd3, 0xf1, 0xf1, 0xf1, 
	0xd3, 0xcb, 0xbb, 0xbb, 0xd3, 0xd3, 0xd3, 0xbb, 
	0xbb, 0xd3, 0xbb, 0xad, 0xbb, 0xcb, 0xf1, 0xf1, 
	0xf1, 0xf1, 0xd3, 0xcb, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xe1, 0xe1, 0xe1, 0xc3, 0xc3, 0xe1, 0xe1, 0xe1, 
	0xd3, 0xd3, 0xc3, 0xc3, 0xd3, 0xd3, 0xaf, 0xd1, 
	0xd1, 0xc1, 0xc1, 0xd1, 0xc1, 0xc1, 0xd3, 0xd3, 
	0xe1, 0xe1, 0xe1, 0xc3, 0xc3, 0xe1, 0xe1, 0xe1, 
	0xf1, 0xf1, 0xf1, 0xf1, 0xcb, 0xd3, 0xf1, 0xf1, 
	0xf1, 0xf1, 0xcb, 0xbb, 0xad, 0xbb, 0xd3, 0xbb, 
	0xbb, 0xad, 0xad, 0xad, 0xbb, 0xd3, 0xf1, 0xf1, 
	0xf1, 0xcb, 0xcb, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xc3, 0xc3, 0xc3, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 
	0xc3, 0xb3, 0xb3, 0xb3, 0xbd, 0xbd, 0xaf, 0xbb, 
	0xbb, 0xb1, 0xb1, 0xbb, 0xb1, 0xb1, 0xb3, 0xc3, 
	0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xc3, 0xc3, 0xc3, 
	0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xcb, 0xcb, 0xf1, 
	0xf1, 0xf1, 0xd3, 0xbb, 0xad, 0xad, 0xad, 0xbb, 
	0xad, 0xad, 0xad, 0xad, 0xcb, 0xe9, 0xe9, 0xe9, 
	0xd3, 0xd3, 0xd3, 0xe1, 0xf1, 0xf1, 0xf1, 0xdb, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xd3, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xa7, 0xc9, 
	0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xcb, 0xd3, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xdb, 0xf1, 0xf1, 0xf1, 0xe1, 0xd3, 0xd3, 0xd3, 
	0xe9, 0xe9, 0xe9, 0xcb, 0xad, 0xad, 0xad, 0xad, 
	0xad, 0xad, 0xad, 0xbb, 0xbb, 0xe9, 0xe9, 0xe9, 
	0xf1, 0xd3, 0xd3, 0xd3, 0xdb, 0xe1, 0xe1, 0xe1, 
	0xe1, 0xe1, 0xdb, 0xdb, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xcb, 0xd3, 0xe9, 0xcb, 0xa7, 0xc9, 
	0xe7, 0xd1, 0xc9, 0xe7, 0xd1, 0xc9, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xdb, 0xdb, 0xe1, 0xe1, 
	0xe1, 0xe1, 0xe1, 0xdb, 0xd3, 0xd3, 0xd3, 0xf1, 
	0xe9, 0xe9, 0xe9, 0xbb, 0xbb, 0xad, 0xad, 0xad, 
	0xcb, 0xbb, 0xad, 0xbb, 0xbb, 0xcb, 0xe9, 0xe9, 
	0xf1, 0xf1, 0xf1, 0xe1, 0xe1, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xe9, 0xcb, 0xa7, 0xc9, 
	0xe7, 0xd1, 0xd1, 0xe7, 0xd1, 0xd1, 0xd3, 0xd3, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xe1, 0xe1, 0xf1, 0xf1, 0xf1, 
	0xe9, 0xe9, 0xcb, 0xbb, 0xbb, 0xad, 0xbb, 0xcb, 
	0xaf, 0xaf, 0xaf, 0xb7, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xcd, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 
	0xb7, 0xb7, 0xb7, 0xaf, 0xa7, 0xa7, 0xa7, 0xa7, 
	0xa7, 0x97, 0xa7, 0xa7, 0xa7, 0xa7, 0x97, 0x97, 
	0xa7, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 
	0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0x97, 0xa7, 
	
};

Vtx bdoor_door_mesh_layer_1_vtx_cull[8] = {
	{{{-9, -1189, 142},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-9, 1134, 142},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-9, 1134, -64},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-9, -1189, -64},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1057, -1189, 142},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1057, 1134, 142},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1057, 1134, -64},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1057, -1189, -64},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx bdoor_door_mesh_layer_1_vtx_0[18] = {
	{{{1057, -1189, -64},0, {951, 1008},{0x3B, 0x25, 0x11, 0xFF}}},
	{{{1057, 1134, -64},0, {1065, 1008},{0x3B, 0x25, 0x11, 0xFF}}},
	{{{1057, 1134, 62},0, {1065, -16},{0x56, 0x35, 0x18, 0xFF}}},
	{{{1057, -1189, 62},0, {951, -16},{0x56, 0x35, 0x18, 0xFF}}},
	{{{1057, -1189, 62},0, {-16, 1008},{0x56, 0x35, 0x18, 0xFF}}},
	{{{1057, 1134, 62},0, {2032, 1008},{0x56, 0x35, 0x18, 0xFF}}},
	{{{-9, 1134, 62},0, {2032, -1040},{0x56, 0x35, 0x18, 0xFF}}},
	{{{-9, -1189, 62},0, {-16, -1040},{0x50, 0x31, 0x17, 0xFF}}},
	{{{-9, -1189, 62},0, {951, 1008},{0x50, 0x31, 0x17, 0xFF}}},
	{{{-9, 1134, 62},0, {1065, 1008},{0x56, 0x35, 0x18, 0xFF}}},
	{{{-9, 1134, -64},0, {1065, -16},{0x3B, 0x25, 0x11, 0xFF}}},
	{{{-9, -1189, -64},0, {951, -16},{0x3B, 0x25, 0x11, 0xFF}}},
	{{{1057, 1134, 62},0, {951, 1008},{0x56, 0x35, 0x18, 0xFF}}},
	{{{-9, 1134, 62},0, {951, -16},{0x56, 0x35, 0x18, 0xFF}}},
	{{{-9, -1189, -64},0, {-16, 1008},{0x3B, 0x25, 0x11, 0xFF}}},
	{{{-9, 1134, -64},0, {2032, 1008},{0x3B, 0x25, 0x11, 0xFF}}},
	{{{1057, 1134, -64},0, {2032, -1040},{0x3B, 0x25, 0x11, 0xFF}}},
	{{{1057, -1189, -64},0, {-16, -1040},{0x3B, 0x25, 0x11, 0xFF}}},
};

Gfx bdoor_door_mesh_layer_1_tri_0[] = {
	gsSPVertex(bdoor_door_mesh_layer_1_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 1, 10, 0, 12, 10, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSPEndDisplayList(),
};

Vtx bdoor_door_mesh_layer_1_vtx_1[20] = {
	{{{1018, -4, 142},0, {752, 2032},{0xFF, 0xDE, 0x6A, 0xFF}}},
	{{{1018, -4, 62},0, {1264, 2032},{0x99, 0x85, 0x40, 0xFF}}},
	{{{818, -17, 62},0, {1264, 1520},{0x99, 0x85, 0x40, 0xFF}}},
	{{{818, -17, 142},0, {752, 1520},{0xF8, 0xD7, 0x67, 0xFF}}},
	{{{1018, -47, 62},0, {752, 1520},{0x99, 0x85, 0x40, 0xFF}}},
	{{{1018, -47, 142},0, {1264, 1520},{0xC3, 0xAA, 0x51, 0xFF}}},
	{{{818, -34, 142},0, {1264, 1008},{0xC6, 0xAD, 0x52, 0xFF}}},
	{{{818, -34, 62},0, {752, 1008},{0x99, 0x85, 0x40, 0xFF}}},
	{{{818, -34, 142},0, {752, 1008},{0xC6, 0xAD, 0x52, 0xFF}}},
	{{{818, -17, 142},0, {1264, 1008},{0xF8, 0xD7, 0x67, 0xFF}}},
	{{{818, -17, 62},0, {1264, 496},{0x99, 0x85, 0x40, 0xFF}}},
	{{{818, -34, 62},0, {752, 496},{0x99, 0x85, 0x40, 0xFF}}},
	{{{1018, -47, 142},0, {752, 496},{0xC3, 0xAA, 0x51, 0xFF}}},
	{{{1018, -4, 142},0, {1264, 496},{0xFF, 0xDE, 0x6A, 0xFF}}},
	{{{818, -17, 142},0, {1264, -16},{0xF8, 0xD7, 0x67, 0xFF}}},
	{{{818, -34, 142},0, {752, -16},{0xC6, 0xAD, 0x52, 0xFF}}},
	{{{1018, -47, 62},0, {240, 1008},{0x99, 0x85, 0x40, 0xFF}}},
	{{{1018, -4, 62},0, {752, 1008},{0x99, 0x85, 0x40, 0xFF}}},
	{{{1018, -4, 142},0, {752, 496},{0xFF, 0xDE, 0x6A, 0xFF}}},
	{{{1018, -47, 142},0, {240, 496},{0xC3, 0xAA, 0x51, 0xFF}}},
};

Gfx bdoor_door_mesh_layer_1_tri_1[] = {
	gsSPVertex(bdoor_door_mesh_layer_1_vtx_1 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bdoor_Wooden_Door[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, bdoor_Wooden_Door_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(bdoor_Wooden_Door_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bdoor_Wooden_Door[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx mat_bdoor_Wood_Flooring[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, bdoor_house_floor_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(bdoor_Wood_Flooring_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bdoor_Wood_Flooring[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx bdoor_door_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(bdoor_door_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_bdoor_Wooden_Door),
	gsSPDisplayList(bdoor_door_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_bdoor_Wooden_Door),
	gsSPDisplayList(mat_bdoor_Wood_Flooring),
	gsSPDisplayList(bdoor_door_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_bdoor_Wood_Flooring),
	gsSPEndDisplayList(),
};

Gfx bdoor_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

