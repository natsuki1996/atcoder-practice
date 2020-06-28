#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), d(1e6 + 1), cnt(1e6 + 1);
  rep(i, n) {
    cin >> a[i];
    if (cnt[a[i]] == 0) {
      for (int j = a[i] * 2; j < 1e6 + 1; j += a[i]) {
        d[j] = 1;
      }
    }
    cnt[a[i]]++;
  }

  int ans = 0;
  rep(i, n) if (d[a[i]] == 0 && cnt[a[i]] == 1) ans++;
  cout << ans << endl;
  return 0;
}
