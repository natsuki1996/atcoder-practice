#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  vector<ll> a(s.size() + 1);
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '<') a[i + 1] = max(a[i + 1], a[i] + 1);
  }
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '>') a[i] = max(a[i], a[i + 1] + 1);
  }

  ll ans = 0;
  for (auto v : a) {
    ans += v;
  }
  cout << ans << endl;
  return 0;
}
