#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const int INF = 1001001001;

int main() {
  ll n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll s = 0, m = 1000;
  rep(i, n) {
    if (a[i] < a[i + 1]) {
      s += m / a[i];
      m -= a[i] * (m / a[i]);
    } else if (a[i] > a[i + 1]) {
      m += a[i] * s;
      s = 0;
    }
  }
  if (s > 0) m += a[n - 1] * s;
  cout << m << endl;
  return 0;
}
