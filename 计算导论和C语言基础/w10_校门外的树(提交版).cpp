#include<iostream>
using namespace std;


int main() {
	int tree[10001] = { 0 };
	int M = 0, L = 0;
	int count = 0;
	cin >> L >> M;
	for (int i = 0; i <= L; i++) {
		tree[i] = 1;
	}
	for (int i = 1; i <=M; i++) {
		int f = 0, b = 0;
		cin >> f >> b;
		for (int j = f; j <= b; j++) {
			tree[j] = 0;
		}
	}
	for (int i = 0; i <=L; i++) {
		if (tree[i] == 1)count++;
	}
	cout << count;
	return 0;
}
