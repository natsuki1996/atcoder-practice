#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  char c[4][4];
  rep(i, 4) rep(j, 4) cin >> c[i][j];
  rep(i, 4) rep(j, 4) printf("%c%c", c[3 - i][3 - j], (j == 3 ? '\n' : ' '));
  return 0;
}
