#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  bool p = a + b == c, m = a - b == c;
  if (p && m) {
    cout << '?' << endl;
  } else if (p) {
    cout << '+' << endl;
  } else if (m) {
    cout << '-' << endl;
  } else {
    cout << '!' << endl;
  }
  return 0;
}
