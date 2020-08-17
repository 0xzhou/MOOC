#include<iostream>
using namespace std;


int main() {
	int n = 0, s[100] = { 0 };
	int flag = 0;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> s[i];
			if (s[i] = i) { cout << i << endl; flag = 1; break; }
		}
		if (flag == 0) cout << "N" << endl;
	}
	return 0;
}