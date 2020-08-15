#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, ans = 0;
  cin >> n;
  vector<int> l(n);
  rep(i, n) cin >> l[i];

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (l[i] != l[j] && l[j] != l[k] && l[k] != l[i] &&
            l[i] + l[j] > l[k] && l[j] + l[k] > l[i] && l[k] + l[i] > l[j])
          ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
