#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, age;
	int a = 0, b = 0, c = 0, d = 0;
    double A=0, B=0, C=0, D=0;
	cin >> n;
	int e = n;//此行必须要有，随时循环进行，n的值在改变
	while (n--) {
		cin >> age;
		if (age >= 1 && age <= 18)a++;
		else if (age >= 19 && age <= 35)b++;
		else if (age >= 36 && age <= 60)c++;
		else if(age >= 60)d++;
	}
	A = a*100.0/ e;
	B = b*100.0/ e;
	C = c*100.0/ e;
	D = d*100.0/ e;
	cout <<fixed<< "1-18: " << setprecision(2) << A<<"%"<<endl;
	cout << "19-35: " << B <<"%"<<endl;
	cout << "36-60: " << C <<"%"<< endl;
	cout << "60-: " << D << "%"<<endl;
	return 0;
}