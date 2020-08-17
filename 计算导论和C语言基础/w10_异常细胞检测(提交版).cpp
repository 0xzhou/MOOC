#include<iostream>
#include<cmath>
using namespace std;

int check_number(int photo[100][100], int N) {
	int number=0;
	for (int i=1; i<N-1; i++)
		for (int j = 1; j <N-1; j++) {
			bool a= abs(photo[i][j] - photo[i-1][j]) >= 50;
			bool b= abs(photo[i][j] - photo[i+1][j]) >= 50;
			bool c= abs(photo[i][j] - photo[i][j-1]) >= 50;
			bool d= abs(photo[i][j] - photo[i][j+1]) >= 50;
			if (a && b && c && d) {
				number++;
			}
		}
	return number;
}

int main() {
	int N = 0, num = 0;
	cin >> N;
	int pic[100][100] = { 0 };
	for (int i = 0; i <N; i++)//从第一行开始，依次录入行
		for (int j = 0; j <N;j++) {//从某行，依次输入元素，个数为列数目
		cin >> pic[i][j];
	}
	num = check_number(pic, N);
	cout << num;
	return 0;
}