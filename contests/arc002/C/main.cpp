#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, ans = INF;
  string c;
  cin >> n >> c;
  vector<string> b = {"A", "B", "X", "Y"}, p;
  for (auto x : b)
    for (auto y : b) p.push_back(x + y);

  for (int i = 0; i < p.size(); i++) {
    for (int j = i + 1; j < p.size(); j++) {
      string l = p[i], r = p[j], s;
      rep(k, n) {
        if (c.substr(k, 2) == l) {
          s += 'l';
          k++;
        } else if (c.substr(k, 2) == r) {
          s += 'r';
          k++;
        } else {
          s += c[k];
        }
      }
      ans = min(ans, (ll)s.size());
    }
  }
  cout << ans << endl;
  return 0;
}
