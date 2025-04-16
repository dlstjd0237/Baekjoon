#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	int minNum = INT_MAX;
	int maxNum = INT_MIN;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		minNum = min(num, minNum);
		maxNum = max(num, maxNum);
	}

	cout << minNum * maxNum;
}