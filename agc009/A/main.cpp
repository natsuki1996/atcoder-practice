#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  ll ans = 0;
  for (int i = n - 1; i >= 0; i--) {
    int dif = (b[i] - (a[i] + ans) % b[i]) % b[i];
    ans += dif;
    // cerr << dif << " " << ans << endl;
  }
  cout << ans << endl;
  return 0;
}
