#include <iostream>

using namespace std;

int main()
{
	int N, T, P, cnt = 0;
	int Size[6];


	cin >> N >> Size[0] >> Size[1] >> Size[2] >> Size[3] >> Size[4] >> Size[5] >> T >> P;

	for (int i = 0; i < 6; i++)
		cnt += (Size[i] / T + (Size[i] % T > 0));

	cout << cnt << "\n" << N / P << " " << N % P;
}
