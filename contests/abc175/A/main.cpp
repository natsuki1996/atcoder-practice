#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll cnt = 0, ans = 0;
  string s;
  cin >> s;
  rep(i, 3) {
    if (s[i] == 'R')
      cnt++;
    else
      ans = max(ans, cnt), cnt = 0;
  }
  ans = max(ans, cnt);
  cout << ans << endl;
  return 0;
}
