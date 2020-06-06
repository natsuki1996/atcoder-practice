#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a;
  cin >> n;
  vector<ll> b;
  map<ll, ll> mp;
  rep(i, n) {
    cin >> a;
    mp[a]++;
    if (mp[a] % 2 == 0) b.push_back(a);
  }
  if (b.size() < 2) {
    cout << 0 << endl;
    return 0;
  }
  sort(b.rbegin(), b.rend());
  cout << b[0] * b[1] << endl;
  return 0;
}
