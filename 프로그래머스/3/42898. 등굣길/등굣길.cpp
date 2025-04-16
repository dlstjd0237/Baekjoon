#include <string>
#include <vector>

using namespace std;

int arr[101][101];

int solution(int m, int n, vector<vector<int>> puddles) {

	for (int i = 0; i < puddles.size(); ++i)
		arr[puddles[i][1]][puddles[i][0]] = -1;;

	arr[1][1] = 1;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			int a = 0, b = 0;

			if (arr[i][j] == -1)
				continue;
			if (arr[i - 1][j] != -1)
				a = arr[i - 1][j];
			if (arr[i][j - 1] != -1)
				b = arr[i][j - 1];

			arr[i][j] += (a + b) % 1000000007;
		}
	}

	return arr[n][m];
}