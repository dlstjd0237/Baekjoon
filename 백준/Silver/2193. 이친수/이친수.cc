#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int64_t dp[10000000];

int main() {

	cin.tie()->sync_with_stdio(false);
	int n;

	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; ++i) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n];



	return 0;
}