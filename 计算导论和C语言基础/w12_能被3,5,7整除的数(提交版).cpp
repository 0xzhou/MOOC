#include<iostream>
using namespace std;

int main() {
	int number = 0;
	while (cin >> number) {
		if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0)cout << "3 5 7" << endl;
		if (number % 3 == 0 && number % 5 == 0 && number % 7 != 0)cout << "3 5" << endl;
		if (number % 3 == 0 && number % 5 != 0 && number % 7 == 0)cout << "3 7"<<endl; 
		if (number % 3 != 0 && number % 5 == 0 && number % 7 == 0)cout << "5 7"<<endl; 
		if (number % 3 == 0 && number % 5 != 0 && number % 7 != 0)cout << "3"<<endl; 
		if (number % 3 != 0 && number % 5 == 0 && number % 7 != 0)cout << "5"<<endl; 
		if (number % 3 != 0 && number % 5 != 0 && number % 7 == 0)cout << "7"<<endl; 
		if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0)cout << "n"<<endl; 
	}
	return 0;
}