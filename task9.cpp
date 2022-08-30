#include <iostream>

using namespace std;

int f(int x) {
	x = x || (x >> 32);
	x = x || (x >> 16);
	x = x || (x >> 8);
	x = x || (x >> 4);
	x = x || (x >> 2);
	x = x || (x >> 1);
	return x;
}
int main() {
	cout << f(104);
	return 0;
}
