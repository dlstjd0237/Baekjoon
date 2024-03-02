#include <iostream>
using namespace std;

string triangle(int n[]) {

	int maxNum = n[0] > n[1] ? n[0] : n[1];
	maxNum = maxNum > n[2] ? maxNum : n[2];
	int r = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (n[i] == maxNum)
			continue;
		r += n[i] * n[i];
	}
	string value = r != maxNum * maxNum ? "wrong" : "right";
	return value;
}

int main()
{
	int a[3];
	while (true)
	{
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;
		cout << triangle(a) << endl;
	}
}