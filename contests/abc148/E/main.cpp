#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n;
  cin >> n;
  if (n % 2 == 1) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = 0, d = 10;
  while (d <= n) {
    ans += n / d;
    d *= 5;
  }

  cout << ans << endl;
  return 0;
}
