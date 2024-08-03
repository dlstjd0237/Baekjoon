#include <iostream>
#include <map>
using namespace std;


int main() {
	map<char, int> m;

	for (char i = 'a'; i <= 'z'; ++i)
	{
		m.insert(make_pair(i, 0));
	}

	string str;

	cin >> str;

	for (int i = 0; i < str.length(); ++i)
	{
		m[str[i]] += 1;
	}

	for (char i = 'a'; i <= 'z'; ++i)
	{
		cout << m[i] << " ";
	}
}



