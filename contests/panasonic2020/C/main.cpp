#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll d = c - a - b;
  cout << (d > 0 && 4 * a * b < d * d ? "Yes" : "No") << endl;
  return 0;
}
