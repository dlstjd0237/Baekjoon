#include <iostream>
using namespace std;

int main()
{
	string str;
	char temp;
	cin >> str;

	temp = str[0];
	str[0] = str[2];
	str[2] = temp;

	cout << str;
}