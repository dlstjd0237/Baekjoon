#include <iostream> 
int main() {
	int count, sum = 0;
	std::cin >> count;
	for (int i = 0; i < count; ++i)
	{
		int input;
		std::cin >> input;
		sum += input;
	}
	std::cout << sum;
}