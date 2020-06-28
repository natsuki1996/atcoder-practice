#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k, a;
  cin >> n >> k;
  map<ll, ll> mp;
  rep(i, n) {
    cin >> a;
    mp[a]++;
  };

  vector<P> vec;
  for (auto x : mp) vec.emplace_back(x.second, x.first);
  sort(vec.begin(), vec.end());

  ll types = mp.size();
  ll ans = 0;
  rep(i, vec.size()) {
    if (types <= k) break;
    ans += vec[i].first;
    types--;
  }
  cout << ans << endl;
  return 0;
}
