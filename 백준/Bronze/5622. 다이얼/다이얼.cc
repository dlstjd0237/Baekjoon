#include <iostream>
using namespace std;

int dial(char c) {

	int point = 0;
	point = c >= 65 && c <= 67 ? 2 : c >= 68 && c <= 70 ? 3 : c >= 71 && c <= 73 ? 4 : c >= 74 && c <= 76 ?
		5 : c >= 77 && c <= 79 ? 6 : c >= 80 && c <= 83 ? 7 : c >= 84 && c <= 86 ? 8 : c >= 87 && c <= 90 ? 9 : 0;
	return point + 1;
}

int main()
{
	string str;
	int result = 0;
	cin >> str;
	for (int i = 0; i < str.length(); ++i)
	{
		result += dial(str[i]);
	}
	cout << result;

}