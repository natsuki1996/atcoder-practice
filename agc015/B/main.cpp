#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  ll ans = 0;
  rep(i, s.size()) {
    if (s[i] == 'U') {
      ans += (s.size() - i - 1) + 2 * i;
    } else {
      ans += 2 * (s.size() - i - 1) + i;
    }
  }
  cout << ans << endl;
  return 0;
}
