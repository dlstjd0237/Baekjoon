#include <iostream>
using namespace std;

int arr[100007] = { 0 };
int dp[100001] = { 1 };
int main()
{
	cin.tie()->sync_with_stdio(false);

	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
		dp[i] = 1;
	}

	for (int i = 2; i <= n; ++i)
	{
		for (int j = 1; j < i; ++j) {
			if (arr[i] <arr[j]) {

				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	for (int i = 1; i <= n; ++i) {
		count = max(count, dp[i]);
	}

	cout << count;
	return 0;
}