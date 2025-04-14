#include <iostream>
#include <vector>


int main() {
	std::cin.tie(0)->std::ios::sync_with_stdio(0);

	int n, m, maxNum = 0;

	std::cin >> n >> m;

	std::vector<int> cards(n);

	for (int i = 0; i < n; ++i) {
		std::cin >> cards[i];
	}

	for (int i = 0; i < n - 2; ++i) {
		for (int j = i + 1; j < n - 1; ++j) {
			for (int k = j + 1; k < n; ++k) {
				int cardSum = cards[i] + cards[j] + cards[k];
				if (cardSum <= m) {
					maxNum = std::max(cardSum, maxNum);
				}
			}
		}
	}

	std::cout << maxNum;

}