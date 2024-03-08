#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c, minN, maxN;
	cin >> a >> b >> c;
	minN = min(a, min(b, c));
	maxN = max(a, max(b, c));
	if (maxN > a && a > minN)
		cout << minN << " " << a << " " << maxN;
	if (maxN > b && b > minN)
		cout << minN << " " << b << " " << maxN;
	if (maxN > c && c > minN)
		cout << minN << " " << c << " " << maxN;
}