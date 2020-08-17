#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int max_odd = 0, min_even=100, number, result;
	for (int i = 0; i < 6; i++) {
		cin >> number;
		if (number / 2 ==0&&number<min_even) {
			min_even = number;
		}
		else if (number / 2 != 0 && number > max_odd) {
			max_odd = number;
		}
		else if continue
	}
	cout << abs(max_odd - min_even);
	return 0;
}