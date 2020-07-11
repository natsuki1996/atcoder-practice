#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int l, r, d;
  cin >> l >> r >> d;
  cout << r / d - (l - 1) / d << endl;
  return 0;
}
