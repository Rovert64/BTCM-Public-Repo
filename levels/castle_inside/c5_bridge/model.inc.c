Lights1 c5_bridge_wood_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx c5_bridge_Siding_ci4_aligner[] = {gsSPEndDisplayList()};
u8 c5_bridge_Siding_ci4[] = {
	0x00, 0x11, 0x02, 0x33, 0x33, 0x24, 0x55, 0x50, 
	0x11, 0x10, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x11, 0x11, 
	0x23, 0x45, 0x66, 0x66, 0x66, 0x66, 0x66, 0x78, 
	0x34, 0x43, 0x99, 0xa7, 0x77, 0xa9, 0x24, 0x23, 
	0x44, 0x44, 0xa7, 0xa7, 0xaa, 0x77, 0x77, 0xbb, 
	0xb7, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xc2, 0x44, 
	0x23, 0x40, 0xb6, 0x66, 0x66, 0xbb, 0x6b, 0x78, 
	0x92, 0x23, 0x93, 0x98, 0xa7, 0x7a, 0x89, 0x88, 
	0x89, 0x8a, 0xaa, 0xaa, 0x7a, 0x77, 0x77, 0x77, 
	0x77, 0x7a, 0xaa, 0xaa, 0xaa, 0xaa, 0xa3, 0x22, 
	0xac, 0xc5, 0xb6, 0x66, 0x66, 0x66, 0x6b, 0x7a, 
	0x89, 0x8a, 0x89, 0x8a, 0x83, 0x99, 0x45, 0x24, 
	0x8a, 0xa7, 0xa7, 0x77, 0x77, 0x77, 0x77, 0x77, 
	0x77, 0x7a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x3c, 
	0xca, 0xa5, 0x7b, 0x77, 0xb7, 0x77, 0xaa, 0xaa, 
	0x88, 0xa8, 0xa8, 0xa7, 0x77, 0x99, 0x99, 0x99, 
	0x99, 0x99, 0x99, 0x99, 0x99, 0x7b, 0x66, 0xb6, 
	0x77, 0x7a, 0xaa, 0xaa, 0xaa, 0xaa, 0xac, 0xca, 
	0xaa, 0xa5, 0x89, 0x33, 0x22, 0x33, 0x99, 0x99, 
	0x98, 0x87, 0x77, 0x7a, 0xaa, 0x89, 0x93, 0x93, 
	0x22, 0x42, 0x23, 0x99, 0x33, 0x99, 0x88, 0x93, 
	0x32, 0x24, 0x44, 0x44, 0x44, 0x22, 0x22, 0xcc, 
	0x3c, 0xc5, 0x8a, 0x89, 0x99, 0x99, 0x9a, 0x88, 
	0x89, 0x39, 0x88, 0x89, 0xab, 0x78, 0x93, 0x93, 
	0x22, 0x22, 0x22, 0x22, 0x33, 0x32, 0x32, 0x22, 
	0x24, 0x44, 0x44, 0x44, 0x44, 0x42, 0x23, 0x32, 
	0x33, 0x40, 0xa8, 0x93, 0x22, 0x33, 0x32, 0x32, 
	0x23, 0x39, 0x99, 0x98, 0x77, 0x82, 0x22, 0x39, 
	0x88, 0x88, 0x88, 0x93, 0x22, 0x33, 0x24, 0x22, 
	0x44, 0x44, 0x45, 0x55, 0x55, 0x44, 0x44, 0x22, 
	0xaa, 0xa0, 0xa8, 0x89, 0x99, 0x99, 0x32, 0x99, 
	0x88, 0x8a, 0xaa, 0xaa, 0xa8, 0x99, 0x99, 0x87, 
	0x77, 0xaa, 0x89, 0x93, 0x24, 0x44, 0x42, 0x22, 
	0x55, 0x55, 0x54, 0x45, 0x55, 0x44, 0x23, 0xcc, 
	0x54, 0x01, 0x55, 0x55, 0x00, 0x00, 0x05, 0x55, 
	0x55, 0x55, 0x44, 0x44, 0x55, 0x43, 0x92, 0x22, 
	0x22, 0x44, 0x55, 0x55, 0x00, 0x05, 0x50, 0x00, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x44, 0x11, 0x11, 0x55, 0x42, 0x22, 0x45, 0x55, 
	0x55, 0x55, 0x50, 0x00, 0x00, 0x00, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x11, 0x11, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x15, 
	0x87, 0x78, 0x99, 0x88, 0x8a, 0x7a, 0xa9, 0x32, 
	0x88, 0x88, 0xaa, 0x93, 0x39, 0x88, 0x99, 0x59, 
	0x77, 0x88, 0x76, 0xba, 0x99, 0x76, 0x80, 0x88, 
	0x93, 0x32, 0x42, 0x44, 0x44, 0x44, 0x49, 0x88, 
	0x99, 0x98, 0x88, 0x89, 0x93, 0x22, 0x93, 0x22, 
	0x99, 0x32, 0x23, 0x98, 0x89, 0x32, 0x45, 0x42, 
	0x98, 0x34, 0x28, 0x94, 0x37, 0xa3, 0x50, 0x22, 
	0x44, 0x54, 0x44, 0x42, 0x23, 0x22, 0x29, 0x89, 
	0x88, 0x88, 0x83, 0x23, 0x99, 0x99, 0x33, 0x32, 
	0x39, 0x99, 0x99, 0x99, 0x93, 0x24, 0x33, 0x32, 
	0x45, 0x49, 0x98, 0x78, 0xa3, 0x33, 0x30, 0x33, 
	0x99, 0x98, 0x88, 0x88, 0x89, 0x99, 0x99, 0x88, 
	0x24, 0x44, 0x44, 0x42, 0x39, 0x35, 0x55, 0x44, 
	0x44, 0x44, 0x55, 0x55, 0x44, 0x22, 0x29, 0x99, 
	0x8a, 0x77, 0x78, 0x7a, 0x9a, 0xa8, 0x85, 0x88, 
	0x88, 0x83, 0x32, 0x23, 0x33, 0x33, 0x32, 0x22, 
	0x87, 0x77, 0x77, 0x89, 0x98, 0x39, 0x93, 0x38, 
	0x7a, 0x98, 0x77, 0xa7, 0x77, 0x77, 0x77, 0x77, 
	0x77, 0xa6, 0x65, 0x67, 0x77, 0xa8, 0x85, 0x88, 
	0x89, 0x99, 0x32, 0x24, 0x44, 0x44, 0x43, 0x99, 
	0x77, 0x77, 0x77, 0x77, 0x77, 0x7b, 0x7a, 0x7b, 
	0x6b, 0x77, 0xb7, 0x77, 0x74, 0x49, 0x99, 0x99, 
	0x87, 0xb7, 0xb6, 0x67, 0x89, 0x32, 0x25, 0x22, 
	0x22, 0x44, 0x45, 0x55, 0x55, 0x51, 0x43, 0x88, 
	0x78, 0x88, 0x88, 0x87, 0x7b, 0x7a, 0xa7, 0x7a, 
	0x88, 0x88, 0x89, 0x99, 0x99, 0x88, 0x99, 0x93, 
	0x33, 0x29, 0x8a, 0x83, 0x32, 0x22, 0x50, 0x22, 
	0x44, 0x45, 0x55, 0x55, 0x55, 0x44, 0x22, 0x98, 
	0x89, 0x99, 0x98, 0x88, 0x88, 0x89, 0x99, 0x99, 
	0x39, 0x93, 0x23, 0x33, 0x89, 0x33, 0x45, 0x28, 
	0x77, 0xa7, 0x7a, 0x7a, 0x93, 0x32, 0x20, 0x55, 
	0x44, 0x45, 0x55, 0x54, 0x42, 0x22, 0x39, 0x99, 
	0x33, 0x39, 0x33, 0x39, 0x99, 0x33, 0x32, 0x33, 
	0x22, 0x44, 0x22, 0x33, 0x32, 0x33, 0x32, 0x39, 
	0x88, 0x89, 0x33, 0x32, 0x24, 0x44, 0x51, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x22, 0x22, 0x22, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x10, 0x00, 0x01, 0x11, 0x11, 0x00, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x50, 0x00, 0x00, 0x05, 0x54, 0x45, 0x55, 0x55, 
	0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x00, 0x01, 0x11, 0x05, 0x55, 0x55, 
	0x22, 0x22, 0x22, 0x23, 0x98, 0x89, 0x99, 0x89, 
	0x93, 0x22, 0x22, 0x22, 0x44, 0x24, 0x44, 0x42, 
	0x33, 0x32, 0x22, 0x22, 0x22, 0x24, 0x22, 0x22, 
	0x22, 0x39, 0x99, 0x33, 0x12, 0x99, 0x99, 0x32, 
	0x44, 0x54, 0x54, 0x42, 0x39, 0x93, 0x32, 0x33, 
	0x24, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x54, 0x44, 0x42, 0x32, 0x44, 0x24, 0x44, 0x22, 
	0x42, 0x33, 0x39, 0x93, 0x02, 0x33, 0x22, 0x45, 
	0x99, 0x99, 0x98, 0x88, 0x88, 0x88, 0x98, 0x22, 
	0x98, 0x99, 0x22, 0x22, 0x22, 0x29, 0x22, 0x29, 
	0x28, 0x8a, 0xa9, 0x98, 0x99, 0x98, 0x8a, 0x88, 
	0x3a, 0xb7, 0x99, 0x89, 0x59, 0x99, 0x99, 0x89, 
	0x22, 0x23, 0x22, 0x22, 0x23, 0x22, 0x24, 0x44, 
	0x24, 0x22, 0x22, 0x22, 0x22, 0x23, 0x22, 0x22, 
	0x24, 0x29, 0x89, 0x98, 0x83, 0x39, 0x33, 0x22, 
	0x42, 0x22, 0x42, 0x22, 0x52, 0x44, 0x22, 0x42, 
	0x22, 0x44, 0x22, 0x22, 0x33, 0x33, 0x32, 0x23, 
	0x33, 0x22, 0x24, 0x44, 0x55, 0x55, 0x55, 0x44, 
	0x44, 0x45, 0x44, 0x45, 0x55, 0x54, 0x44, 0x44, 
	0x45, 0x55, 0x55, 0x55, 0x54, 0x22, 0x33, 0x32, 
	0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0x44, 
	0x22, 0x22, 0x24, 0x44, 0x44, 0x44, 0x22, 0x22, 
	0x45, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x04, 0x44, 0x22, 0x22, 
	0x22, 0x23, 0x33, 0x33, 0x99, 0x93, 0x98, 0xa8, 
	0x93, 0x22, 0x22, 0x33, 0x33, 0x24, 0x55, 0x55, 
	0x53, 0x9a, 0x89, 0x32, 0x45, 0x55, 0x55, 0x55, 
	0x55, 0x45, 0x55, 0x55, 0x03, 0x89, 0x99, 0x32, 
	0x54, 0x45, 0x55, 0x00, 0x50, 0x00, 0x05, 0x55, 
	0x55, 0x55, 0x44, 0x44, 0x55, 0x43, 0x92, 0x22, 
	0x22, 0x44, 0x55, 0x55, 0x00, 0x05, 0x50, 0x00, 
	0x05, 0x55, 0x55, 0x55, 0x15, 0x55, 0x55, 0x55, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x55, 0x55, 0x52, 0x93, 0x33, 0x33, 0x24, 0x45, 
	0x51, 0x10, 0x50, 0x00, 0x00, 0x00, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x93, 0x99, 0xcc, 0x7a, 0xbb, 0x77, 0x77, 0x7c, 
	0xcc, 0x02, 0x33, 0x33, 0x22, 0x55, 0x55, 0x55, 
	0x54, 0x24, 0x45, 0x42, 0x99, 0x25, 0x44, 0x22, 
	0x22, 0x22, 0x33, 0x32, 0x23, 0x99, 0x99, 0x93, 
	0xac, 0xac, 0xcc, 0xc9, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xac, 0x08, 0xa8, 0x95, 0x55, 0x50, 0x00, 0x05, 
	0x43, 0x34, 0x44, 0x44, 0x3a, 0x84, 0x55, 0x55, 
	0x55, 0x55, 0x44, 0x44, 0x44, 0x23, 0x89, 0x39, 
	0xcc, 0x35, 0x42, 0x32, 0x33, 0x22, 0x22, 0x3c, 
	0xac, 0x58, 0x25, 0x55, 0x55, 0x44, 0x44, 0x38, 
	0x93, 0x55, 0x22, 0x9a, 0x99, 0x99, 0x25, 0x55, 
	0x55, 0x55, 0x55, 0x50, 0x00, 0x53, 0x99, 0x39, 
	0x25, 0x55, 0x54, 0x24, 0x44, 0x44, 0x43, 0x9c, 
	0x33, 0x55, 0x50, 0x00, 0x55, 0x55, 0x55, 0x48, 
	0x84, 0x05, 0x54, 0x42, 0x55, 0x54, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x50, 0x00, 0x54, 0x42, 0x22, 
	0x23, 0x55, 0x54, 0x39, 0x99, 0x33, 0x22, 0x22, 
	0x22, 0x52, 0x55, 0x00, 0x55, 0x55, 0x44, 0x49, 
	0x35, 0x55, 0x55, 0x52, 0x45, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x50, 0x00, 0x55, 0x55, 0x54, 
	0x45, 0x55, 0x54, 0x23, 0x99, 0x33, 0x99, 0x99, 
	0x92, 0x55, 0x55, 0x55, 0x55, 0x54, 0x55, 0x55, 
	0x23, 0x34, 0x55, 0x55, 0x45, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x05, 0x55, 0x54, 0x24, 0x44, 
	0x23, 0x32, 0x42, 0x33, 0x99, 0xc9, 0x33, 0x9c, 
	0xc3, 0x02, 0x24, 0x55, 0x44, 0x44, 0x55, 0x55, 
	0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x50, 0x55, 
	0x45, 0x55, 0x05, 0x55, 0x55, 0x52, 0x32, 0x42, 
	0x99, 0x93, 0x23, 0xcc, 0xcc, 0xc9, 0x9c, 0xcc, 
	0xc9, 0x13, 0x32, 0x45, 0x22, 0x24, 0x25, 0x54, 
	0x43, 0x22, 0x44, 0x44, 0x44, 0x45, 0x55, 0x55, 
	0x55, 0x55, 0x05, 0x55, 0x55, 0x43, 0x33, 0x23, 
	0x52, 0x24, 0x25, 0x55, 0x55, 0x00, 0x00, 0x54, 
	0x54, 0x14, 0x44, 0x45, 0x55, 0x43, 0x92, 0x22, 
	0x22, 0x44, 0x55, 0x55, 0x00, 0x05, 0x50, 0x00, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x55, 0x50, 0x55, 0x40, 0x15, 0x22, 0x45, 0x55, 
	0x55, 0x55, 0x50, 0x00, 0x00, 0x00, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0xba, 0xaa, 0xaa, 0xab, 0x5b, 0xbb, 0xbb, 0xbb, 
	0xbb, 0xbb, 0xaa, 0x88, 0x89, 0x33, 0x25, 0x55, 
	0x05, 0x55, 0x55, 0x55, 0x55, 0x54, 0x23, 0x22, 
	0x23, 0x88, 0xa7, 0x76, 0x67, 0xbb, 0xbb, 0xbb, 
	0x22, 0x39, 0x98, 0x8a, 0x0a, 0xaa, 0x88, 0x89, 
	0x89, 0x32, 0x23, 0x33, 0x22, 0x44, 0x55, 0x00, 
	0x00, 0x00, 0x55, 0x50, 0x55, 0x52, 0x39, 0x92, 
	0x23, 0x98, 0xa7, 0xaa, 0xa8, 0x88, 0x98, 0x93, 
	0x22, 0x23, 0x33, 0x98, 0x58, 0x99, 0x99, 0x93, 
	0x32, 0x22, 0x22, 0x24, 0x55, 0x55, 0x50, 0x00, 
	0x00, 0x55, 0x55, 0x55, 0x55, 0x23, 0x99, 0x24, 
	0x23, 0x77, 0x77, 0x77, 0x77, 0x89, 0x33, 0x22, 
	0x39, 0x93, 0x33, 0x33, 0x52, 0x33, 0x33, 0x39, 
	0x89, 0x93, 0x99, 0x33, 0x22, 0x24, 0x42, 0x22, 
	0x23, 0x33, 0x99, 0x34, 0x29, 0x82, 0x22, 0x45, 
	0x55, 0x22, 0x33, 0x93, 0x39, 0x33, 0x98, 0x99, 
	0x44, 0x44, 0x44, 0x22, 0x53, 0x33, 0x33, 0x22, 
	0x24, 0x44, 0x44, 0x44, 0x44, 0x22, 0x22, 0x22, 
	0x24, 0x44, 0x22, 0x22, 0x39, 0x24, 0x45, 0x55, 
	0x55, 0x55, 0x50, 0x00, 0x55, 0x44, 0x22, 0x44, 
	0x55, 0x44, 0x44, 0x42, 0x53, 0x22, 0x33, 0x42, 
	0x24, 0x45, 0x55, 0x45, 0x52, 0x23, 0x22, 0x24, 
	0x42, 0x45, 0x44, 0x55, 0x52, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x54, 0x24, 0x22, 0x44, 
	0x55, 0x55, 0x55, 0x54, 0x52, 0x42, 0x22, 0x39, 
	0x45, 0x55, 0x55, 0x55, 0x55, 0x55, 0x50, 0x54, 
	0x44, 0x44, 0x45, 0x55, 0x55, 0x45, 0x55, 0x55, 
	0x55, 0x50, 0x05, 0x55, 0x54, 0x43, 0x94, 0x55, 
	0x55, 0x55, 0x55, 0x54, 0x54, 0x55, 0x44, 0x42, 
	0x45, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x50, 0x55, 0x54, 0x24, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x05, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x45, 0x55, 0x55, 0x44, 0x14, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x55, 0x55, 0x54, 0x45, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x50, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x50, 0x55, 0x45, 0x44, 0x44, 
	0x11, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x10, 0x00, 0x01, 0x11, 0x11, 0x00, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x00, 0x00, 0x00, 0x05, 0x54, 0x45, 0x55, 0x55, 
	0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x50, 0x00, 0x11, 0x00, 0x55, 0x51, 
	0x55, 0x55, 0x45, 0x55, 0x44, 0x45, 0x45, 0x55, 
	0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x55, 
	0x55, 0x54, 0x24, 0x37, 0xa8, 0x89, 0x88, 0x24, 
	0x55, 0x55, 0x55, 0x05, 0x55, 0x55, 0x55, 0x40, 
	0x44, 0x44, 0x24, 0x44, 0x55, 0x55, 0x55, 0x42, 
	0x45, 0x44, 0x44, 0x44, 0x44, 0x32, 0x22, 0x23, 
	0x99, 0x98, 0x89, 0x99, 0x32, 0x44, 0x24, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x45, 
	0x55, 0x54, 0x44, 0x45, 0x55, 0x50, 0x55, 0x44, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x55, 0x55, 
	0x28, 0x89, 0x55, 0x24, 0x55, 0x45, 0x44, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 
	0x55, 0x55, 0x54, 0x44, 0x45, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x29, 
	0x92, 0x55, 0x05, 0x33, 0x24, 0x55, 0x55, 0x55, 
	0x54, 0x45, 0x55, 0x54, 0x45, 0x54, 0x44, 0x55, 
	0x55, 0x54, 0x44, 0x42, 0x23, 0x24, 0x44, 0x22, 
	0x55, 0x55, 0x55, 0x54, 0x45, 0x54, 0x55, 0x50, 
	0x05, 0x05, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x42, 0x24, 0x45, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0x05, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x00, 0x00, 0x00, 0x55, 0x55, 0x50, 
	0x00, 0x00, 0x05, 0x50, 0x00, 0x00, 0x00, 0x55, 
	0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x50, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x50, 0x00, 0x00, 0x05, 0x50, 0x00, 0x55, 0x01, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	
};

