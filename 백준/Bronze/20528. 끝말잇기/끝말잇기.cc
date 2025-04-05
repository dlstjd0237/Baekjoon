#include <iostream>

using namespace std;

int main() {
	cin.tie()->sync_with_stdio(false);
	int count;
	bool complete = true;
	string str;
	cin >> count >> str;
	char start = str[0];

	for (int i = 1; i < count; ++i)
	{
		cin >> str;
		if (start != str[0])
			complete = false;
	}
	cout << complete;


}