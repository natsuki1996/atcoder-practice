#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int n;
  cin >> n;
  string s;
  map<string, int> m;
  bool flag = true;
  char c;
  rep(i, n) {
    cin >> s;
    if (++m[s] >= 2) flag = false;
    if (i > 0 && c != s[0]) flag = false;
    c = s[s.size() - 1];
  }
  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}
