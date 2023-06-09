const Collision robot_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(66),
	COL_VERTEX(-34, 0, 103),
	COL_VERTEX(-34, 69, 103),
	COL_VERTEX(-34, 69, -103),
	COL_VERTEX(-34, 0, -103),
	COL_VERTEX(34, 69, -103),
	COL_VERTEX(34, 35, -143),
	COL_VERTEX(-34, 35, -143),
	COL_VERTEX(34, 0, -103),
	COL_VERTEX(34, 69, 103),
	COL_VERTEX(34, 0, 103),
	COL_VERTEX(-34, 35, 143),
	COL_VERTEX(34, 35, 143),
	COL_VERTEX(-34, 69, -34),
	COL_VERTEX(-34, 69, 34),
	COL_VERTEX(-34, 196, 34),
	COL_VERTEX(-34, 196, -34),
	COL_VERTEX(34, 196, 34),
	COL_VERTEX(0, 236, 0),
	COL_VERTEX(34, 196, -34),
	COL_VERTEX(34, 69, 34),
	COL_VERTEX(34, 69, -34),
	COL_VERTEX(-76, 236, 13),
	COL_VERTEX(-76, 367, 13),
	COL_VERTEX(-76, 367, -13),
	COL_VERTEX(-76, 236, -13),
	COL_VERTEX(-65, 251, -13),
	COL_VERTEX(-65, 352, -13),
	COL_VERTEX(65, 352, -13),
	COL_VERTEX(65, 251, -13),
	COL_VERTEX(76, 236, -13),
	COL_VERTEX(76, 367, -13),
	COL_VERTEX(76, 367, 13),
	COL_VERTEX(76, 236, 13),
	COL_VERTEX(-14, 143, -69),
	COL_VERTEX(-5, 135, -82),
	COL_VERTEX(-34, 150, -110),
	COL_VERTEX(-43, 158, -96),
	COL_VERTEX(-15, 131, -74),
	COL_VERTEX(-5, 147, -77),
	COL_VERTEX(-34, 161, -104),
	COL_VERTEX(-44, 146, -102),
	COL_VERTEX(-9, 132, -32),
	COL_VERTEX(9, 133, -36),
	COL_VERTEX(-1, 140, -78),
	COL_VERTEX(-19, 138, -74),
	COL_VERTEX(0, 141, -33),
	COL_VERTEX(0, 123, -36),
	COL_VERTEX(-9, 130, -77),
	COL_VERTEX(-10, 148, -74),
	COL_VERTEX(-39, 154, -103),
	COL_VERTEX(-45, 139, -111),
	COL_VERTEX(-67, 137, -120),
	COL_VERTEX(-64, 147, -115),
	COL_VERTEX(-79, 167, -112),
	COL_VERTEX(-33, 169, -95),
	COL_VERTEX(-48, 188, -92),
	COL_VERTEX(-51, 179, -97),
	COL_VERTEX(-75, 177, -106),
	COL_VERTEX(-45, 147, -87),
	COL_VERTEX(-67, 152, -79),
	COL_VERTEX(-64, 156, -89),
	COL_VERTEX(-79, 170, -104),
	COL_VERTEX(-33, 160, -119),
	COL_VERTEX(-48, 174, -133),
	COL_VERTEX(-51, 170, -123),
	COL_VERTEX(-75, 174, -115),
	COL_TRI_INIT(SURFACE_DEFAULT, 72),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(2, 4, 5),
	COL_TRI(2, 5, 6),
	COL_TRI(7, 4, 8),
	COL_TRI(7, 8, 9),
	COL_TRI(8, 1, 10),
	COL_TRI(8, 10, 11),
	COL_TRI(3, 7, 9),
	COL_TRI(3, 9, 0),
	COL_TRI(4, 2, 1),
	COL_TRI(4, 1, 8),
	COL_TRI(12, 13, 14),
	COL_TRI(12, 14, 15),
	COL_TRI(9, 8, 11),
	COL_TRI(1, 0, 10),
	COL_TRI(0, 9, 11),
	COL_TRI(0, 11, 10),
	COL_TRI(14, 16, 17),
	COL_TRI(3, 2, 6),
	COL_TRI(4, 7, 5),
	COL_TRI(7, 3, 6),
	COL_TRI(7, 6, 5),
	COL_TRI(18, 16, 19),
	COL_TRI(18, 19, 20),
	COL_TRI(15, 18, 20),
	COL_TRI(15, 20, 12),
	COL_TRI(16, 14, 13),
	COL_TRI(16, 13, 19),
	COL_TRI(15, 14, 17),
	COL_TRI(16, 18, 17),
	COL_TRI(18, 15, 17),
	COL_TRI(21, 22, 23),
	COL_TRI(21, 23, 24),
	COL_TRI(25, 26, 27),
	COL_TRI(25, 27, 28),
	COL_TRI(29, 30, 31),
	COL_TRI(29, 31, 32),
	COL_TRI(32, 31, 22),
	COL_TRI(32, 22, 21),
	COL_TRI(24, 29, 32),
	COL_TRI(24, 32, 21),
	COL_TRI(30, 23, 22),
	COL_TRI(30, 22, 31),
	COL_TRI(26, 25, 24),
	COL_TRI(26, 24, 23),
	COL_TRI(25, 28, 29),
	COL_TRI(25, 29, 24),
	COL_TRI(27, 26, 23),
	COL_TRI(27, 23, 30),
	COL_TRI(28, 27, 30),
	COL_TRI(28, 30, 29),
	COL_TRI(33, 34, 35),
	COL_TRI(33, 35, 36),
	COL_TRI(37, 38, 39),
	COL_TRI(37, 39, 40),
	COL_TRI(41, 42, 43),
	COL_TRI(41, 43, 44),
	COL_TRI(45, 46, 47),
	COL_TRI(45, 47, 48),
	COL_TRI(49, 50, 51),
	COL_TRI(49, 51, 52),
	COL_TRI(52, 51, 53),
	COL_TRI(49, 54, 55),
	COL_TRI(49, 55, 56),
	COL_TRI(56, 55, 57),
	COL_TRI(49, 58, 59),
	COL_TRI(49, 59, 60),
	COL_TRI(60, 59, 61),
	COL_TRI(49, 62, 63),
	COL_TRI(49, 63, 64),
	COL_TRI(64, 63, 65),
	COL_TRI_STOP(),
	COL_END()
};
