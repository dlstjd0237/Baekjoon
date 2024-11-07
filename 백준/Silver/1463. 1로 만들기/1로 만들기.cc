#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int* s = new int[a + 1];
	s[0] = s[1] = 0;

	for (int i = 2; i <= a; i++)
	{
		s[i] = s[i - 1] + 1;

		if (i % 2 == 0)
		{
			s[i] = min(s[i], s[i / 2] + 1);
		}
		if (i % 3 == 0)
		{
			s[i] = min(s[i], s[i / 3] + 1);
		}
	}
	cout << s[a];
}