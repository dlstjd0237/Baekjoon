#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<int> s;
	int count;
	int input;
	cin >> count;
	for (int i = 0; i < count; ++i)
	{
		cin >> input;
		s.insert(input);
	}
	cin >> count;
	for (int i = 0; i < count; ++i)
	{
		cin >> input;
		if (s.find(input) != s.end()) { //존재하는거임
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}
}