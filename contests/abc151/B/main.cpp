#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, m, a, total = 0;
  cin >> n >> k >> m;
  rep(i, n - 1) {
    cin >> a;
    total += a;
  }
  int target = max(0, n * m - total);
  cout << (target <= k ? target : -1) << endl;
  return 0;
}
