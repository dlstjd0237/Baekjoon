#include<iostream>
#include <vector>

using namespace std;

int main() {
	int loopNum;
	int index = 0;
	int minNum = 99999999;
	int noc;
	vector<pair<int, int>> v;


	cin >> loopNum;
	for (int i = 0; i < loopNum; ++i)
	{
		int first, second;
		cin >> first >> second;
		v.push_back(make_pair(first, second));
	}
	noc = 1 << loopNum;


	for (int i = 1; i < noc; i++)
	{
		int a = 1, b = 0;
		for (int x = 0; x < loopNum; x++) {
			if (i & (1 << x)) {
				a *= v[x].first;
				b += v[x].second;
			}
		}
		minNum = min(minNum, abs(a - b));
	}
	cout << minNum;

}