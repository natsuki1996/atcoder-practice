#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int n, q, l, r, t;
  cin >> n >> q;
  vector<int> a(n, 0);
  rep(i, q) {
    cin >> l >> r >> t;
    l--, r--;
    for (int i = l; i <= r; i++) a[i] = t;
  }

  rep(i, n) cout << a[i] << endl;
  return 0;
}
