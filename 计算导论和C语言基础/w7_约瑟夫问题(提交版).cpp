#include <iostream>
using namespace std;

int succedent[300];//这个数组用于保存一个猴子的下一位是谁
int precent[300];//保存猴子的前一个是谁

int main()
{
	int n, m;
	while (true) 
	{
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		for (int i = 0; i < n - 1; i++) {
			succedent[i] = i + 1;
			precent[i + 1] = i;
		}
		succedent[n - 1] = 0;
		precent[0] = n - 1;

		int current = 0;
		while (true) {
			for (int count = 0; count < m - 1; count++)
				current = succedent[current];

				int pre = precent[current];
				int suc = succedent[current];

				succedent[pre] = suc;
				precent[suc] = pre;//让current猴子退出很简单，即令current猴子后一个猴子的前者为current的前者；
		                          //令current猴子前者的后者为current的后者；
				if (pre == suc) {
					cout << pre + 1 << endl;
					break;
				}
				current = suc;
			}
		}
	return 0;
}