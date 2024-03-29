#include <iostream>
using namespace std;
int main()
{
	int N, M, max1, max2, a;
	cin >> N >> M;

	cin >> max1;

	for (int i = 0; i < N - 1; i++)
	{
		cin >> a;

		max1 = max1 < a ? a : max1;
	}
	cin >> max2;
	for (int i = 0; i < M - 1; ++i)
	{
		cin >> a;

		max2 = max2 < a ? a : max2;
	}
	cout << max1 + max2;
}

