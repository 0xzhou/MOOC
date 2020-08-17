#include <iostream>
using namespace std;

int main()
{
	int number, hundread, tens;
	cin >> number;
	cout <<number / 100<<endl;
	hundread = number / 100;
	cout << (number-hundread*100)/ 10<<endl;
	tens = (number - hundread*100) / 10;
	cout << number - tens * 10 - hundread * 100<<endl;
	return 0;
}