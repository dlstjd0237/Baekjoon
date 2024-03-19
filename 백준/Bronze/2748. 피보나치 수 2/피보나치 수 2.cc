#include <iostream>
using namespace std;

int main()
{
	int  num;
	long long F[92] = { 1,0,1 };


	for (int i = 3; i <= 91; ++i)
	{
		F[i] = F[i - 1] + F[i - 2];
	}


	cin >> num;

	cout << F[num + 1];
}
