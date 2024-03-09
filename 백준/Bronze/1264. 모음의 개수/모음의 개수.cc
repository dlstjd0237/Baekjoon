#include <iostream>
#include <string>

using namespace std;

char c[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a;
	string s;
	while (true) {
		a = 0;
		getline(cin, s);
		if (s == "#") break;
		for (int i = 0; i < s.length(); ++i) {
			for (int j = 0; j < 10; ++j) {
				if (s[i] == c[j]) {
					a++;
					break;
				}
			}
		}
		cout << a << endl;
	}
}