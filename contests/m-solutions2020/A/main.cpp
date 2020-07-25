#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x, ans = 0;
  cin >> x;

  if (400 <= x && x < 600) ans = 8;
  if (600 <= x && x < 800) ans = 7;
  if (800 <= x && x < 1000) ans = 6;
  if (1000 <= x && x < 1200) ans = 5;
  if (1200 <= x && x < 1400) ans = 4;
  if (1400 <= x && x < 1600) ans = 3;
  if (1600 <= x && x < 1800) ans = 2;
  if (1800 <= x && x < 2000) ans = 1;
  cout << ans << endl;
  return 0;
}
