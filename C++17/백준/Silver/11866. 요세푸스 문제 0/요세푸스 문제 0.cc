#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	queue<int> q;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		q.push(i);
	}

	cout << "<";

	for (int i = 0; i < n; ++i)
	{
		for (int i = 1; i < k; ++i)
		{
			int a = q.front();
			q.pop();
			q.push(a);
		}

		int b = q.front();
		q.pop();

		if (q.size() == 0) {
			cout << b;
		}
		else {
			cout << b << ", ";
		}
	}

	cout << ">";


}

