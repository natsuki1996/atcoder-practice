#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, h, prev = 1;
  cin >> n;
  rep(i, n) {
    cin >> h;
    // cerr << i << ' ' << prev << ' ' << h << endl;
    if (prev < h) {
      h--;
    } else if (prev > h) {
      cout << "No" << endl;
      return 0;
    }
    prev = h;
  }
  cout << "Yes" << endl;
  return 0;
}
