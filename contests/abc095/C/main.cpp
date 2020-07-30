#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  int cost = 0;
  if (a + b < c * 2) {
    cost = a * x + b * y;
  } else {
    int k = min(x, y);
    cost = c * 2 * k;
    x -= k, y -= k;
    if (x > 0 && a < c * 2) {
      cost += a * x;
    } else if (y > 0 && b < c * 2) {
      cost += b * y;
    } else {
      cost += c * 2 * (x + y);
    }
  }
  cout << cost << endl;
}
