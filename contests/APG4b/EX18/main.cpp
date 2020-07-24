#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m, a, b;
  cin >> n >> m;
  vector<vector<char>> r(n, vector<char>(n, '-'));
  rep(i, m) {
    cin >> a >> b;
    a--, b--;
    r[a][b] = 'o';
    r[b][a] = 'x';
  }

  rep(i, n) rep(j, n) printf("%c%c", r[i][j], (j == n - 1 ? '\n' : ' '));
  return 0;
}
