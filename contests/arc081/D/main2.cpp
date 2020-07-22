#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;

  vector<string> s(2);
  rep(i, 2) cin >> s[i];

  const ll mod = 1000000007;
  ll ans = 3;

  rep(i, n - 1) {
    // s0s2
    // s1s3
    vector<char> ss = {s[0][i], s[1][i], s[0][i + 1], s[1][i + 1]};

    if (ss[0] == ss[1] && ss[2] == ss[3]) {
      // ab
      // ab
      ans *= 2;
      ans %= mod;
    } else if (ss[0] == ss[1] && ss[2] != ss[3]) {
      // ab
      // ac
      ans *= 2;
      ans %= mod;
    } else if (ss[0] != ss[1] && ss[2] != ss[3] && ss[0] != ss[2]) {
      // ac
      // bd
      ans *= 3;
      ans %= mod;
    } else {
      if (i == 0) {
        ans *= 2;
        ans %= mod;
      }
      // aa    ac
      // bb or bc
      // skip
    }
  }
  cout << ans << endl;
  return 0;
}
