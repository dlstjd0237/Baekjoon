#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	queue<int> s;
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
				cout << s.front();
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
		else if (str == "front") {
			if (s.empty() == true)
				cout << -1 << endl;
			else
				cout << s.front() << endl;
		}
		else if(str == "back")
		{
			if (s.empty() == true)
				cout << -1 << endl;
			else
				cout << s.back() << endl;
		}

	}

}