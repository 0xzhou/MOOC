#include<iostream>
using namespace std;

void check(int x[]) {
	int i = 0, b = 0;
	if (x[0] == 0) { 
		cout << "0";
		b = 1;
		return 0;
	}
	while (x[i]) {
		if (x[i] == i) {
			b = x[i];
			cout << b << endl;
			break;
		}
		i++;
	}
	if (b == 0)cout << "N"<<endl;
}
int main() {
	int n = 0, s[100] = { 0 };
	cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		check(s);
	return 0;
}