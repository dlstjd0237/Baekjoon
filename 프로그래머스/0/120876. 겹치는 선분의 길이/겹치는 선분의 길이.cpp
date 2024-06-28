#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int solution(vector<vector<int>> lines) {
	unordered_map<int, int>m;
	int answer = 0;
	for (vector<int> item : lines) {
		for (int i = item[0]; i < item[1]; ++i)
		{
			m[i]++;
			if (m[i] ==2)
				++answer;
		}
	}
	return answer;
}