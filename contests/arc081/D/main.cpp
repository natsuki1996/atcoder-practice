#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll mod = 1000000007;

int main() {
  ll n;
  cin >> n;
  vector<string> s(2);
  rep(i, 2) cin >> s[i];

  ll ans = 3;
  int si = 0;
  if (n > 1 && s[0][0] == s[0][1]) ans *= 2, si++;  // YY
  for (int i = si; i < n - 1; i++) {
    if (s[0][i] == s[1][i]) {
      ans = ans * 2 % mod;
      if (s[0][i + 1] != s[1][i + 1]) i++;
    } else {
      if (s[0][i + 1] != s[1][i + 1]) {
        ans = ans * 3 % mod;
        i++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
