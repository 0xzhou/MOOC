#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	float id_amount[3] = { 0 }, type_amount[3] = { 0 };
	char type = 'A';
	char ftype[3] = { 'A','B','C' };
	for (int i = 1; i <= 3;i++) {
		int id = 0,number = 0;
		cin >> id >> number;
		for (int i = 1; i <= number; i++) {
			float amount = 0;
			cin >> type >> amount;
			if (type == 'A')type_amount[0] += amount;
			if (type == 'B')type_amount[1] += amount;
			if (type == 'C')type_amount[2] += amount;
			id_amount[id - 1] += amount;
		}
	}
	for (int i = 1; i <= 3; i++) {
		cout << fixed<<setprecision(2)<<i <<" "<<id_amount[i - 1] << endl;
	}
	for (int j = 0; j < 3; j++) {
		cout << fixed << setprecision(2)<<ftype[j] << " " << type_amount[j]<<endl;
	}
	return 0;
}