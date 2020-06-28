#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n), b(n);

  vector<multiset<int>> s(200005);
  multiset<int> maxs;

  auto getMax = [&](int y) {
    if (s[y].size() == 0) return -1;
    return *s[y].rbegin();
  };

  auto addY = [&](int y) {
    int x = getMax(y);
    if (x == -1) return;
    maxs.insert(x);
  };

  auto delY = [&](int y) {
    int x = getMax(y);
    if (x == -1) return;
    maxs.erase(maxs.find(x));
  };

  auto addE = [&](int y, int r) {
    delY(y);
    s[y].insert(r);
    addY(y);
  };

  auto delE = [&](int y, int r) {
    delY(y);
    s[y].erase(s[y].find(r));
    addY(y);
  };

  rep(i, n) {
    cin >> a[i] >> b[i];
    addE(b[i], a[i]);
  }

  int c, d;
  rep(i, q) {
    cin >> c >> d;
    c--;
    delE(b[c], a[c]);
    b[c] = d;
    addE(b[c], a[c]);
    cout << *maxs.begin() << endl;
  }
  return 0;
}
