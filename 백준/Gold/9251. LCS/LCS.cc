#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;
	int row = str1.size(), col = str2.size();
	vector<vector<int>>dp(row + 1, vector<int>(col + 1));
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (str1[i - 1] == str2[j - 1])
			{
				dp[i][j] += dp[i - 1][j - 1] + 1;
			}
			else
				dp[i][j] += max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << dp[row][col];
}