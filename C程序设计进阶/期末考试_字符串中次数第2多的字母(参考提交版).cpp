
#include<iostream>

#include <cstdlib>

#include <cstring>

#include <vector>

int n = 0;

using namespace std;

char* letter(char *str) {//过滤字母外的东西

	int i = 0, j = 0;

	static char newstr[500];

	char *p;

	char tmp;

	p = newstr;

	while (*(str + i) != '\0') {

		tmp = *(str + i);

		if ((tmp >= 'A' && tmp <= 'Z') || (tmp >= 'a' && tmp <= 'z')) {

			*(p + j) = tmp;

			j++;

			n++;

		}

		i++;

	}

	return newstr;

}

int k = 0;//出现的字母个数  



struct alpha {//用于保存出现的字母以及其个数  

	char letter;

	int time;

};

alpha strOut[500] = { '\0' };

int deal(char input) {//对于字母，进行处理，  

	bool find = false;

	for (int i = 0; i < k + 1; i++) {//出现过的字母，个数+1  

		if (input == strOut[i].letter) {

			find = true;

			strOut[i].time++;

			break;

		}

	}

	if (find == false) {//没出现过的字母，进行初始化，保存其字母，出现次数设定为1  

		strOut[k].letter = input;

		strOut[k].time = 1;

		k++;

	}

	return 0;

}

int main() {

	char str[500] = { '\0' };

	cin.getline(str, 500);

	int m = strlen(str);

	char *newstr;

	newstr = letter(str);

	for (int i = 0; i < m; i++) {

		if (newstr[i] >= 'A'&&newstr[i] <= 'Z') newstr[i] += 32;//转换大小写

	}



	for (int i = 0; i < 501; i++) {

		if (newstr[i] == '\0')

			break;

		else {

			deal(newstr[i]);

		}

	}









	alpha larggest = { ' ',0 };

	alpha second = { ' ',0 };

	for (int i = 0; i < k - 1; i++) {//通过最大值和次大值两个变量，最后找到次大值  

		if (strOut[i].time > larggest.time) {

			second = larggest;

			larggest = strOut[i];

		}

		else if (strOut[i].time > second.time&& strOut[i].time < larggest.time) {

			second = strOut[i];

		}

	}

	char temp = second.letter - 32;

	cout << temp << '+' << second.letter << ':' << second.time;





	return 0;







}
