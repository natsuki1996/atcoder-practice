#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int k, x;
  cin >> k >> x;
  int l = max(x - k + 1, -1000000);
  int r = min(x + k - 1, +1000000);
  for (int i = l; i < r + 1; i++) cout << i << " ";
  cout << endl;
  return 0;
}
