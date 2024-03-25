#include <iostream>

int main()
{
	int min[4] = { 0 };
	int man[4] = { 0 };
	int S = 0, T = 0;
	std::cin >> min[0] >> min[1] >> min[2] >> min[3];
	std::cin >> man[0] >> man[1] >> man[2] >> man[3];

	for (int i = 0; i < 4; ++i)
	{
		S += min[i];
		T += man[i];
	}
	if (S == T)
		std::cout << S;
	else if (T < S)
		std::cout << S;
	else if (T > S)
		std::cout << T;

}