#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	int inputCount;
	cin >> inputCount;
	for (int i = 0; i < inputCount; i++)
	{
		string str = "dd";
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (str == "pop") {
			if (s.empty() == true)
				cout << -1;
			else {
				cout << s.top();
				s.pop();
			}

			cout << endl;
		}
		else if (str == "size")
		{
			cout << s.size();
			cout << "\n";
		}
		else if (str == "empty") {
			cout << s.empty();
			cout << "\n";
		}
		else if (str == "top") {
			if (s.empty() == true)
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}

	}

}