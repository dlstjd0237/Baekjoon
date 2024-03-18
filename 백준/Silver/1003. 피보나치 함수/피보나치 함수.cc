#include <iostream>
using namespace std;

int main()
{
	int count, num;
	int F[42] = { 1,0,1 };


	for (int i = 3; i <= 41; ++i)
	{
		F[i] = F[i - 1] + F[i - 2];
	}

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> num;

		cout << F[num] << " " << F[num + 1] << "\n";
	}
}