#include <iostream>
#include <queue>
#include <cstring>

int arr[1001][1001];
bool visit[1001];

int N, M, V;

void DFS(int value)
{
    visit[value] = true;
    std::cout << value << " ";
    for (int i = 1; i <= N; ++i)
    {
        if (arr[value][i] == 1 && !visit[i])
        {
            DFS(i);
        }
        if (i == N)
            return;
    }
}

void bfs(int value)
{
    std::queue<int> q;
    q.push(value);
    while (!q.empty())
    {
        int now = q.front();
        visit[now] = true;
        std::cout << now << " ";
        q.pop();
        for (int i = 1; i <= N; ++i)
        {
            if (arr[now][i] == 1 && !visit[i])
            {
                q.push(i);
                visit[i] = true;
            }
        }
    }
}

int main()
{
    int u, v;

    std::cin >> N >> M >> V;

    for (int i = 0; i < M; ++i)
    {
        std::cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    DFS(V);

    std::cout << std::endl;
    std::memset(visit, false, sizeof(visit));

    bfs(V);
}
