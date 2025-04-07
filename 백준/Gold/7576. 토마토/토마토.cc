#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct vec2 {
	int y, x;
};


int graph[1001][1001] = { 0 };
int n, m;
int Count = 0;
queue<vec2> q;
int qx[] = { 0, 1, 0, -1 };
int qy[] = { 1, 0, -1, 0 };

bool is_Check(int ny, int nx) {
	return (0 <= ny && ny < n && 0 <= nx && nx < m);
}

void BFS() {
	while (!q.empty()) {

		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			int ny = y + qy[i];
			int nx = x + qx[i];


			if (is_Check(ny, nx) == 1 && graph[ny][nx] == 0) {
				graph[ny][nx] = graph[y][x] + 1;
				q.push({ ny,nx });
			}
		}
	}

}

int main() {
	std::cin.tie()->sync_with_stdio(false);

	cin >> m >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> graph[i][j];
			if (graph[i][j] == 1)
				q.push({ i,j });
		}
	}

	BFS();

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (graph[i][j] == 0)
			{
				cout << -1 << endl;
				return 0;
			}
			if (max < graph[i][j]) {
				max = graph[i][j];
			}
		}
	}

	cout << max - 1 << endl;


	return 0;
}