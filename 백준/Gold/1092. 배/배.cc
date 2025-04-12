#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::cin.tie(0)->std::ios::sync_with_stdio(0);

	int n, m, moveCount = 0, start = 0;
	std::cin >> n;
	std::vector<int> v1(n);

	for (int i = 0; i < n; ++i) {
		std::cin >> v1[i];
	}
	std::cin >> m;
	std::vector<int> v2(m);
	for (int i = 0; i < m; ++i) {
		std::cin >> v2[i];
	}

	std::sort(v1.rbegin(), v1.rend());
	std::sort(v2.rbegin(), v2.rend());

	if (v1[0] < v2[0]) {
		std::cout << -1 ;
		return 0;
	}



	while (!v2.empty()) {

		moveCount++;
		for (int i = 0; i < v1.size(); i++)
		{
			for (int j = 0; j < v2.size(); ++j)
			{
				if (v1[i] >= v2[j])
				{
					v2.erase(v2.begin() + j);
					break;
				}
			}
		}
	}

	std::cout << moveCount ;


}