#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int a, b;
  rep(i, s.size()) {
    if (s[i] == 'A') {
      a = i;
      break;
    }
  }
  rep(i, s.size()) {
    if (s[s.size() - 1 - i] == 'Z') {
      b = s.size() - 1 - i;
      break;
    }
  }
  // cerr << a << ' ' << b << endl;
  cout << b - a + 1 << endl;
  return 0;
}
