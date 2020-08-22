#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, x, t;
  cin >> n >> x >> t;
  cout << n / x * t + (n % x == 0 ? 0 : t) << endl;
  return 0;
}
