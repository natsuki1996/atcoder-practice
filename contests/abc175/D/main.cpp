#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<int> p(n), c(n);
  rep(i, n) {
    cin >> p[i];
    p[i]--;
  }
  rep(i, n) cin >> c[i];

  ll ans = -INF;
  rep(si, n) {
    ll x = si, total = 0;
    vector<ll> s(1, 0);
    while (true) {
      x = p[x];
      s.push_back(s[s.size() - 1] + c[x]);
      total += c[x];
      if (x == si) break;
    }
    int l = s.size() - 1;
    rep(i, l) {
      if (i + 1 > k) break;
      ll now = s[i + 1] + max(0LL, total) * ((k - (i + 1)) / l);
      ans = max(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}
