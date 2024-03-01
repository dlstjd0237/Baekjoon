#include <iostream>
using namespace std;
int main()
{
	int count;
	int a;
	string s;
	cin >> count;
	for (int i = 0; i < count; ++i)
	{
		cin >> a >> s;

		for (int j = 0; j < s.length(); ++j)
		{
			for (int k = 0; k < a; ++k)
			{
				cout << s[j];
			}
		}
		cout << "\n";
	}
}


