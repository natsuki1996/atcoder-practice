#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, ans = 0;
  cin >> n;
  string s;
  map<string, int> mp;
  rep(i, n) {
    cin >> s;
    sort(s.begin(), s.end());
    ans += mp[s];
    mp[s]++;
  }
  cout << ans << endl;
  return 0;
}
