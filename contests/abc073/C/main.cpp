#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a;
  cin >> n;
  map<ll, ll> mp;
  rep(i, n) {
    cin >> a;
    if (mp[a]) {
      mp[a]--;
    } else {
      mp[a]++;
    }
  }
  ll cnt = 0;
  for (auto x : mp)
    if (x.second == 1) cnt++;
  cout << cnt << endl;
  return 0;
}
