#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const double PI = acos(-1);

int main() {
  double a, b, h, m;
  cin >> a >> b >> h >> m;
  double theta_m = m / 60 * 2 * PI;
  double theta_h = (h / 12 + +m / 720) * 2 * PI;
  double ans = sqrt(a * a + b * b - 2 * a * b * cos(abs(theta_h - theta_m)));
  // cout << fixed << setprecision(20) << ans << endl;
  printf("%.10f\n", ans);
  return 0;
}
