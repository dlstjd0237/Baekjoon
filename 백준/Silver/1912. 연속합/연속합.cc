#include <iostream>
#include <climits>

int dp[100001];
int arr[100001];

using namespace std;
int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n, sum = INT_MIN;
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}


	//dp[0] = arr[0];
	for (int i = 0; i < n; ++i) {

		dp[i] = std::max(arr[i], dp[i -1] + arr[i]);
		sum = std::max(sum, dp[i]);
	}

	std::cout << sum<<std::endl;
}