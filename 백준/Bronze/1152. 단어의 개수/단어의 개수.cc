#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	int sum = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == ' ')
		{
			++sum;
		}
	}
	if (s[0] == ' ')
		--sum;
	if (s.back() == ' ')
		--sum;
	cout << sum+1 << endl;
}





