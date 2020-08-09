#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  double a, b, x;
  cin >> a >> b >> x;
  x /= a;
  if (x <= a * b / 2) {
    double d = x / b * 2;
    double theta = atan(b / d);
    printf("%.10lf\n", theta * 180 / PI);
  } else {
    double d = (a * b - x) / a * 2;
    double theta = atan(d / a);
    printf("%.10lf\n", theta * 180 / PI);
  }
  return 0;
}
