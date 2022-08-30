#include <iostream>

using namespace std;

unsigned int m_nod(unsigned int a, unsigned int b) {
	if (a == b)
		return a;
	if (a > b)
		return m_nod(a - b, b);
	return m_nod(a, b - a);
}

unsigned int m_nok(unsigned int a, unsigned int b) {
	return (a*b) / m_nod(a, b);
}

int main() {
	int nod = 4;
	int nok = 80;
	int min = INT_MAX;
	int max = 0;

	for (int a = nod; a <= nok; a += nod) {
		for (int b = nod; b <= nok; b += nod) {
			if (m_nok(a, b) == nok && m_nod(a, b) == nod) {
				if (a + b > max)
					max = a + b;
				
				if (a + b < min)
					min = a + b;
			}
		}
	}

	cout << min << " " << max << endl;
	system("pause");
	return 0;
}
