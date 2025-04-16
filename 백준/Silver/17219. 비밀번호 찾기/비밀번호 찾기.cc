#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	unordered_map<string, string>map;

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		string str1;
		string str2;
		cin >> str1 >> str2;
		map[str1] = str2;
	}

	for (int i = 0; i < m; ++i) {
		string str;
		cin >> str;
		cout << map[str] << "\n";
	}
}