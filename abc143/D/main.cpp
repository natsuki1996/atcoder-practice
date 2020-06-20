#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

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
