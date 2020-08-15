#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll x, k, d;
  cin >> x >> k >> d;
  bool flag = (x > 0);
  x = abs(x);
  ll cnt = min(k, x / d);

  x -= cnt * d;
  k -= cnt;

  if (k == 0) {
    cout << abs(x) << endl;
    return 0;
  }

  if (k % 2 == 0) {
    cout << abs(x) << endl;
  } else {
    x -= d;
    cout << abs(x) << endl;
  }

  return 0;
}
