#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

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
