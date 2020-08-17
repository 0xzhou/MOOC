#include<iostream>
using namespace std;

int main() {
	int n = 0, m = 0;
	int s[20] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < m; i++) {//每次右移动一个单位
		int temp = s[0];
		int temp1 = s[1];
		int temp2 = s[n - 1];
        for (int j = 1; j < n; j++) {//从这里开始循环，从第2个元素开始每个元素向右移动一位
			temp1 = s[j];//把后方元素提取出
			s[j] = temp;//前面元素赋值给后面元素，达到右移的作用
			temp = temp1;//把之前提取的后方元素赋给前面元素，达到循环的目的
		}
		s[0] = temp2;
	}
	for (int i = 0; i < n; i++) {
		cout << s[i]<<' ';
	}
}