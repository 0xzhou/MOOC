#include <iostream>
using namespace std;

int main()
{
	int sum = 0, A, a[5], b[5] = { 0 };
	cin >> A;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		if (a[i] < A)b[i] = a[i];
		sum += b[i];
	}
	cout<<sum<<endl;
	return 0;
}