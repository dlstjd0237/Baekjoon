#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

priority_queue<int, vector<int>, greater<int>> p_queue;

int main()
{
	cin.tie(NULL)->sync_with_stdio(false);
	int n;
	cin >> n;
	while (n--) {
		int input;
		cin >> input;
		if (input == 0) {
			if (p_queue.empty() == true) {
				cout << 0<<"\n";
				continue;
			}

			cout << p_queue.top() << "\n";
			p_queue.pop();
		}
		else {
			p_queue.push(input);
		}
	}

	return 0;
}