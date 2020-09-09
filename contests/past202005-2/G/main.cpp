#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1001001001;
const ll offset = 210;
// const ll dx[6] = {1, 0, -1, 1, -1, 0};
// const ll dy[6] = {1, 1, 1, 0, 0, -1};
const ll dx[6] = {0, 1, -1, 1, 0, -1};
const ll dy[6] = {1, 0, 0, -1, -1, -1};

bool inArea(ll x, ll y) {
  return 0 <= x && x < offset * 2 && 0 <= y && y < offset * 2;
}

int main() {
  ll n, x, y;
  cin >> n >> x >> y;
  ll sx = 0 + offset, sy = 0 + offset;
  ll gx = x + offset, gy = y + offset;
  vector<vector<ll>> dist(offset * 2, vector<ll>(offset * 2, INF));
  ll a, b;
  rep(i, n) {
    cin >> a >> b;
    dist[a + offset][b + offset] = -1;
  }

  queue<P> q;
  q.push(P(gx, gy));
  dist[gx][gy] = 0;
  while (!q.empty()) {
    P p = q.front();
    q.pop();
    if (p.first == sx && p.second == sy) break;
    rep(i, 6) {
      ll nx = p.first + dx[i], ny = p.second + dy[i];
      if (inArea(nx, ny) && dist[nx][ny] != -1 && dist[nx][ny] == INF) {
        dist[nx][ny] = dist[p.first][p.second] + 1;
        q.push(P(nx, ny));
      }
    }
  }

  if (dist[sx][sy] == INF) {
    cout << -1 << endl;
  } else {
    cout << dist[sx][sy] << endl;
  }

  return 0;
}
