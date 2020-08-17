#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	if (y%x == 0 && n - y / x >= 0) {
		cout << n - y / x << endl;
	}
	else if (y%x != 0 && n - y / x - 1 >= 0) {
		cout << n - y / x - 1 << endl;
	}
	else
		cout << 0 << endl;
	return 0;
}