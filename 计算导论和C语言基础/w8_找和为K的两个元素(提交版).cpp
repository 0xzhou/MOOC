#include <iostream>
using namespace std;

int main()
{
	int list[1000] = { 0 }, n,k;
	cin >> n >>k;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = 1; j < n; j++) {
			if (bool add = list[i] + list[j] == k)
			{
				cout << "yes" << endl; 
				i = j = 1000;
			}
		}
	}
}