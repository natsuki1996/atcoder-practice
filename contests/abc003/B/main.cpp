#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  string s, t;
  cin >> s >> t;

  auto check = [](char c) {
    return (c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' ||
            c == 'e' || c == 'r');
  };

  rep(i, s.size()) {
    if (s[i] == '@' && check(t[i])) continue;
    if (t[i] == '@' && check(s[i])) continue;
    if (s[i] != t[i]) {
      cout << "You will lose" << endl;
      return 0;
    }
  }
  cout << "You can win" << endl;

  return 0;
}
