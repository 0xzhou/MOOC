#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int m = 0;//病人的人数
	float a = 0;//入住ICU的最低值
	int flag = 0;//用来标注是否有严重病人
	cin >> m >> a;
	int number[50] = { 0 };//记录每个病人的编号
	float sit[50] = { 0 };//记录每个病人的患病情况
	for (int i = 0; i < m; i++) {
		cin >> number[i] >> sit[i];
	}
	for(int i=0;i<m;i++)
		for (int j = 1; j < m; j++) {
			if (sit[j-1] > sit[j]) {
				float temp_1 = sit[j]; int temp_2 = number[j];
				sit[j] = sit[j - 1]; number[j] = number[j - 1];//排序时病人编号要跟随sit；
				sit[j - 1] = temp_1; number[j - 1] = temp_2;
			}
		}
	for (int i = m-1; i >=0; i--) {
		if (sit[i] >= a) {
			cout << setfill('0') << setw(3) << number[i] <<" "<<fixed<<setprecision(1)<<sit[i]<<endl;
			flag= 1;
		}
	}
	if (flag == 0)cout << "None." << endl;



}