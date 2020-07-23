#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

struct UnionFind {
  vector<int> d;
  UnionFind(int n = 0) : d(n, -1) {}

  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }

  bool unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x, y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }

  bool same(int x, int y) { return find(x) == find(y); }

  int size(int x) { return -d[find(x)]; }
};

int main() {
  ll n, m, k, a, b, c, d;
  cin >> n >> m >> k;

  vector<int> deg(n);
  vector<vector<int>> fr(n), bl(n);
  UnionFind uf(n);
  rep(i, m) {
    cin >> a >> b;
    a--, b--;
    fr[a].push_back(b);
    fr[b].push_back(a);
    uf.unite(a, b);
  }
  rep(i, k) {
    cin >> c >> d;
    c--, d--;
    bl[c].push_back(d);
    bl[d].push_back(c);
  }

  rep(i, n) {
    int ans = uf.size(i) - 1 - fr[i].size();
    for (auto x : bl[i])
      if (uf.same(i, x)) ans--;
    printf("%d%c", ans, (i == n - 1 ? '\n' : ' '));
  }

  return 0;
}
