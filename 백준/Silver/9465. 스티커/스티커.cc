#include <iostream>


int main() {
	std::cin.tie(0)->std::ios::sync_with_stdio(0);
	int t, m = 0;

	std::cin >> t;

	for (int i = 0; i < t; ++i) {
		int n;
		std::cin >> n;

		int map[2][100001];
		int dp[2][100001];

		for (int r = 0; r < 2; ++r) {
			for (int c = 1; c <= n; ++c) {
				std::cin >> map[r][c];
			}
		}

		dp[0][0] = map[1][0] = 0;
		dp[0][1] = map[0][1];
		dp[1][1] = map[1][1];

		for (int c = 2; c <= n; ++c) {
			dp[0][c] = std::max(dp[1][c - 1], dp[1][c - 2]) + map[0][c];
			dp[1][c] = std::max(dp[0][c - 1], dp[0][c - 2]) + map[1][c];
		}

		std::cout << std::max(dp[0][n], dp[1][n]) << "\n";
	}


}