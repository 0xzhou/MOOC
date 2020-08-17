#include <iostream>
using namespace std;

int main()
{
	float s[100] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		float time_walk = s[i] / 1.2;
		float time_bike = 27 + 23 + s[i] / 3.0;
		if (time_walk < time_bike)cout << "Walk" << endl;
		else if (time_bike < time_walk)cout << "Bike" << endl;
		else cout << "All"<<endl;
	}
	return 0;
}