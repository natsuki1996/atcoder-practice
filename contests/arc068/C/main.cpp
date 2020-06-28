#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x, ans = 0;
  cin >> x;
  ans += (x / 11) * 2;
  x %= 11;
  if (x == 0) {
    cout << ans << endl;
    return 0;
  } else if (x - 6 <= 0)
    ans += 1;
  else
    ans += 2;
  cout << ans << endl;
  return 0;
}
