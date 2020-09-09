#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, r, n;
  cin >> a >> r >> n;
  rep(i, n - 1) {
    a *= r;
    if (a > 1e9) {
      cout << "large" << endl;
      return 0;
    }
  }
  cout << a << endl;
  return 0;
}
