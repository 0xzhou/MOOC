#include <iostream>
using namespace std;

int main()
{
	int price;
	cin >> price;
	if (price <= 1000&&price>0) {
		int count_100 = price / 100;
	    cout << count_100<<endl;
		int count_50 = (price % 100) / 50;
		cout << count_50 << endl;
		int count_20 = (price % 100 % 50) / 20;
		cout << count_20 << endl;
		int count_10 = (price % 100 % 50 % 20) / 10;
		cout << count_10 << endl;
		int count_5 = (price % 100 % 50 % 20 % 10) / 5;
		cout << count_5 << endl;
		int count_1 = price % 100 % 50 % 20 % 10 % 5;
		cout << count_1;
	}
}