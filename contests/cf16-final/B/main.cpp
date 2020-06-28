#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int cnt = 0, y = 0;
  while (cnt < n) {
    y++;
    cnt += y;
  }
  // cerr << cnt << " " << y << endl;
  rep(i, y) {
    if (cnt - n == i + 1) continue;
    cout << i + 1 << endl;
  }
  return 0;
}
