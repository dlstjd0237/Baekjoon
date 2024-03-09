#include <iostream>
using namespace std;

int main()
{
	int l, p, sum;
	int w[5] = { 0 };

	cin >> l >> p;
	sum = l * p;
	for (int i = 0; i < 5; ++i)
	{
		cin >> w[i];
		w[i] -= sum;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << w[i] << " ";
	}
}