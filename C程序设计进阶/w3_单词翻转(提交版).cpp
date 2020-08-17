#include<iostream>
using namespace std;

char st[500] = { 0 };
int i = 0;
int turn() {
	char c = st[i];
	i++;
	if (st[i] == ' ' || st[i] == '\0') { cout << st[i - 1]; return 0; }
	else
    {
		turn();
		cout << c;
		return 0;
	}	
}
int main() {
	cin.getline(st,500);
	while (st[i]!='\0')//循环，
	{
		if (st[i] == ' ') { cout << ' '; i++; }
		else turn();
	}
	if (st[i] == '\0') {
		cout << endl;
		return 0;
	}
}