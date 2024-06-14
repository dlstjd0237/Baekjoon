#include <string>
#include <set>

using namespace std;

string solution(string my_string) {

	set<char>s;
	string answer = "";
	for (int i = 0; i < my_string.length(); ++i)
	{
		if (s.find(my_string[i]) == s.end())
		{
			s.insert(my_string[i]);
			answer += my_string[i];
		}
	}

	return answer;
}