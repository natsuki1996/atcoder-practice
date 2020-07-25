#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, c, k;
  cin >> a >> b >> c >> k;

  ll cnt = 0;
  while (a >= b) {
    b *= 2;
    cnt++;
  }
  while (b >= c) {
    c *= 2;
    cnt++;
  }

  cout << (cnt <= k ? "Yes" : "No") << endl;

  return 0;
}
