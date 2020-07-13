#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];

  ll ans = 0;
  rep(i, n - 1) {
    ll cost = min((x[i + 1] - x[i]) * a, b);
    ans += cost;
  }
  cout << ans << endl;
  return 0;
}
