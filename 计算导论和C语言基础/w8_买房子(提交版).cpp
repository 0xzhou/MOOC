#include <iostream>

using namespace std;
int main()
{
	double salary, rate;
	while (cin >> salary >> rate) {
		double preise = 200;
		double year = 0;
		while(true) {
			year++;
			if ((salary*year) >= preise)
			{
				cout << year << endl; break;
			}
			if (year > 20)
			{
				cout << "Impossible" << endl; break;
			}
			preise*=(1+rate/100);
		}
	}
	return 0;
}