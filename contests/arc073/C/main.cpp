#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, t, pt = 0, nt, ans = 0;
  cin >> n >> t;
  rep(i, n) {
    cin >> nt;
    if (nt < pt) ans -= pt - nt;
    ans += t;
    pt = nt + t;
  }
  cout << ans << endl;
  return 0;
}
