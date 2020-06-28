#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  double n, k, ans = 0;
  cin >> n >> k;
  for (double i = 1; i <= n; i++) {
    double a = i, p = 1 / n;
    while (a < k) {
      p *= 0.5;
      a *= 2;
    }
    ans += p;
  }
  printf("%.10lf\n", ans);
  return 0;
}
