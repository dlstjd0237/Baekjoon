#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;
	int* input = new int[count];
	for (int i = 0; i < count; ++i)
	{
		cin >> input[i];
	}
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < input[i]; ++j)
		{
			cout << "=";
		}
		cout << "\n";
	}
}


