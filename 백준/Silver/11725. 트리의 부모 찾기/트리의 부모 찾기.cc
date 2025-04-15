#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define MAX 100001

int n;
int arr[MAX];
bool visited[MAX];
std::vector<int> v[MAX];

void DFS(int n)
{
	visited[n] = true;
	for (int i = 0; i < v[n].size(); ++i) {
		int next = v[n][i];
		if (!visited[next]) {
			arr[next] = n;
			DFS(next);
		}
	}
}


int main()
{
	std::cin >> n;
	n -= 1;
	for (int i = 0; i < n; ++i) {
		int x, y;

		std::cin >> x >> y;

		v[x].push_back(y);
		v[y].push_back(x);
	}
		
	DFS(1);

	for (int i = 2; i <= n+1; ++i)
		std::cout << arr[i] << "\n";
}