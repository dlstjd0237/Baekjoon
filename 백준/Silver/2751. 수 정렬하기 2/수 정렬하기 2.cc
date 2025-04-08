#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::cin.tie()->sync_with_stdio(false);

	int n;

	std::cin >> n;

	std::vector<int>v(n);
	for (int i = 0; i < n; ++i) {
		int num;
		std::cin >> num;
		v[i] = num;
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i) {
		std::cout << v[i] << "\n";
	}

	return 0;
}