Gfx c5_bridge_Siding_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 c5_bridge_Siding_ci4_pal_rgba16[] = {
	0x31, 0x4b, 0x21, 0x09, 0x73, 0x57, 0x7b, 0x99, 
	0x62, 0xd3, 0x4a, 0x0f, 0xd6, 0xb1, 0xb5, 0x69, 
	0x94, 0x5f, 0x8c, 0x1d, 0xad, 0x23, 0xc6, 0x2b, 
	0xa4, 0x9f, 
};

Vtx c5_bridge_Cube_007_mesh_layer_1_vtx_cull[8] = {
	{{{-519, -216, 247},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-519, 186, 247},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-519, 186, -261},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-519, -216, -261},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{519, -216, 247},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{519, 186, 247},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{519, 186, -261},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{519, -216, -261},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx c5_bridge_Cube_007_mesh_layer_1_vtx_0[84] = {
	{{{-472, 186, 247},0, {493, 1288},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{-495, 186, 206},0, {363, 1062},{0x0, 0x46, 0x96, 0xFF}}},
	{{{-519, 186, 247},0, {232, 1288},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{-472, 186, -219},0, {493, 1288},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{-495, 186, -261},0, {363, 1062},{0x0, 0x46, 0x96, 0xFF}}},
	{{{-519, 186, -219},0, {232, 1288},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{519, 186, 247},0, {493, 1288},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{495, 186, 206},0, {363, 1062},{0x0, 0x46, 0x96, 0xFF}}},
	{{{472, 186, 247},0, {232, 1288},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{519, 186, -219},0, {493, 1288},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{495, 186, -261},0, {363, 1062},{0x0, 0x46, 0x96, 0xFF}}},
	{{{472, 186, -219},0, {232, 1288},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{-495, 3, 233},0, {-16, 672},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-495, 86, 233},0, {-16, 1014},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-495, 86, -233},0, {2032, 1014},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-495, 3, -233},0, {2032, 672},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-495, 3, -233},0, {-1040, 669},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-495, 86, -233},0, {-1040, 1004},{0x0, 0x0, 0x81, 0xFF}}},
	{{{495, 86, -233},0, {3056, 1004},{0x0, 0x0, 0x81, 0xFF}}},
	{{{495, 3, -233},0, {3056, 669},{0x0, 0x0, 0x81, 0xFF}}},
	{{{495, 3, 233},0, {-1040, 669},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{495, 86, 233},0, {-1040, 1004},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-495, 86, 233},0, {3056, 1004},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-495, 3, 233},0, {3056, 669},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-495, 3, -233},0, {-1040, 2032},{0x0, 0x81, 0x0, 0xFF}}},
	{{{495, 3, -233},0, {3056, 2032},{0x0, 0x81, 0x0, 0xFF}}},
	{{{495, 3, 233},0, {3056, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-495, 3, 233},0, {-1040, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{495, 86, -233},0, {-1040, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-495, 86, -233},0, {3056, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-495, 86, 233},0, {3056, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{495, 86, 233},0, {-1040, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-495, -216, 206},0, {0, 947},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-495, 186, 206},0, {1584, 947},{0x0, 0x46, 0x96, 0xFF}}},
	{{{-472, 186, 247},0, {1584, 802},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{-472, -216, 247},0, {0, 802},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{-472, -216, 247},0, {0, 947},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{-472, 186, 247},0, {1584, 947},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{-519, 186, 247},0, {1584, 802},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{-519, -216, 247},0, {0, 802},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{-519, -216, 247},0, {0, 947},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{-519, 186, 247},0, {1584, 947},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{-495, 186, 206},0, {1584, 802},{0x0, 0x46, 0x96, 0xFF}}},
	{{{-495, -216, 206},0, {0, 802},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-495, -216, -261},0, {0, 947},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-495, 186, -261},0, {1584, 947},{0x0, 0x46, 0x96, 0xFF}}},
	{{{-472, 186, -219},0, {1584, 802},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{-472, -216, -219},0, {0, 802},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{-472, -216, -219},0, {0, 947},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{-472, 186, -219},0, {1584, 947},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{-519, 186, -219},0, {1584, 802},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{-519, -216, -219},0, {0, 802},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{-519, -216, -219},0, {0, 947},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{-519, 186, -219},0, {1584, 947},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{-495, 186, -261},0, {1584, 802},{0x0, 0x46, 0x96, 0xFF}}},
	{{{-495, -216, -261},0, {0, 802},{0x0, 0x0, 0x81, 0xFF}}},
	{{{495, 3, -233},0, {-16, 692},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{495, 86, -233},0, {-16, 988},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{495, 86, 233},0, {2032, 988},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{495, 3, 233},0, {2032, 692},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{495, -216, 206},0, {0, 947},{0x0, 0x0, 0x81, 0xFF}}},
	{{{495, 186, 206},0, {1584, 947},{0x0, 0x46, 0x96, 0xFF}}},
	{{{519, 186, 247},0, {1584, 802},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{519, -216, 247},0, {0, 802},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{519, -216, 247},0, {0, 947},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{519, 186, 247},0, {1584, 947},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{472, 186, 247},0, {1584, 802},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{472, -216, 247},0, {0, 802},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{472, -216, 247},0, {0, 947},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{472, 186, 247},0, {1584, 947},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{495, 186, 206},0, {1584, 802},{0x0, 0x46, 0x96, 0xFF}}},
	{{{495, -216, 206},0, {0, 802},{0x0, 0x0, 0x81, 0xFF}}},
	{{{495, -216, -261},0, {0, 947},{0x0, 0x0, 0x81, 0xFF}}},
	{{{495, 186, -261},0, {1584, 947},{0x0, 0x46, 0x96, 0xFF}}},
	{{{519, 186, -219},0, {1584, 802},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{519, -216, -219},0, {0, 802},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{519, -216, -219},0, {0, 947},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{519, 186, -219},0, {1584, 947},{0x5C, 0x46, 0x35, 0xFF}}},
	{{{472, 186, -219},0, {1584, 802},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{472, -216, -219},0, {0, 802},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{472, -216, -219},0, {0, 947},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{472, 186, -219},0, {1584, 947},{0xA4, 0x46, 0x35, 0xFF}}},
	{{{495, 186, -261},0, {1584, 802},{0x0, 0x46, 0x96, 0xFF}}},
	{{{495, -216, -261},0, {0, 802},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx c5_bridge_Cube_007_mesh_layer_1_tri_0[] = {
	gsSPVertex(c5_bridge_Cube_007_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(c5_bridge_Cube_007_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(c5_bridge_Cube_007_mesh_layer_1_vtx_0 + 64, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSPEndDisplayList(),
};


Gfx mat_c5_bridge_wood[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, c5_bridge_Siding_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 12),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, c5_bridge_Siding_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(c5_bridge_wood_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_c5_bridge_wood[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx c5_bridge_Cube_007_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(c5_bridge_Cube_007_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_c5_bridge_wood),
	gsSPDisplayList(c5_bridge_Cube_007_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_c5_bridge_wood),
	gsSPEndDisplayList(),
};

Gfx c5_bridge_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

