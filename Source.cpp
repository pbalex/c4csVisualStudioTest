#include <iostream>
using namespace::std;

//test
int main() {
	int n;
	cin >> n;
	int num_operations = 0;

	while (n != 1) {
		if (n % 3 == 0) {
			n = n / 3;
		}
		else if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			--n;
		}
		++num_operations;
	}

	cout << endl << num_operations;

	return 0;
}