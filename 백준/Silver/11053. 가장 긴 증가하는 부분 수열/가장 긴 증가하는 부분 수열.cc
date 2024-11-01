#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	vector<int>dp(n, 1);
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++) // 내가 있는 인덱스보다 작은 인덱스 중에서
		{
			if (v[j] < v[i]) // 내 값보다 작은 애들 중에서
				dp[i] = max(max(dp[i], dp[j] + 1), 1); // dp 값이 가장 큰 애 + 1
		}
	}
	cout << *max_element(dp.begin(), dp.end());
}