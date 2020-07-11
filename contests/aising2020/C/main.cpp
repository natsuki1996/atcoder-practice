#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> d(n + 1);
  for (int x = 1; x <= n; x++) {
    for (int y = 1; y <= n; y++) {
      for (int z = 1; z <= n; z++) {
        int v = x * x + y * y + z * z + x * y + y * z + z * x;
        if (v <= n) {
          d[v]++;
        } else {
          break;
        }
      }
    }
  }

  rep(i, n) cout << d[i + 1] << endl;
  return 0;
}
