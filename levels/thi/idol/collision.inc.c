const Collision idol_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(16),
	COL_VERTEX(-200, 0, 200),
	COL_VERTEX(-200, 111, 200),
	COL_VERTEX(-200, 111, -200),
	COL_VERTEX(-200, 0, -200),
	COL_VERTEX(200, 111, -200),
	COL_VERTEX(200, 0, -200),
	COL_VERTEX(200, 111, 200),
	COL_VERTEX(200, 0, 200),
	COL_VERTEX(-105, 111, 105),
	COL_VERTEX(105, 111, 105),
	COL_VERTEX(105, 871, 105),
	COL_VERTEX(-105, 871, 105),
	COL_VERTEX(-105, 111, -105),
	COL_VERTEX(105, 111, -105),
	COL_VERTEX(105, 871, -105),
	COL_VERTEX(-105, 871, -105),
	COL_TRI_INIT(SURFACE_DEFAULT, 26),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(7, 6, 1),
	COL_TRI(7, 1, 0),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI(8, 12, 2),
	COL_TRI(8, 2, 1),
	COL_TRI(12, 13, 4),
	COL_TRI(12, 4, 2),
	COL_TRI(13, 9, 6),
	COL_TRI(13, 6, 4),
	COL_TRI(9, 8, 1),
	COL_TRI(9, 1, 6),
	COL_TRI(14, 15, 11),
	COL_TRI(14, 11, 10),
	COL_TRI(13, 12, 15),
	COL_TRI(13, 15, 14),
	COL_TRI(9, 13, 14),
	COL_TRI(9, 14, 10),
	COL_TRI(12, 8, 11),
	COL_TRI(12, 11, 15),
	COL_TRI_STOP(),
	COL_END()
};
