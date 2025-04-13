#include <iostream>
#include <algorithm>


int main() {
	std::cin.tie(0)->std::ios::sync_with_stdio(0);
	int t, k, n;

	std::cin >> t;
	while (t--) {
		std::cin >> k >> n;
		int dp[15][15] = { 0, };
		for (int i = 1; i <= n; ++i)
		{
			dp[0][i] = i;
		}

		for (int i = 1; i <= k; ++i) {
			dp[i][1] = 1;
		}

		for (int i = 1; i <= k; ++i) {
			for (int j = 2; j <= n; ++j) {
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			}
		}
		std::cout << dp[k][n] << '\n';
	}

}