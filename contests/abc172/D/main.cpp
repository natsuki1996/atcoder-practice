#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll calc(int b, int e) {
  cerr << b << " " << e << endl;
  ll cnt = e / b;
  return (b + e) * cnt / 2;
}

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  for (int i = 1; i <= n; i++) ans += calc(i, n / i * i);
  cout << ans << endl;
  return 0;
}
