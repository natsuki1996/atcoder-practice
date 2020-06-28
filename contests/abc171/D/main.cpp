#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, q, b, c;
  cin >> n;
  // vector<int> a(n);
  map<ll, ll> mp;
  rep(i, n) {
    // cin >> a[i];
    int a;
    cin >> a;
    mp[a]++;
  }

  ll ans = 0;
  for (auto x : mp) ans += x.first * x.second;

  cin >> q;
  rep(i, q) {
    cin >> b >> c;
    mp[c] += mp[b];
    ans -= b * mp[b];
    ans += c * mp[b];
    mp[b] = 0;
    cout << ans << endl;
  }
  return 0;
}
