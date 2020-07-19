#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, p;
  cin >> n >> p;
  vector<pair<ll, ll>> res;
  for (ll i = 2; i * i <= p; i++) {
    if (p % i != 0) continue;
    int num = 0;
    while (p % i == 0) {
      p /= i;
      num++;
    }
    res.push_back(make_pair(i, num));
  }
  if (p != 1) res.push_back(make_pair(p, 1));
  ll ans = 1;
  for (auto p : res) rep(i, p.second / n) ans *= p.first;
  cout << ans << endl;
  return 0;
}
