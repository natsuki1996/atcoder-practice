#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, q;
  cin >> n >> m >> q;

  vector<vector<int>> ad(n);
  int u, v;
  rep(i, m) {
    cin >> u >> v;
    u--, v--;
    ad[u].push_back(v);
    ad[v].push_back(u);
  }

  vector<int> c(n), now;
  rep(i, n) cin >> c[i];
  now = c;

  // fprintf(stderr, "   ");
  // rep(j, n) fprintf(stderr, "%2d ", j + 1);
  // cerr << endl;

  int t, x, y;
  rep(i, q) {
    cin >> t >> x;
    x--;
    cout << now[x] << endl;

    if (t == 1) {
      for (auto v : ad[x]) now[v] = now[x];
    } else {
      cin >> y;
      now[x] = y;
    }

    // fprintf(stderr, "%2d ", i + 1);
    // rep(j, n) fprintf(stderr, "%2d ", now[j]);
    // cerr << endl;
  }
  return 0;
}
