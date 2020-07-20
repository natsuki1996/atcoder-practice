#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  ll k;
  cin >> s >> k;

  map<string, int> mp;
  for (ll i = 0; i < s.size(); i++) {
    for (ll j = 1; j <= min(k, (ll)(s.size() - i)); j++) {
      mp[s.substr(i, j)]++;
    }
  }

  int cnt = 1;
  for (auto x : mp) {
    if (cnt == k) {
      cout << x.first << endl;
      return 0;
    }
    cnt++;
  }
  return 0;
}
