#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie()->sync_with_stdio(false);

	int n, sum = 0;
	cin >> n;

	vector<int> v1(n, 0);
	vector<int> v2(n, 0);

	for (short i = 0; i < n; ++i)
	{
		cin >> v1[i];
	}

	for (short i = 0; i < n; ++i)
	{
		cin >> v2[i];
	}

	sort(v1.begin(), v1.end());
	sort(v2.rbegin(), v2.rend());
	for (short i = 0; i < n; ++i)
	{
		sum += v1[i] * v2[i];
	}

	cout << sum;

	return 0;
}