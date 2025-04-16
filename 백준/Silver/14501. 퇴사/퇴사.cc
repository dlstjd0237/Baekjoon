#include <iostream>
using namespace std;

int dp[1001] = { 0 , };
int cost[1001] = { 0, };
int day[1001] = { 0, };
int main()
{
	cin.tie()->sync_with_stdio(false);

	int n;

	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> day[i] >> cost[i];
	}

	int sum;
	for (int i = n; i > 0; i--) {
		sum = i + day[i];
		if (sum > n + 1) {
			dp[i] = dp[i + 1];
		}
		else {
			dp[i] = max(dp[i + 1], dp[sum] + cost[i]);
		}
	}

	std::cout << dp[1] << endl;

	return 0;
}