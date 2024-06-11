#include <iostream>
#include <map>
using namespace std;


int main()
{
	map<string, int> m;
	int n;
	string str;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;	
		m[str] += 1;
	}

	int max = -1;
	for (auto n : m)
	{
		if (n.second > max) {
			max = n.second;
		}


	}

	for (auto n : m)
	{
		if (n.second == max) {
			cout << n.first;
			break;
		}


	}
}

