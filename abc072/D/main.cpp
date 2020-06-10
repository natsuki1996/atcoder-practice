#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  vector<ll> p(n);
  rep(i, n) cin >> p[i];

  ll cnt = 0;
  for (int i = 0; i < n - 1; i++) {
    if (p[i] == i + 1) {
      swap(p[i], p[i + 1]);
      cnt++;
    }
  }
  if (p[n - 1] == n) cnt++;
  cout << cnt << endl;
  return 0;
}
