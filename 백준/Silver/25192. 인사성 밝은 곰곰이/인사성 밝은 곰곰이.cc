#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, count = 0;
	string str;
	map<string,int>map;
	cin >> n;

	cin >> str;
	for (int i = 1; i < n; ++i) {
		cin >> str;
		if (str == "ENTER")
		{
			map.clear();
			continue;
		}
		
		if (map[str] > 0) {
			continue;
		}


		map[str]++;
		count++;
	}

	cout << count;

}