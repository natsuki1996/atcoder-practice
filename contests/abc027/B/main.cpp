#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, total = 0;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) {
    cin >> a[i];
    total += a[i];
  }

  if (total % n != 0) {
    cout << -1 << endl;
    return 0;
  }

  ll ave = total / n, ans = 0, cnt = 0, cur = 0;
  rep(i, n) {
    cnt++;
    cur += a[i];
    if (cnt * ave == cur) {
      ans += cnt - 1;
      cnt = 0;
      cur = 0;
    }
  }
  ans += max(0LL, cnt - 1);
  cout << ans << endl;
  return 0;
}
