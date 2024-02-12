#include <cmath>

int distance_find(int n1, int n2) {
	int d = 0;

	if (n1 > n2) {
		d = n1 - n2;
	}
	else {
		d = n2 - n1;
	}

	return d;
}

double geron_formul(int a, int b, int c) {
	int answer;
	int p = (a + b + c) / 2;

	answer = sqrt(p*(p - a)*(p - b)*(p - c));

	return answer;
}
