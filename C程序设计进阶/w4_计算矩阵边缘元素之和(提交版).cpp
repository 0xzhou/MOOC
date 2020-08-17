#include<iostream>
using namespace std;

int main() {
	int k = 0;//定义矩阵的个数
	int m = 0, n = 0;
	int a[100][100] = { 0 };
	int sum[100] = { 0 };
	cin >> k;
	for (int l = 1; l <= k; l++) {//依次录入矩阵
		cin >> m >> n;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				if (i ==0 || i == m - 1)sum[l] += a[i][j];
				else if (j == 0 || j == n - 1)sum[l] += a[i][j];
			}
	}
	for (int l = 1; l <= k; l++) {
		cout << sum[l]<<endl;
	}
	return 0;
}