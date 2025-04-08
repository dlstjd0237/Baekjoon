#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::cin.tie()->sync_with_stdio(false);

	std::vector<int> v(5);
	int n, r = 0;
	for (int i = 0; i < 5; ++i) {
		std::cin >> n;
		v[i] = n;
		r += n;
	}

	std::sort(v.begin(), v.end());

	std::cout << r / 5 << std::endl << v[2];

	return 0;
}