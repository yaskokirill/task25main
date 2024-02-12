#include <iostream>

using namespace std;

int distance_find(int n1, int n2);
int geron_formul(int a, int b, int c);

int main() {
	int x1;
	int x2;
	int x3;
	int y1;
	int y2;
	int y3;

	cout << "Input x1: ";
	cin >> x1;
	cout << "Input x2: ";
	cin >> x2;
	cout << "Input x3: ";
	cin >> x3;
	cout << "Input y1: ";
	cin >> y1;
	cout << "Input y2: ";
	cin >> y2;
	cout << "Input y3: ";
	cin >> y3;
	
	cout << "P = " << distance_find(x1, y1) + distance_find(x2, y2) + distance_find(x3, y3);
	cout << "S = " << geron_formul(distance_find(x1, y1), distance_find(x2, y2), distance_find(x3, y3));

	return 0;
}
