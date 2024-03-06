#include <iostream>
#include <string>

using namespace std;
int sangsu(int n) {
	int sum = 0;
	int temp;
	while (n != 0)
	{
		temp = n % 10;

		sum *= 10;

		sum += temp;

		n /= 10;

	}
	return sum;
}

int main()
{
	int a, b, result;

	cin >> a >> b;

	int sum1, sum2;

	sum1 = sangsu(a);
	sum2 = sangsu(b);

	result = sum1 > sum2 ? sum1 : sum2;

	cout << result;
}