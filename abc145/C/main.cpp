#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  double ans = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      ans += sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
    }
  }
  cout << fixed << setprecision(15) << ans * 2 / n << endl;
  return 0;
}
