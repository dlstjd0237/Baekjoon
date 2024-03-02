#include <iostream>
using namespace std;

int main()
{
	int count;
	cin >> count;
	int n1, n2;
	for (int i = 0; i < count; i++)
	{
		cin >> n1 >> n2;
		cout << n1 + n2 << endl;
	}
}