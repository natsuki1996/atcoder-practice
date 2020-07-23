#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a[3][3];
  bool flags[3][3] = {false};
  rep(i, 3) rep(j, 3) cin >> a[i][j];
  int n, q;
  cin >> n;
  rep(i, n) {
    cin >> q;
    rep(j, 3) rep(k, 3) flags[j][k] |= (a[j][k] == q);
  }

  bool flag = false;
  rep(i, 3) {
    flag |= (flags[i][0] & flags[i][1] & flags[i][2]);
    flag |= (flags[0][i] & flags[1][i] & flags[2][i]);
  }
  flag |= (flags[0][0] & flags[1][1] & flags[2][2]);
  flag |= (flags[2][0] & flags[1][1] & flags[0][2]);

  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}
