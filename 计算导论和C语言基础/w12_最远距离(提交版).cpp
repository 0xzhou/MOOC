#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	float x[20] = { 0 };
	float y[20] = { 0 };
	double dis = 0, dis_max = 0;
	for(int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n-1; i++)
		for (int j = 1; j < n; j++) {
			dis = sqrt((x[i] - x[j])*(x[i] - x[j])+ (y[i] - y[j])*(y[i] - y[j]));
			if (dis > dis_max)dis_max = dis;
		}
	cout << fixed << setprecision(4) << dis_max << endl;
	return 0;
}