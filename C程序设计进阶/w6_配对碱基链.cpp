#include<iostream>
using namespace std;

int main() {
	int n = 0;//记录碱基链数目
	cin >> n;
	cin.ignore();
	char link[100][255];
	for (int i = 0; i < n; i++) {
			cin.getline(link[i],255);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 255; j++) {
			if (link[i][j] == 'A') { link[i][j] = 'T'; continue; }
			if (link[i][j] == 'T') { link[i][j] = 'A'; continue; }
			if (link[i][j] == 'G') { link[i][j] = 'C'; continue; }
			if (link[i][j] == 'C') { link[i][j] = 'G'; continue; }
			if (link[i][j] == 0)break;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0;j<255; j++) {
			if (link[i][j] != 0)
				cout << link[i][j];
			else break;
		}
		if (i!=n-1)cout << endl;
	}
	return 0;
}