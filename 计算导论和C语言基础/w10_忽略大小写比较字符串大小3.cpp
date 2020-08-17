#include <iostream>
using namespace std;

int main()
{
	char s1[80] = { 0 }, s2[80] = { 0 };
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	char result = 0;
	for (int i = 0; i < 80; i++) {//依次操作字符串的每一位字符
		//先同一将大写化成小写
		if (s1[i] >= 'A'&&s1[i] <= 'Z')s1[i] += ('a' - 'A');
		if (s2[i] >= 'A'&&s2[i] <= 'Z')s2[i] += ('a' - 'A');
		if (s1[i] == s2[i]) {
			result = '=';
			continue;//若字符相等，则进行下一位的判定
		}
		if (s1[i] > s2[i]) {
			result = '>';
			break;//以第一个不相同的字符的比较结果为准
		}
		if (s1[i] < s2[i]) {
			result = '<';
			break;
		}
	}
	cout << result << endl;
	return 0;
}

