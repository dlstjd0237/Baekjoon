#include <iostream>
using namespace std;

int arr[504][504] = { 0 };
int dp[504][504] = { 0 };
int r = -1;

int main()
{
	cin.tie()->sync_with_stdio(false);

	int n;
	cin >> n;



	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cin >> arr[i][j];
	}

	dp[1][1] = arr[1][1];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= n; ++j)
		{
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		if (r < dp[n][i])
			r = dp[n][i];
	}

	cout << r;

	return 0;
}
