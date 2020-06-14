#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a;
  cin >> n;
  vector<ll> total(n + 1);
  rep(i, n) {
    cin >> a;
    total[i + 1] = total[i] + a;
  }

  ll ans = 1e16;
  for (int i = 1; i < n; i++) {
    ans = min(ans, abs(total[i] - (total[n] - total[i])));
  }
  cout << ans << endl;
  return 0;
}
