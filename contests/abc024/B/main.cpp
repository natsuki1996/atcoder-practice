#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, t, a, ans = 0, open = 0;
  cin >> n >> t;
  rep(i, n) {
    cin >> a;
    if (open > a) ans -= open - a;
    ans += t;
    open = a + t;
  }
  cout << ans << endl;
  return 0;
}
