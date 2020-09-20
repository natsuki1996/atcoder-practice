#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll m, ans;
  cin >> m;
  if (m < 100) {
    ans = 0;
  } else if (100 <= m && m <= 5000) {
    ans = m / 100;
  } else if (6000 <= m && m <= 30000) {
    ans = m / 1000 + 50;
  } else if (35000 <= m && m <= 70000) {
    ans = (m / 1000 - 30) / 5 + 80;
  } else if (70000 < m) {
    ans = 89;
  }

  if (ans < 10) cout << 0;
  cout << ans << endl;
  return 0;
}