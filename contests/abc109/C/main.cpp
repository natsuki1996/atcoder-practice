#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }

int main() {
  ll n, X;
  cin >> n >> X;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  sort(x.begin(), x.end());
  if (n == 1) {
    cout << abs(X - x[0]) << endl;
    return 0;
  }
  ll ans = abs(x[0] - x[1]), ans2 = 0;
  rep(i, n - 3) ans = gcd(ans, abs(x[i + 1] - x[i + 2]));
  rep(i, n) ans2 = max(ans2, gcd(ans, X - x[i]));
  cout << ans2 << endl;
  return 0;
}
