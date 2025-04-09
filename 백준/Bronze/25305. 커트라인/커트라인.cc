#include <iostream>
#include <vector>
#include <algorithm>

int a(int i, int j) {
	return j < i;
}

int main() {
	std::cin.tie()->sync_with_stdio(false);

	int n, cutline;

	std::cin >> n >> cutline;

	std::vector<int>v(n);
	for (int i = 0; i < n; ++i) {
		int num;
		std::cin >> num;
		v[i] = num;
	}
	sort(v.begin(), v.end(), a);

	std::cout << v[cutline-1] << "\n";

	return 0;
}