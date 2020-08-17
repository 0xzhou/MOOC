#include<iostream>
using namespace std;

int main() {
	int row=0, col=0;
	cin >> row >> col;
	int array[100][100];
	for (int i=0;i<row;i++)
		for (int j = 0; j < col; j++) {
			cin >> array[i][j];
		}
	int k = row + col - 1;//一共有k条对角线
	for (int m = 1; m <= k; m++) {//对每条对角线进行处理
		int c = m - 1;
		if (m>= 1 && m <= col) {
			for (int r = 0; r < row; r++) {
				if (c >= 0) {
					cout << array[r][c] << endl;
					c--;
				}
			}
			
		}
		if (m>col)
		{
			int d = m - col;
			int e = col - 1;
			for (int r = d; r < row; r++) {
				if (e >= 0)
				{
					cout << array[r][e] << endl;
					e--;
				}
			}
		
		}		
	}
return 0;
}