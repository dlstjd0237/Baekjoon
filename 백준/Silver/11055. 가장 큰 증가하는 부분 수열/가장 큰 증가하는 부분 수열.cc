#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, maxNum = 0;
	cin >> n;
	int v[1001];
	int dp[1001];
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];

		dp[i] = v[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++) // 내가 있는 인덱스보다 작은 인덱스 중에서
		{
			if (v[j] < v[i]) // 내 값보다 작은 애들 중에서
				dp[i] = max(dp[i], dp[j] + v[i]); // dp 값이 가장 큰 애 + 1
		}
		maxNum = max(dp[i], maxNum);
	}
	cout << maxNum;
}