#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n;
  cin >> n;
  vector<ll> r(n);
  rep(i, n) cin >> r[i];
  sort(r.rbegin(), r.rend());

  double ans = 0;
  rep(i, n) {
    if (i % 2 == 0) {
      ans += r[i] * r[i] * PI;
    } else {
      ans -= r[i] * r[i] * PI;
    }
  }
  printf("%.10lf\n", ans);
  return 0;
}
