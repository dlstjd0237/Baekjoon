#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue <int>q;
	int n, k, b;

	cin >> n;
	cin >> k;

	for (int i = 0; i < n; ++i)
	{
		q.push(i + 1);
	}
	cout << "<";
	while (!q.empty()) {

		for (int i = 1; i < k; ++i)
		{
			int a = q.front();
			q.pop();
			q.push(a);
		}
		b = q.front();
		q.pop();

		if (q.size() == 0)
			cout << b;
		else
			cout << b << ", ";
	}
	cout << ">";
}