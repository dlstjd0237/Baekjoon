#include <iostream>
#include <vector>
#include <algorithm>

int a(int i, int j) {
	return j < i;
}

int main() {
	std::cin.tie()->sync_with_stdio(false);

	int n;
	std::string str;
	std::cin >> str;
	//std::cin >> n;

	std::vector<int>v(str.length());
	for (int i = 0; i < str.length(); ++i) {
		int num = str[i] - '0';
		v[i] = num;
	}
	sort(v.begin(), v.end(),a);

	for (int i = 0; i < str.length(); ++i)
	{
		std::cout << v[i];

	}

	return 0;
}