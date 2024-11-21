#include <iostream>

using namespace std;

int main() {
	int N, K, A, ans = 0, sum = 0;

	cin >> N >> K;
	int* Arr = new int[N];

	for (int i = 0; i < N; ++i)
	{
		cin >> Arr[i];
	}
	for (int i = N - 1; i >= 1; --i)
	{
		int cnt = (K - sum) / Arr[i];

		ans += cnt;
		sum += cnt * Arr[i];
	}
	ans += K - sum;
	cout << ans;
}