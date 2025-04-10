#include <iostream>
#include <vector>
#include <algorithm>


bool compare(std::string now, std::string last)
{
	if (now.length() == last.length()) return now < last;
	return now.length() < last.length();
}

int main() {

	std::cin.tie()->sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::vector<std::string> v;

	for (int i = 0; i < n; ++i) {
		std::string num;
		std::cin >> num;
		v.push_back(num);
	}

	std::sort(v.begin(), v.end(), compare);
	v.erase(std::unique(v.begin(), v.end()), v.end());


	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << std::endl;
	}

	return 0;
}