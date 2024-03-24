#include <iostream>

int GCD(int num1, int num2) {
	int n;

	while (num2 != 0) {
		n = num1 % num2;
		num1 = num2;
		num2 = n;
	}

	return num1;
}

int LCM(int num1, int num2) {

	return num1 * num2 / GCD(num1, num2);
}

int main()
{
	int count, N1, N2, sum;
	std::cin >> count;
	for (int i = 0; i < count; ++i)
	{
		std::cin >> N1 >> N2;
		std::cout << LCM(N1, N2) << "\n";
	}
}