#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a;
  cin >> n;
  ll ans = 0;
  rep(i, n) {
    cin >> a;
    if (i % 2 == 0 && a % 2 == 1) ans++;
  }
  cout << ans << endl;
  return 0;
}
