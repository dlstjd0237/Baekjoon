#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define MAX 100001

int f[41] = { 0, };
int aCount = 0;
int bCount = 1;

int fib(int n) {
	if (n == 1 || n == 2) {
		aCount++;
		return 1;
	}
	else
		return (fib(n - 1) + fib(n - 2));

}

int fibonacci(int n) {
	f[1] = f[2] = 1;
	for (int i = 3; i < n; ++i) {
		f[i] < -f[i - 1] + f[i - 2];
		bCount++;
	}
	return f[n];
}

int main()
{
	int input;
	std::cin >> input;

	fib(input);
	fibonacci(input);

	std::cout << aCount << " " << bCount;

}