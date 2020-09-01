#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k, ans = 0;
  cin >> n >> k;
  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  sort(h.begin(), h.end());
  rep(i, n - k) ans += h[i];
  cout << ans << endl;
  return 0;
}
