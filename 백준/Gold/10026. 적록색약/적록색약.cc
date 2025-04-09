#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

char M[101][101];
bool visited[101][101];
int n;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


bool isCom(char y, char x) {
	if ((x == 'R' || x == 'G') && (y == 'R' || y == 'G')) return true; 
	return x == y; 
}

void DFS(int x, int y) {
	visited[y][x] = true;  

	for (int i = 0; i < 4; ++i) { 
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[ny][nx] && M[y][x] == M[ny][nx]) {
			DFS(nx, ny);  
		}
	}
}

void DFS2(int x, int y) {
	visited[y][x] = true;  

	for (int i = 0; i < 4; ++i) {  
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[ny][nx] && isCom(M[y][x], M[ny][nx])) {
			DFS2(nx, ny); 
		}
	}
}

int main() {
	std::cin.tie()->sync_with_stdio(false);

	std::cin >> n;

	for (int y = 0; y < n; ++y)
	{
		for (int x = 0; x < n; ++x)
		{
			std::cin >> M[y][x];
		}
	}

	int defualtCount = 0;
	for (int y = 0; y < n; ++y)
	{
		for (int x = 0; x < n; ++x)
		{
			if (!visited[y][x])
			{
				DFS(x, y);
				defualtCount++;
			}
		}
	}

	memset(visited, false, sizeof(visited));

	int rgCount = 0;
	for (int y = 0; y < n; ++y)
	{
		for (int x = 0; x < n; ++x)
		{
			if (!visited[y][x])
			{
				DFS2(x, y);
				rgCount++;
			}
		}
	}

	std::cout << defualtCount << " " << rgCount << "\n";


	return 0;
}