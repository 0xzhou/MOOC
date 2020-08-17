#include<iostream>
using namespace std;

int main() {
	int n = 0;
	int days = 0;
	int count = 0;
	cin >> n;//输入房间总大小
	char room[100][100] = { 0 };
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) {
			cin >> room[i][j];
		}
	cin >> days;
	for (int i = 1; i <=days; i++) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				if (room[i][j] == '!')room[i][j] = '@';
			}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++){
				if (room[i][j] == '@') {
					if ((room[i - 1][j] == '.')&&((i-1)>=0))room[i - 1][j] = '!';
					if ((room[i + 1][j] == '.')&&( (i + 1) < n))room[i + 1][j] = '!';
					if ((room[i][j-1] == '.' )&& ((j - 1) >= 0))room[i ][j-1] = '!';
					if ((room[i][j+1] == '.') && ((j + 1) < n))room[i][j+1] = '!';
				}
			}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (room[i][j] == '@')count++;
		}
	cout << count << endl;
	return 0;
}
