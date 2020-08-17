#include<iostream>
using namespace std;

int main() {
	int m = 0;
	int l[5] = { 0 };
	int sum = 0, num = 0;
	int k = 0;
	bool flag=0;//首先判断能够被19整除
	cin >> m >> k;
	if (m % 19 == 0)flag = 1;
	else {
		cout << "NO" << endl; return 0;
	}
	for (int i = 0;i<5; i++) {
		l[i] = m % 10;
		m = m / 10;
		if (l[i] == 3)num++;

	}
	if (flag == 1 && num == k)cout << "YES" << endl;
	else cout << "NO"<<endl;
	return 0;
}