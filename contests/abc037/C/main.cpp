#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, k, ans = 0;
  cin >> n >> k;
  vector<ll> a(n), b(n + 1);
  rep(i, n) {
    cin >> a[i];
    b[i + 1] = b[i] + a[i];
  }
  rep(i, n - k + 1) ans += b[i + k] - b[i];
  cout << ans << endl;
  return 0;
}
