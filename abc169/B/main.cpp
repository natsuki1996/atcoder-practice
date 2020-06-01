#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) {
    cin >> a[i];
    if (a[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  ll ans = 1;
  rep(i, n) {
    if (a[i] > (ll)1e18 / ans) {
      cout << -1 << endl;
      return 0;
    }
    ans *= a[i];
  }

  cout << ans << endl;
  return 0;
}
