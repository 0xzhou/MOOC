#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0;
	char comma1 = 0, comma2 = 0;
	cin >> a >>comma1>> b>>comma2 >> c;
	if (c == a + b)cout << '+';
	else if (c == a - b)cout << '-'<<endl;
	else if (c == a * b)cout << '*'<<endl;
	else if (c == a / b)cout << '/'<<endl;
	else if (c == a % b)cout << '%'<<endl;
	else cout << "error" << endl;
	return 0;
}