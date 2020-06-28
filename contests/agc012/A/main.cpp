#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(3 * n);
  rep(i, 3 * n) cin >> a[i];

  sort(a.rbegin(), a.rend());
  ll ans = 0;
  rep(i, n){
    ans += a[2*i+1];
  }
  cout << ans << endl;
  return 0;
}
