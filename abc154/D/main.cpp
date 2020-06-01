#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k, p;
  cin >> n >> k;
  vector<double> wa(n + 1);
  wa[0] = 0;
  rep(i, n) {
    cin >> p;
    if (p % 2 == 0) {
      wa[i + 1] = wa[i] + (p / 2 + p / 2 + 1) / (double)2;
    } else {
      wa[i + 1] = wa[i] + p / 2 + 1;
    }
  }
  double ans = 0;
  rep(i, n - k + 1) ans = max(ans, wa[i + k] - wa[i]);
  printf("%.10lf\n", ans);
  return 0;
}
