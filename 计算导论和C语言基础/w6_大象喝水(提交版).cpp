#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int h, r;
	float pi = 3.14159;
	cin >> h >> r;
	cout << ceil(20 / (pi*r*r*h) * 1000);
	return 0;
}