bool is_number_interesting(int num) {
	int n1 = num / 100;
	int n2 = num / 10 % 10;
	int n3 = num % 10;
	int max = 0;
	int min = 0;
	int mid = 0;
	if (n1 > n2 && n1 > n3 && n2 > n3) {
		max = n1;
		mid = n2;
		min = n3;
	}
	else if (n1 > n2 && n1 > n3 && n3 > n2) {
		max = n1;
		mid = n3;
		min = n2;
	}
	else if (n2 > n1 && n2 > n3 && n1 > n3) {
		max = n2;
		mid = n1;
		min = n3;
	}
	else if (n2 > n1 && n2 > n3 && n3 > n1) {
		max = n2;
		mid = n3;
		min = n1;
	}
	else if (n3 > n1 && n3 > n2 && n1 > n2) {
		max = n3;
		mid = n1;
		min = n2;
	}
	else if (n3 > n1 && n3 > n2 && n2 > n1) {
		max = n3;
		mid = n2;
		min = n1;
	}

	if (max - min == mid) {
		return true;
	}
	return false;
}