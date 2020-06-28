#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> b(n), ans;
  rep(i, n) cin >> b[i];
  rep(i, n) {
    for (int j = b.size() - 1; j >= 0; j--) {
      if (j + 1 == b[j]) {
        ans.push_back(b[j]);
        b.erase(b.begin() + j);
        break;
      }
    }

    if (i + 1 != ans.size()) {
      cout << -1 << endl;
      return 0;
    }
  }
  for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << endl;
  return 0;
}
