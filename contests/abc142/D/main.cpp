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
  ll a, b;
  cin >> a >> b;
  ll d = gcd(a, b);
  vector<pair<ll, int>> f;
  for (ll i = 2; i * i <= d; i++) {
    if (d % i) continue;
    f.emplace_back(i, 0);
    while (d % i == 0) {
      d /= i;
      f.back().second++;
    }
  }
  if (d != 1) f.emplace_back(d, 1);
  // rep(i, f.size()) cerr << f[i].first << endl;
  cout << f.size() + 1 << endl;
  return 0;
}
