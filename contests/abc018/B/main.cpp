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
  ll n, l, r;
  cin >> s >> n;
  rep(i, n) {
    cin >> l >> r;
    l--, r--;
    string s1 = s.substr(0, l);
    string s2 = s.substr(l, r - l + 1);
    string s3 = s.substr(r + 1, s.size() - r - 1);
    reverse(s2.begin(), s2.end());
    s = s1 + s2 + s3;
  }
  cout << s << endl;
  return 0;
}
