#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<bool>> S(m, vector<bool>(n, false));
  rep(i, m) {
    int k, s;
    cin >> k;
    rep(j, k) {
      cin >> s;
      s--;
      S[i][s] = true;
    }
  }
  vector<int> p(m);
  rep(i, m) cin >> p[i];

  int ans = 0;
  rep(i, 1 << n) {
    bool all_on = true;
    rep(j, m) {
      int num_on = 0;
      rep(k, n) if ((i >> k & 1) && S[j][k]) num_on++;
      if (num_on % 2 != p[j]) all_on = false;
    }
    if (all_on) ans++;
  }
  cout << ans << endl;
  return 0;
}
