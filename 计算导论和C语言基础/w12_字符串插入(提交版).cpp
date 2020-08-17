#include<iostream>
using namespace std;

int main() {
	char str[14] = { 0 }, substr[4] = { 0 };
	while (cin >> str >> substr) {
		int i = 0;
		char a_max = 0;
		int flag = 0;
		while(str[i]){
			if (str[i] > a_max) {
				a_max = str[i];
				flag = i + 1;
			}
			i++;
		}
		for (int j = 9; j >flag-1; j--) {
			str[j + 3] = str[j];
		}
		str[flag] = substr[0];
		str[flag + 1] = substr[1];
		str[flag + 2] = substr[2];
		cout << str << endl;
	}
	return 0;
}