#include<iostream>
using namespace std;

char line[100] = { 0 };
char boy = { 0 };
char girl = { 0 };

int take_out_of_2() {
	for (int i = 1; i < 100; i++) {
		if (line[i] == girl && line[i - 1] == boy) {
			cout << i - 1 <<' '<<i<<endl;
			line[i] = 0; line[i - 1] = 0; continue;
		}
		if (line[i] == girl && line[i - 1] == 0) {
			for (int j = i - 2; j >= 0; j--) {
				if (line[j] == boy) {
					cout << j << ' ' << i<<endl;
					line[i] = 0; line[j] = 0;
					break;
			    }
			}
			continue;
		}
	}
	return 0;
}

int main() {
	cin.getline(line, 100);
	boy = line[0];
	for (int i = 1; i < 100; i++) {
		if (line[i] != boy) { girl = line[i]; break; }
	}
	take_out_of_2();
	return 0;
}