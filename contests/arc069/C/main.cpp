#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m;
  cin >> n >> m;
  if (2 * n <= m) {
    cout << n + (m - 2 * n) / 4 << endl;
  } else {
    cout << m / 2 << endl;
  }
  return 0;
}
