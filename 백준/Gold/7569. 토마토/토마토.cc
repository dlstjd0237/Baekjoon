#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int arr[101][101][101];
int dis[101][101][101];
int n, m, h;

int dx[6] = { 1, -1, 0, 0, 0, 0 };
int dy[6] = { 0, 0, 1, -1, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1, -1 };

struct Point {
    int z, y, x;
};

void BFS() {
    queue<Point> q;
    for (int z = 1; z <= h; ++z) {
        for (int y = 1; y <= n; ++y) {
            for (int x = 1; x <= m; ++x) {
                if (arr[z][y][x] == 1) {
                    q.push({ z, y, x });
                    dis[z][y][x] = 0;
                }
            }
        }
    }

    while (!q.empty()) {
        Point p = q.front();
        q.pop();
        for (int i = 0; i < 6; ++i) {
            int nx = p.x + dx[i];
            int ny = p.y + dy[i];
            int nz = p.z + dz[i];

            if (nx >= 1 && nx <= m && ny >= 1 && ny <= n && nz >= 1 && nz <= h) {
                if (arr[nz][ny][nx] == 0) {
                    arr[nz][ny][nx] = 1;
                    dis[nz][ny][nx] = dis[p.z][p.y][p.x] + 1;
                    q.push({ nz, ny, nx });
                }
            }
        }
    }
}

int main() {
    cin.tie()->sync_with_stdio(false);

    cin >> m >> n >> h;

    for (int z = 1; z <= h; ++z) {
        for (int y = 1; y <= n; ++y) {
            for (int x = 1; x <= m; ++x) {
                cin >> arr[z][y][x];
                dis[z][y][x] = -1;
            }
        }
    }

    BFS();

    int maxDay = 0;
    for (int z = 1; z <= h; ++z) {
        for (int y = 1; y <= n; ++y) {
            for (int x = 1; x <= m; ++x) {
                if (arr[z][y][x] == 0) {
                    cout << -1;
                    return 0;
                }
                maxDay = max(maxDay, dis[z][y][x]);
            }
        }
    }

    cout << maxDay;

    return 0;
}