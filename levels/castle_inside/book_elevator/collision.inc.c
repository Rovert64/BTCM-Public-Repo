const Collision book_elevator_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(430, -26, -220),
	COL_VERTEX(430, 26, -220),
	COL_VERTEX(712, 26, -220),
	COL_VERTEX(712, -26, -220),
	COL_VERTEX(712, 26, 220),
	COL_VERTEX(712, -26, 220),
	COL_VERTEX(430, 26, 220),
	COL_VERTEX(430, -26, 220),
	COL_TRI_INIT(SURFACE_DEFAULT, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(0, 3, 5),
	COL_TRI(0, 5, 7),
	COL_TRI(2, 1, 6),
	COL_TRI(2, 6, 4),
	COL_TRI_STOP(),
	COL_END()
};
