#include <iostream>

using namespace std;

bool is_number_interesting(int num);

int main() {
	int n;
	string msg;

	do {
		cout << "Input a 3-digit number: ";
		cin >> n;
	} while (n < 100 || n > 999);

	msg = is_number_interesting(n) ? "This is an interesting number" : "No, this is not an interesting number";
	cout << msg;

	return 0;
}