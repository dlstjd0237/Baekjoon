#include <iostream>

int main()
{
	int count, input[5], point = 0;

	std::cin >> count;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> input[i];
		point += input[i] == count ? 1 : 0;
	}
	std::cout << point;


}
