#include <iostream>

using namespace std;

int dp[100001] = { 0 };

int main() {

	cin.tie()->sync_with_stdio(false);
	int N, K;
	cin >> N >> K;
	while (N--) {
		int W, V;
		cin >> W >> V;
		for (int i = K; i >= W; --i)
		{
			dp[i] = max(dp[i], dp[i - W] + V);
		}
	}

	cout << dp[K];

}