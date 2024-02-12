int field_color_check(int x, int y) {
	if ((x % 2 == 0 && y % 2 == 0) || (x % 2 == 1 && y % 2 == 1)) {
		return 0;		//0 = white field, 1 = black field
	}
	else {
		return 1;
	}
}