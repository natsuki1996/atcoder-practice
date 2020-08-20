#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  string s;
  ll t, x = 0, y = 0, cnt = 0;
  cin >> s >> t;
  rep(i, s.size()) {
    if (s[i] == '?') cnt++;
    if (s[i] == 'U') y++;
    if (s[i] == 'D') y--;
    if (s[i] == 'L') x--;
    if (s[i] == 'R') x++;
  }
  ll base = abs(x) + abs(y);
  if (t == 1) {
    cout << base + cnt << endl;
  } else {
    cout << max(base - cnt, abs(base - cnt) % 2) << endl;
  }

  return 0;
}
