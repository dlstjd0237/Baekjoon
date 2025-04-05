#include <iostream>

using namespace std;

#define Max  1500000
int IMax = 1000000;

long long N;
long long dp[Max];

int main() {

	cin.tie()->sync_with_stdio(false);
	cin >> N;

	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i < Max; ++i)
	{
		dp[i] = (dp[i - 2] + dp[i - 1]) % IMax;
	}
	std::cout << dp[N % Max] << endl;

	return 0;
}