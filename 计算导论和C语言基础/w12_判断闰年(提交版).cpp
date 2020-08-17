#include<iostream>
using namespace std;

int main()  {
	int year = 0;
	cin >> year;
	if(year%400==0) cout<<"Y";
	else if (year % 4 == 0 && year % 100 != 0)cout << "Y";
	else cout << "N";
	return 0;
}