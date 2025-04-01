#include <iostream>
#include <stack>
using namespace std;

int main() {

	cin.tie();

	stack<int>s;

	int inputCount, num, r = 0;
	cin >> inputCount;

	while (inputCount--) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
	while (!s.empty())
	{
		r += s.top();
		s.pop();
	}
	cout << r;
}