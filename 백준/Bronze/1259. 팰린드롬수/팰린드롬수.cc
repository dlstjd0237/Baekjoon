#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	stack<char> s;

	string str = "1";
	while (true) {
		cin >> str;
		
		string r = "a";

		if (str == "0")
			break;

		if (str.length() % 2 == 0)//짝수
		{
			for (int i = 0; i < str.length() / 2; ++i)
			{
				s.push(str[i]);
			}
			for (int i = str.length() / 2; i < str.length(); ++i)
			{
				char c = s.top();
				s.pop();
				if (c != str[i]) {
					r = "no";
					break;
				}
			}
			if (r != "no")
				r = "yes";
		}
		else // 홀수
		{
			for (int i = 0; i < (str.length() - 1) / 2; ++i)
			{
				s.push(str[i]);
			}	
			for (int i = (str.length()+1) / 2; i < str.length(); ++i)
			{
				char c = s.top();
				s.pop();
				if (c != str[i]) {
					r = "no";
					break;
				}
			}
			if (r != "no")
				r = "yes";
		}


		cout << r << "\n";

	}

}