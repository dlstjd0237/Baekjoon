#include <iostream>
using namespace std;

int dp[5001];
int main() {

	cin.tie()->sync_with_stdio(false);
	int num, f, t;

	cin >> num;

	dp[3] = dp[5] = 1;

	for (int i = 6; i <= num; i++)
	{
		if (dp[i - 3])
			dp[i] = dp[i - 3] + 1;
		if (dp[i - 5]) dp[i] = dp[i] ? min(dp[i], dp[i - 5] + 1) : dp[i - 5] + 1;
	}

	cout << (dp[num] == 0 ? -1 : dp[num]) << endl;
	return 0;
}