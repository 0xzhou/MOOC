#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	char c = 0;
	while (cin >> a >> b >> c) {
		if (c == '+')cout << a + b<<endl;
		else if (c == '-')cout << a - b<<endl;
		else if (c == '*')cout << a * b<<endl;
		else if (c == '/'&&b != 0)cout << a /b<<endl;
		else if (c == '/'&&b == 0)cout << "Divided by zero!" << endl;
		else cout << "Invalid operator!";
	}
	return 0;
}