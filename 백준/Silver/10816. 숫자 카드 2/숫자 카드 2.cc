#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	vector<int> vec;
	int inputCount, enemyCount;
	int n = 0;

	cin >> inputCount;
	for (int i = 0; i < inputCount; ++i)
	{
		cin >> n;
		vec.push_back(n);
	}

	sort(vec.begin(), vec.end());


	cin >> enemyCount;
	for (int i = 0; i < enemyCount; ++i)
	{
		cin >> n;
		cout << upper_bound(vec.begin(), vec.end(), n) - lower_bound(vec.begin(), vec.end(), n) << " ";
	}


}

