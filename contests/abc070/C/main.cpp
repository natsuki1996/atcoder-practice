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
  ll n, t, ans = 1;
  cin >> n;
  rep(i, n) {
    cin >> t;
    ans = lcm(ans, t);
  }
  cout << ans << endl;
  return 0;
}
