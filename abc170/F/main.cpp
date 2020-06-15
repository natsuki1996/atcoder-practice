#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

int main() {
  int h, w, k;
  int sx, sy, gx, gy;
  cin >> h >> w >> k;
  cin >> sx >> sy >> gx >> gy;
  sx--, sy--, gx--, gy--;
  vector<string> maze(h);
  rep(i, h) cin >> maze[i];
  vector<vector<int>> dist(h, vector<int>(w, -1));

  queue<P> q;
  q.push(P(sx, sy));
  dist[sx][sy] = 0;
  while (!q.empty()) {
    P p = q.front();
    q.pop();
    int cx = p.first;
    int cy = p.second;
    if (cx == gx && cy == gy) break;
    rep(i, 4) {
      for (int j = 1; j <= k; j++) {
        int nx = cx + dx[i] * j;
        int ny = cy + dy[i] * j;
        if (0 > nx || nx >= h || 0 > ny || ny >= w) break;
        if (maze[nx][ny] == '@') break;
        if (dist[nx][ny] != -1 && dist[nx][ny] <= dist[cx][cy]) break;
        if (dist[nx][ny] != -1) continue;
        dist[nx][ny] = dist[cx][cy] + 1;
        q.push(P(nx, ny));
      }
    }
  }
  cout << dist[gx][gy] << endl;
  return 0;
}
