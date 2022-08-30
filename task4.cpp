#include <iostream>

using namespace std;

int main() {
	unsigned long counter = 0;
	unsigned long max = pow(10, 12);
	for (unsigned long i = 1; i <= max; i++) {
		if ((i % 3 || i % 10) && i % 15 == 0)
			counter++;
	}
	cout << counter;
	system("pause");
	return 0;
}
