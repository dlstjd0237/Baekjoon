#include <iostream>
using namespace std;

int main()
{
	int count, num;
	int F[41] = { 0,1 };


	for (int i = 2; i <= 40; ++i)
	{
		F[i] = F[i - 1] + F[i - 2];
	}

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> num;
		if (num < 1) {

			cout << 1 << " " << 0 << "\n";
		}
		else
		{
			cout << F[num - 1] << " " << F[num] << "\n";

		}
	}
}