#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> c(h);
  rep(i, h) cin >> c[i];
  rep(i, 2 * h) cout << c[i / 2] << endl;
  return 0;
}
