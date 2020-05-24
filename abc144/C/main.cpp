#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1001001001001;

int main() {
  ll n;
  cin >> n;
  ll ans = INF;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) ans = min(ans, i + n / i - 2);
  }
  cout << ans << endl;
  return 0;
}
