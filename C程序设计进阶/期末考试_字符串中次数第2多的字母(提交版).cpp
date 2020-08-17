#include<iostream>
using namespace std;
int main() {
	char a[501]= { 0 };
	int num[26] = { 0 };//创建一个数组，记录各字母出现的次数
	cin.getline(a, 501);
	char count[26] = { 0 };//创建一个数组，保存字母的原型，count[0]='a',count[25]='z'
	int smax = 0;
	char maxc = 0, Mmaxc = 0;
	int l = strlen(a);//记录字符串的长度
	for (int i = 0; i < 26; i++) {//给count赋值，从a到z；
		count[i] = i+97;
	}
	for (int i = 0; i < l; i++) {
		for (char b = 'A'; b <= 'Z'; b++) {//如果字符为大写，转换为小写
			if (a[i] == b) {
				a[i] = a[i] + 32; break;
			}
		}
		for (char b = 'a'; b <= 'z'; b++) {//如果字母匹配，该字母num加1；
			if (a[i] == b) { num[b-97]++; break; }
		}	
	}
	for (int i=0;i<26;i++)
		for (int j = 1; j < 26; j++) {//最初创建时，num[0]为a出现的个数；num[25]为z出现的个数
			if (num[j - 1] > num[j]) {
				int temp = num[j]; 
				num[j] = num[j - 1];
				num[j - 1] = temp;
				char temp_2 = count[j];
				count[j] = count[j - 1];
				count[j - 1] = temp_2;
			}
		}//结束后，count里记录的是出现次数升序的元素，num里记录的是升序的出现次数
	int max = num[25];//提取最大的出现次数
	for (int i = 25; i >= 0; i--) {//提取第二num的值，返回为smax
		if (num[i] == max){ num[i] = 0; continue; }
		if (num[i] != max) { smax = num[i]; break; }
	}
	for (int i = 0; i < 26; i++) {
		if (num[i] != smax)count[i] = '*';
	}
	for (int i = 0; i < l; i++) 
		for (int j = 0; j < 26; j++) {
			if (a[i] == count[j] && a[i] != '*' && count[j] != '*')
			{
				maxc = count[j]; Mmaxc = maxc - 32; break;
			}
		}
	cout << Mmaxc << '+' << maxc << ':' << smax << endl;
	return 0;
}