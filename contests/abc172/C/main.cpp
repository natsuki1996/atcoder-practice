#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, k, t;
  cin >> n >> m >> k;
  vector<ll> a(n), aa(n + 1), b(m), bb(m + 1);
  rep(i, n) {
    cin >> a[i];
    aa[i + 1] = aa[i] + a[i];
  }
  rep(i, m) {
    cin >> b[i];
    bb[i + 1] = bb[i] + b[i];
  }

  ll ans = 0;
  int b_cnt = m;
  rep(a_cnt, n + 1) {
    if (aa[a_cnt] > k) continue;
    while (aa[a_cnt] + bb[b_cnt] > k) b_cnt--;
    ans = max(ans, ll(a_cnt + b_cnt));
  }
  cout << ans << endl;

  return 0;
}
