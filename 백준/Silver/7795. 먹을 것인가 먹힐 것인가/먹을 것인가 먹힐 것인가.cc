#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int inputCount, ACount, BCount;
	cin >> inputCount;
	for (int i = 0; i < inputCount; ++i)
	{
		cin >> ACount >> BCount;
		vector<int> vA(ACount), vB(BCount);
		for (int j = 0; j < ACount; ++j)
		{
			cin >> vA[j];
		}
		for (int j = 0; j < BCount; ++j)
		{
			cin >> vB[j];
		}
		sort(vB.begin(), vB.end());
		int count = 0;
		for (int j = 0; j < ACount; ++j)
		{
			int greaterCount = lower_bound(vB.begin(), vB.end(), vA[j]) - vB.begin();
			count += greaterCount;
		}
		cout << count << "\n";
	}

}

