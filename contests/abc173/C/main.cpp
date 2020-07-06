#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> c(h);
  rep(i, h) cin >> c[i];

  int ans = 0;
  rep(is, 1 << h) rep(js, 1 << w) {
    int cnt = 0;
    rep(i, h) rep(j, w) {
      if ((is >> i & 1) || (js >> j & 1)) continue;
      if (c[i][j] == '#') cnt++;
    }
    if (cnt == k) ans++;
  }

  cout << ans << endl;
  return 0;
}
