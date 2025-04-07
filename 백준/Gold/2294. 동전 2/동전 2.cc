#include <iostream>

int dp[10001] = { 0 };
int coin[10001] = { 0 };

int main() {
	std::cin.tie()->sync_with_stdio(false);
	int n, v, num, result, i, j;

	std::cin >> n >> v;


	for (i = 1; i <= v; ++i) {
		dp[i] = 10001;
	}

	for (i = 1; i <= n; ++i) {
		std::cin >> coin[i];
		for (j = coin[i]; j <= v; ++j)
		{
			dp[j] = std::min(dp[j], dp[j - coin[i]] + 1);
		}
	}

	if (dp[v] == 10001)
		std::cout << "-1" << std::endl;
	else
		std::cout << dp[v] << std::endl;

	return 0;
}