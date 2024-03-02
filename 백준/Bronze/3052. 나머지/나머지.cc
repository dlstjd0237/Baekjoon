#include <iostream>
using namespace std;

int num[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

int qwer(int n, int c) {

	for (int i = 0; i < 10; i++)
	{
		if (c == i)
			continue;
		if (num[i] % 42 == n)
			return 0;
	}
	return 1;

}
int main()
{
	int sum = 0;
	for (int i = 0; i < 10; ++i)
	{
		cin >> num[i];
		//if (num[i] % 42 != 0)
		sum += qwer(num[i] % 42, i);
		num[i] %= 42;
	}
	/*sum = sum == 0 ? 1 : sum;*/
	cout << sum << endl;
}







