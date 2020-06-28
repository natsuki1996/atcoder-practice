#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  rep(x, 12000) {
    // cerr << x << " ";
    // cerr << x * 0.08 << " " << floor(x * 0.08) << " ";
    // cerr << x * 0.10 << " " << floor(x * 0.10) << endl;
    if (floor(x * 0.08) == a && floor(x * 0.1) == b) {
      cout << x << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
  return 0;
}
