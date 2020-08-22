#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  string s;
  cin >> s;

  ll total = 0;
  rep(i, s.size()) total += s[i] - '0';
  cout << (total % 9 == 0 ? "Yes" : "No") << endl;
  return 0;
}
