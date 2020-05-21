#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  for (int x = a; x <= b; x++) {
    if (x < a + k || b - k < x) {
      cout << x << endl;
    }
  }
  return 0;
}
