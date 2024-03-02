#include <iostream>
using namespace std;

int n[101][101];
int m[101][101];
int main()
{
	int x = 0, y = 0;

	cin >> y >> x;

	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			cin >> n[i][j];
		}
	}
	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			cin >> m[i][j];
		}
	}

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << n[i][j] + m[i][j] << " ";
		}
		cout << "\n";
	}


}