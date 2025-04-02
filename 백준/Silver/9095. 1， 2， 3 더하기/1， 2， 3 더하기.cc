#include <iostream>
using namespace std;

int main() {

	cin.tie()->sync_with_stdio(false);

	int inputCount;
	int dp[11] = { 1,2,4 };

	for (int i = 3; i < 11; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	cin >> inputCount;

	while (inputCount--)
	{
		int num;

		cin >> num;

		cout << dp[num - 1] << endl;
	}
	return 0;
}