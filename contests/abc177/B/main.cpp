#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  string s, t;
  cin >> s >> t;
  ll ans = INF;
  rep(i, s.size() - t.size() + 1) {
    ll cnt = 0;
    rep(j, t.size()) if (s[i + j] != t[j]) cnt++;
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
