#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 62;

int main() {
  ll n;
  cin >> n;
  vector<ll> x(n), y(n), p(n);
  rep(i, n) cin >> x[i] >> y[i] >> p[i];

  vector<vector<ll>> xsel(1 << n, vector<ll>(n));
  vector<vector<ll>> ysel(1 << n, vector<ll>(n));
  rep(i, 1 << n) {
    rep(j, n) {
      xsel[i][j] = abs(x[j]);
      ysel[i][j] = abs(y[j]);
      rep(k, n) {
        if ((i >> k) & 1) {
          xsel[i][j] = min(xsel[i][j], abs(x[j] - x[k]));
          ysel[i][j] = min(ysel[i][j], abs(y[j] - y[k]));
        }
      }
    }
  }

  vector<ll> ans(n + 1, INF);
  rep(i, 1 << n) {
    ll cnt = __builtin_popcount(i);
    for (ll j = i; j >= 0; j--) {
      j &= i;
      ll cost = 0;
      rep(k, n) {
        if (!((i >> k) & 1)) {
          cost += 1LL * min(xsel[j][k], ysel[i - j][k]) * p[k];
        }
      }
      ans[cnt] = min(ans[cnt], cost);
    }
  }

  for (ll i = 0; i <= n; i++) cout << ans[i] << endl;
}
