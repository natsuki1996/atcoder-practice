#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  string s;
  map<string, int> mp;

  cin >> n;
  rep(i, n) {
    cin >> s;
    mp[s]++;
  }

  cin >> m;
  rep(i, m) {
    cin >> s;
    mp[s]--;
  }

  int ans = 0;
  for (auto x : mp) ans = max(ans, x.second);
  cout << ans << endl;

  return 0;
}
