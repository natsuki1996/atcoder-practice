#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll a, b, x;
  cin >> a >> b >> x;

  auto d = [&](ll n) {
    int res = 0;
    while (n) {
      n /= 10;
      res++;
    }
    return res;
  };

  auto f = [&](ll n) { return a * n + b * d(n); };

  ll l = 0, r = 1000000001;
  while (r - l > 1) {
    // cerr << l << ' ' << r << endl;
    ll mid = (l + r) / 2;
    if (f(mid) <= x)
      l = mid;
    else
      r = mid;
  }
  cout << l << endl;
  return 0;
}
