#include <iostream>
using namespace std;
int main()
{
	string Number;
	int count;
	int sum = 0;
	cin >> count >> Number;
	for (int i = 0; i < count; ++i)
	{
		sum += Number[i] - '0';
	}
	cout << sum << endl;
}


