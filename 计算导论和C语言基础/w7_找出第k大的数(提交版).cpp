#include <iostream>
using namespace std;

int main()
{
	int N, K,max = 0;
	cin >> N;
	cin >> K;
	int num[100] = { 0 };
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	for (int j = 0; j < K;j++) {
		for (int i = 1; i < N; i++) {
			if (num[i - 1] > num[i]) {
				int temp = num[i];
				num[i] = num[i - 1];
				num[i - 1] = temp;
			}
		}
		max = num[N - K];
	}
	cout << max << endl;
	return 0;
}