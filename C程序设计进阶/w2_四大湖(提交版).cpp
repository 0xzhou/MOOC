#include<iostream>
using namespace std;

int main() {
	int b = 0, d = 0, t = 0, h = 0;
	for (int b = 1; b <= 4; b++) {
		for (int d = 1; d <= 4; d++) {
			for (int t = 1; t <= 4; t++) {
				for (int h = 1; h <= 4; h++) {
					if ((b != d && b != t && b != h && d != t && d != h && t != h)
						&& ((d == 1) + (h == 4) + (b == 3) == 1)
						&& ((h == 1) + (d == 1) + (b == 2) + (t == 3) == 1)
						&& ((h == 4) + (d == 3) == 1)
					    && ((b == 1) + (t == 4) + (h == 2) + (d == 3) == 1)) {
						cout << b << endl << d << endl << t << endl << h << endl;
					}
				}
			}
		}
	}
	return 0;
}