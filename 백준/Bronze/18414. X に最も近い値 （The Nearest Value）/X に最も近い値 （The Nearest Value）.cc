#include <iostream>

using namespace std;
int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	if (c < a)
	{
		cout << c;
	}
	else if (b > a) {
		cout << b;
	}
	else {
		cout << a;
	}
}

