#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, y;
  cin >> n >> y;
  vector<int> res(3, -1);

  rep(a, n + 1) {
    rep(b, n + 1) {
      int c = n - a - b;
      if (10000 * a + 5000 * b + 1000 * c == y && c >= 0) {
        cout << a << " " << b << " " << c << endl;
        return 0;
      }
    }
  }

  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}
