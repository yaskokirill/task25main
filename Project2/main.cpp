#include <iostream>

using namespace std;

int field_color_check(int x, int y);

int main() {
	int x1;
	int x2;
	int y1;
	int y2;
	string msg;

	do {
		cout << "Input x1, y1, x2, y2: ";
		cin >> x1;
		cin >> y1;
		cin >> x2;
		cin >> y2;
	} while (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8);

	msg = field_color_check(x1, y1) == field_color_check(x2, y2) ? "Yes, these fields have the same color" : "No, these fields are different";
	cout << msg;

	return 0;
}