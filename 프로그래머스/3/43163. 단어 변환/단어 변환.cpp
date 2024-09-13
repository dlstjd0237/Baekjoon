#include <string>
#include <vector>
#include <queue>
using namespace std;

bool isLinked(string w1, string w2)
{
	int cnt = 0;
	for (int i = 0; i < w1.size(); i++)
		if (w1[i] != w2[i]) cnt++;
	return cnt == 1;
}

int solution(string begin, string target, vector<string> words) {

	vector<int>visited(words.size());
	queue<pair<string, int>>q;
	q.push({ begin, 0 });

	while (!q.empty())
	{
		string w = q.front().first;
		int n = q.front().second;
		q.pop();

		for (int i = 0; i < words.size(); ++i)
		{
			if (isLinked(w, words[i]) && !visited[i]) {
				q.push({ words[i],i });
				visited[i] = visited[n] + 1;
				if (words[i] == target) return visited[i];
			}
		}
	}
	return 0;
}