#include<iostream>
using namespace std;

int main() {
	int x[100] = { 0 };
	int y[100] = { 0 };
	int n = 0;
	cin >> n;
	int num = 1;
	int k = 0;//记录极大值点的个数
	bool ch[100] = { 0 };//记录每个点的极大值情况，若是，则设为1
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		ch[i] = 1;
	}
	for (int i=0;i<n;i++)
		for (int j = 1; j < n; j++) {
			if (x[j - 1] > x[j]) {
				int temp1 = x[j]; 
				x[j] = x[j - 1];
				x[j - 1] = temp1;
				int temp2 = y[j];
				y[j] = y[j - 1];
				y[j - 1] = temp2;
			}
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (x[j] >= x[i] && y[j] >= y[i] && i != j) {
				ch[i] = 0; break;
			}
		}
		if (ch[i] == 1)k++;
	}
	for (int i = 0; i < n; i++) {
		if (ch[i] == 1 && num != k) { cout << '(' << x[i] << ',' << y[i] << ')' << ','; num++; }
		else if (ch[i] == 1 && num == k){cout << '(' << x[i] << ',' << y[i] << ')'; break;}
	}
	return 0;
}