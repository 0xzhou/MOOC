#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int number[100] = { 0 };//培养皿的编号
	float a[100] = { 0 }, b[100] = { 0 };//细菌数量，a为实验前，b为试验后
	float rate[100] = { 0 };//细菌的繁殖率
	int flag = 0;
	for (int i = 0; i < n; i++) {
		cin >> number[i] >> a[i] >> b[i];
		rate[i] = b[i] / a[i];
	}
	for(int i=0;i<n;i++)
		for (int j = 1; j < n; j++) {
			int temp = 0; float temp1 = 0;
			if (rate[j - 1] > rate[j]) {
				temp = number[j]; temp1 = rate[j];
				number[j] = number[j - 1]; rate[j] = rate[j - 1];
				number[j - 1] = temp; rate[j - 1] = temp1;
			}
		}
	for (int i = 1; i < n; i++) {
		if ((rate[i] - rate[i - 1]) > (rate[i + 1] - rate[i])) {
			 flag = i; break;
		}
	}
	cout << n - flag << endl;
	for (int i = flag; i < n; i++) {
		cout << number[i] << endl;
	}
	cout << flag << endl;
	for (int i = 0; i < flag; i++) {
		cout << number[i] << endl;
	}





}