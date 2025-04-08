#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int n, m, ret;
int a[10][10];
int visited[10][10];
vector<pair<int, int>> wall, vir;

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void dfs(int y, int x) {
	for (int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)continue; //범위안에서 안나가는지 체크
		if (visited[ny][nx])continue; // 이미 방문한 곳 체크
		if (a[ny][nx] == 1) continue; // 벽인지 체크

		visited[ny][nx] = 1;
		dfs(ny, nx);
	}
}

int go() {

	memset(visited, 0, sizeof(visited));


	for (pair<int, int> a : vir)
	{
		visited[a.first][a.second] = 1;
		dfs(a.first, a.second);
	}
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j) {
			if (a[i][j] == 0 && visited[i][j] == 0)cnt++;
		}
	}
	return cnt;
}

int main() {
	std::cin.tie()->sync_with_stdio(false);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
			if (a[i][j] == 0)wall.push_back({ i,j });
			if (a[i][j] == 2)vir.push_back({ i,j });
		}
	}

	int l = wall.size();

	for (int i = 0; i < l; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			for (int k = 0; k < j; ++k)
			{
				a[wall[i].first][wall[i].second] = 1;
				a[wall[j].first][wall[j].second] = 1;
				a[wall[k].first][wall[k].second] = 1;
				ret = max(ret, go());

				a[wall[i].first][wall[i].second] = 0;
				a[wall[j].first][wall[j].second] = 0;
				a[wall[k].first][wall[k].second] = 0;
			}
		}
	}

	cout << ret << endl;

	return 0;
}