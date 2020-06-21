#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int64_t n;
  cin >> n;
  string s;
  while (n > 0) {
    s += char('a' + ((n - 1) % 26));
    n = (n - 1) / 26;
  }
  reverse(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
