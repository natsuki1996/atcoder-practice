#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1), b(n);
  rep(i, n + 1) cin >> a[i];
  rep(i, n) cin >> b[i];

  ll cnt = 0;
  rep(i, n) {
    int k1 = min(b[i], a[i]);
    int k2 = min(a[i + 1], b[i] - k1);
    a[i + 1] -= k2;
    cnt += k1 + k2;
  }
  cout << cnt << endl;
  return 0;
}
