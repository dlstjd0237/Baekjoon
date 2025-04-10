#include <iostream>



int main() {

	int n, r = 0, count = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int num;
		std::cin >> num;
		if (num == 0)
			count = 0;
		else {
			r += num + count++;
		}
	}

	std::cout << r;
}