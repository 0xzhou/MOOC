#include<iostream>
#include<iomanip>

using namespace std;
bool change(int a[5][5], int n, int m) {//建立一个Bool函数，若输入的值符合要求，则
	bool flag = true;
	if ((n >= 0 && n <= 4) && (m >= 0 && m <= 4)) {
		int line_change[5] = { 0 };//建立一个空数组
		for (int i = 0; i < 5; i++)line_change[i] = a[n][i];//把第n行的值读取出来
		for (int i = 0; i < 5; i++)a[n][i] = a[m][i];//将第m行的值赋给第n行
		for (int i = 0; i < 5; i++)a[m][i] = line_change[i];//第n行的值赋给第m行
	}//交换第n行和第m行；
	else {
		flag = false;//若定义值域不符合要求，则返回错误
	}
return flag;
}

int main() {
	int matrix[5][5] = { 0 };
	int n=0, m=0;
	for (int i = 0; i < 5; i++) 
		for (int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
		}//输入矩阵，
	cin >> n >> m;
	bool flag = change(matrix, n, m);//对矩阵进行判定
	if (flag) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << setw(4) << matrix[i][j];
			}
			cout << endl;//输入完每行以后换行
		}
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}