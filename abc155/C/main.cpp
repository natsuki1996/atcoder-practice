#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  string s;
  rep(i, n) {
    cin >> s;
    mp[s]++;
  }
  int cnt = 0;
  for (auto x : mp) cnt = max(cnt, x.second);
  for (auto x : mp)
    if (x.second == cnt) cout << x.first << endl;
  return 0;
}
