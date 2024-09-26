#include <iostream>
#include <algorithm>

using namespace std;

int M, N, K, x, y, testcase;
int visited[50][50];
int sum = 0;
int xpos[4] = { 0, 0, -1, 1 };  // 좌우
int ypos[4] = { 1, -1, 0, 0 };  // 상하

void dfs(int x, int y) {
    visited[x][y] = 0;
    for (int i = 0; i < 4; i++) {
        int xx = x + xpos[i];
        int yy = y + ypos[i];
        if (xx < 0 || yy < 0 || xx >= N || yy >= M) continue;  // N은 세로, M은 가로
        if (visited[xx][yy] == 1) {
            dfs(xx, yy);
        }
    }
}

int main() {

    cin >> testcase;

    while (testcase--) {

        cin >> M >> N >> K;
        for (int i = 0; i < K; ++i) {
            cin >> x >> y;
            visited[y][x] = 1;
        }

        for (int i = 0; i < N; i++) {  // N은 세로
            for (int j = 0; j < M; j++) {  // M은 가로
                if (visited[i][j] == 1) {
                    dfs(i, j);
                    sum++;
                }
            }
        }

        cout << sum << "\n";
        sum = 0;

        // visited 배열 초기화
        for (int i = 0; i < N; i++) {  // N은 세로
            fill(visited[i], visited[i] + M, 0);  // M은 가로
        }
    }

    return 0;
}
