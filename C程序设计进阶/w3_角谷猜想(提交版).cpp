#include<iostream>
using namespace std;

int make(int t) {
	if (t == 1)return 0;
	if (t % 2 == 1) {
		cout << t << "*3" << "+1=" << 3 * t + 1<<endl;
		make(3 * t + 1);
	}
	if (t % 2 == 0) {
		cout << t << "/2=" << t / 2<<endl;
		make(t / 2);
	}
	return 0;
}
int main() {
	int number = 0;
	cin >> number;
	make(number);
	cout << "End";
	return 0;
}