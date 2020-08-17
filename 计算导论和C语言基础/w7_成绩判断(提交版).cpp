#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;
	if (score >= 95 && score <= 100)cout << "1";
	if (score >= 90 && score < 95)cout << "2";
    if (score >= 85 && score < 90)cout << "3";
	 if (score >= 80 && score < 85)cout << "4";
	  if (score >= 70 && score < 80)cout << "5";
	  if (score >= 60 && score < 70)cout << "6";
	 if (score < 60)cout << "7";
		return 0;
}