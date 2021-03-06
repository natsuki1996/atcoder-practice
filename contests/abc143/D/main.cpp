#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> l(n);
  rep(i, n) cin >> l[i];
  sort(l.begin(), l.end());
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      auto itr = lower_bound(l.begin(), l.end(), l[i] + l[j]);
      int ng = distance(itr, l.end());
      ans += n - j - 1 - ng;
    }
  }
  cout << ans << endl;
  return 0;
}
