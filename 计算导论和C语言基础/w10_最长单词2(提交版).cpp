#include<iostream>
using namespace std;

int main() {
	char s[500] = { 0 };
	cin.getline(s, 500, '.');
	int count = 0, count_max = 0;
	int end = 0;//用来标定最长单词的尾
	for (int i = 0; i < 500; i++) {
		if (s[i] != ' '&&s[i] != '\0'&&s[i] != '.') {
			count++;
			if (count > count_max) {
				count_max = count;
				end = i;
			}
		}
		if (s[i] == '.' || s[i] == '\0') {
				break;
			}
		if (s[i] == ' ') {
			count = 0;
		}
	}
	for (int i = end - count_max + 1; i <=end; i++) {
			cout << s[i];
		}
	return 0;
}