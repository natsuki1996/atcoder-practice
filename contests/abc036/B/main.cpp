#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n;
  cin >> n;
  vector<vector<char>> s(n, vector<char>(n));
  rep(i, n) rep(j, n) cin >> s[j][n - 1 - i];
  rep(i, n) {
    rep(j, n) cout << s[i][j];
    cout << endl;
  }
  return 0;
}
