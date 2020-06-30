#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<vector<int>> c(h, vector<int>(w));
  vector<int> vec;
  rep(i, n) rep(j, a[i]) vec.push_back(i + 1);
  // rep(i, vec.size()) printf("%d%c", vec[i], (i == vec.size() - 1 ? '\n' : '
  // '));
  rep(i, h) rep(j, w) {
    // cerr << i * h + j << endl;
    // c[i][j] = vec[i * w + j];
    if (i % 2 == 0) {
      c[i][j] = vec[i * w + j];
    } else {
      c[i][w - j - 1] = vec[i * w + j];
    }
  }

  rep(i, h) rep(j, w) printf("%d%c", c[i][j], (j == w - 1 ? '\n' : ' '));
  return 0;
}
