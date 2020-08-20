#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll l, h, n, a;
  cin >> l >> h >> n;
  rep(i, n) {
    cin >> a;
    if (a < l) {
      cout << l - a << endl;
    } else if (l <= a && a <= h) {
      cout << 0 << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
