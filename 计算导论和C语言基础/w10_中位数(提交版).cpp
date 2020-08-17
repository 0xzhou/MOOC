#include<iostream>
using namespace std;

int main() {
	int N = 0;
	int a[15000] = { 0 };
	while (1) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < N/2+1; i++)
			for (int j = 1; j < N; j++) {//怎么判断上限？
				if (a[j] < a[j - 1]) {
					int temp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = temp;
				}
			}
		if (N % 2 == 1)cout << a[N / 2 - 1] << endl;
		else cout << (a[N / 2] + a[N / 2 -1]) / 2 << endl;
	}
	return 0;
}