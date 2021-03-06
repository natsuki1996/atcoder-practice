#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  bool flag = false;
  for (int a = 0; a <= n; a++) {
    for (int b = 0; b <= m; b++) {
      if (a * (m - b) + b * (n - a) == k) flag = true;
    }
  }
  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}
