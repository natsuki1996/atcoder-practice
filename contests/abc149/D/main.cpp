#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  string s;
  cin >> s;
  vector<int> ctoi(256);
  ctoi['r'] = 2;
  ctoi['c'] = 0;
  ctoi['p'] = 1;
  int ans = 0;
  rep(i, k) {
    vector<int> x;
    for (int j = i; j < n; j += k) {
      x.push_back(ctoi[s[j]]);
    }
    vector<int> dp(2);
    int pre = -1;
    for (int nx : x) {
      vector<int> p(2);
      swap(dp, p);
      dp[0] = max(p[0], p[1]);
      if (pre == nx) {
        dp[1] = p[0] + a[nx];
      } else {
        dp[1] = max(p[0], p[1]) + a[nx];
      }
      pre = nx;
    }
    ans += max(dp[0], dp[1]);
  }
  cout << ans << endl;
  return 0;
}
