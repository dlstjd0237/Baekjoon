#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int inputCount, result = 0;
	char c = ' ';
	string input;
	unordered_map <char, int > m;
	cin >> inputCount;

	for (int i = 0; i < inputCount; ++i)
	{
		int a = 0;
		m.clear();
		cin >> input;


		for (int j = 0; j < input.length(); ++j)//입력받은 거
		{
			if (m.find(input[j]) != m.end()) //키가 있는거임
			{
				if (c != input[j]) //전에 입력한 것과 다른 문자인 경우
					break;

			}
			else { //키가없음
				m.insert(make_pair(input[j], a));
				c = input[j];
			}
				a++;
		}
		if (a == input.length()) {
			result++;
		}
	}
	cout << result;
}