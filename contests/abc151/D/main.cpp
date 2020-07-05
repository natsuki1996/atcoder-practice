#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
const vector<int> dx = {-1, 0, 1, 0};
const vector<int> dy = {0, -1, 0, 1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  int ans = 0;
  rep(si, h) rep(sj, w) {
    if (s[si][sj] == '#') continue;
    vector<vector<int>> dist(h, vector<int>(w, INF));
    queue<P> q;

    auto update = [&](int i, int j, int x) {
      if (dist[i][j] != INF) return;
      dist[i][j] = x;
      q.push(P(i, j));
    };

    update(si, sj, 0);
    while (!q.empty()) {
      int cx = q.front().first, cy = q.front().second;
      q.pop();
      rep(i, 4) {
        int nx = cx + dx[i], ny = cy + dy[i];
        if (nx < 0 || h <= nx || ny < 0 || w <= ny) continue;
        if (s[nx][ny] == '#') continue;
        update(nx, ny, dist[cx][cy] + 1);
      }
    }
    rep(i, h) rep(j, w) {
      if (dist[i][j] == INF) continue;
      ans = max(ans, dist[i][j]);
    }
  }
  cout << ans << endl;
  return 0;
}
