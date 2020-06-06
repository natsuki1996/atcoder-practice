#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int mod = 2019;

int main() {
  ll l, r;
  cin >> l >> r;
  if (r - l >= 2019) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = 1001001001;
  for (ll i = l; i <= r; i++) {
    for (ll j = i + 1; j <= r; j++) {
      ans = min(ans, (i * j) % mod);
    }
  }
  cout << ans << endl;
  return 0;
}
