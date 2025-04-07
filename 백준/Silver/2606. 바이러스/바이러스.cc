#include <iostream>
#include <queue>

using namespace std;

int graph[101][101] = { 0 };
int n;
int Count = 0;
queue<int>q;
bool visited[101] = { 0, };

void BFS(int num) {
	q.push(num);
	visited[num] = true;

	while (!q.empty()) {
		num = q.front();
		q.pop();
		for (int i = 1; i <= n; ++i)
		{
			if (graph[num][i] == 1 && visited[i] == 0) {
				q.push(i);
				visited[i] = true;
				Count++;
			}
		}
	}


}

int main() {
	std::cin.tie()->sync_with_stdio(false);

	int  m;

	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int start, end;
		cin >> start >> end;

		graph[start][end] = 1;
		graph[end][start] = 1;
	}

	BFS(1);
	cout << Count;

	return 0;
}