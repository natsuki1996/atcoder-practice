#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll h, w, ch, cw, dh, dw;
  cin >> h >> w >> ch >> cw >> dh >> dw;
  ch--, cw--, dh--, dw--;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  vector<vector<ll>> d(h, vector<ll>(w, INF));

  auto is_range = [&](ll x, ll y) {
    return 0 <= x && x < h && 0 <= y && y < w;
  };

  queue<P> q, r;
  q.push(P(ch, cw));
  d[ch][cw] = 0;
  while (!q.empty() || !r.empty()) {
    while (!q.empty()) {
      ll x = q.front().first, y = q.front().second;
      q.pop();
      for (ll i = -2; i <= 2; i++) {
        for (ll j = -2; j <= 2; j++) {
          ll nx = x + i, ny = y + j;
          if (!is_range(nx, ny)) continue;
          if (nx == x && ny == y) continue;
          if (s[nx][ny] == '#') continue;
          if (d[nx][ny] <= d[x][y]) continue;

          if (abs(i) + abs(j) <= 1) {
            d[nx][ny] = d[x][y];
            q.push(P(nx, ny));
          } else if (d[nx][ny] == INF) {
            d[nx][ny] = d[x][y] + 1;
            r.push(P(nx, ny));
          }
        }
      }
    }
    swap(q, r);
  }

  if (d[dh][dw] == INF) {
    cout << -1 << endl;
  } else {
    cout << d[dh][dw] << endl;
  }

  return 0;
}
