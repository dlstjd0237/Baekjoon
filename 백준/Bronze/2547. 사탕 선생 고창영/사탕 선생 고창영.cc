#include <iostream>

int main() {
	int inputCount;
	int temp;
	long long input;
	long long sum = 0;
	std::cin >> inputCount;

	for (int i = 0; i < inputCount; ++i)
	{
		std::cin >> temp;
		sum = 0;
		for (int j = 0; j < temp; ++j)
		{
			std::cin >> input;
			sum = (sum + input) % temp;
		}
		if (sum % temp == 0)std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
	return 0;
}