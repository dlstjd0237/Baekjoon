#include <iostream>
#include <vector>

int main() {
	std::cin.tie(0)->std::ios::sync_with_stdio(0);

	int n, k;
	std::cin >> n >> k;

	std::vector<std::vector<long long>> dp(n + 1, std::vector<long long>(k + 1, 0));

	for (int i = 0; i <= n; ++i) {
		dp[i][0] = 1;
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= std::min(k, i); ++j)
		{
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}


	std::cout << dp[n][k];

}