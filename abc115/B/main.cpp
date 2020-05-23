#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  sort(p.begin(), p.end());
  int ans = 0;
  rep(i, n) {
    if (i == n - 1)
      ans += p[i] / 2;
    else
      ans += p[i];
  }
  cout << ans << endl;
  return 0;
}
