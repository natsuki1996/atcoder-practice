#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, m;
  cin >> n >> m;
  double theta_n = (n % 12) * 30 + m / 60. * 30;
  double theta_m = m * 6.;
  printf("%.10lf\n", min(abs(theta_n - theta_m), 360 - abs(theta_n - theta_m)));
  return 0;
}
