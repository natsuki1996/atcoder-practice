#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  int p;
  string s;
  int wa = 0;
  map<int, int> mp;
  rep(i, m) {
    cin >> p >> s;
    if (mp[p] != -1) {
      if (s == "AC") {
        wa += mp[p];
        mp[p] = -1;
      } else {  // s == "WA"
        mp[p]++;
      }
    }
  }
  int ans = 0;
  for (auto x : mp)
    if (x.second == -1) ans++;
  cout << ans << ' ' << wa << endl;
  return 0;
}
