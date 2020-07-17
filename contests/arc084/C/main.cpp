#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];

  sort(a.begin(), a.end());
  sort(c.begin(), c.end());

  ll ans = 0;
  rep(i, n) {
    int j = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    int k = upper_bound(c.begin(), c.end(), b[i]) - c.begin();
    ans += j * (n - k);
  }
  cout << ans << endl;
  return 0;
}
