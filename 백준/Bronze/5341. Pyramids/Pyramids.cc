#include <iostream>
using namespace std;

int pyramid(int n) {
	int sum = 0;
	while (n > 0)
	{
		sum += n;
		--n;
	}
	return sum;
}

int main()
{
	int num = 1;
	while (num != 0)
	{
		cin >> num;
		if (num == 0)
			return 0;
		cout << pyramid(num) << endl;
	}
}