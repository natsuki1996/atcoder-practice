#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, a;
  cin >> n;
  vector<ll> total(n + 1);
  rep(i, n) {
    cin >> a;
    total[i + 1] = total[i] + a;
  }

  ll ans = 1e16;
  for (int i = 1; i < n; i++) {
    ans = min(ans, abs(total[i] - (total[n] - total[i])));
  }
  cout << ans << endl;
  return 0;
}
