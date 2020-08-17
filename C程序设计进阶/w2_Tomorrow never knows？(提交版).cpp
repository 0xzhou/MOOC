#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int year = 0, month = 0, day = 0;
	char a = 0, b = 0;
	cin >> year >> a >> month >> b >> day;
	bool leapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		if (day == 31) {
			month++;
			day = 1;
		}
		else {
			day++;
		}
		break;
	case 12:
		if (day == 31) {
			year++;
			month = 1;
			day = 1;
		}
		else {
			day++;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (day == 30) {
			month++;
			day = 1;
		}
		else {
			day++;
		}
		break;
	case 2:
		if (leapyear) {
			if (day == 29) {
				month++;
				day = 1;
			}
			else { day++; }
		}
		else {
			if (day == 28) {
				month++;
				day = 1;
			}
			else { day++; }
		}
		break;
    default:
           break;
    }
	cout << setw(4) << year << '-' << setfill('0') << setw(2) << month << '-'
		<< setfill('0') << setw(2) << day << endl;
	return 0;
	}