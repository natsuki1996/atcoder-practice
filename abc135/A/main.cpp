#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  if (abs(a - b) % 2 != 0)
    cout << "IMPOSSIBLE" << endl;
  else
    cout << (a + b) / 2 << endl;
  return 0;
}
