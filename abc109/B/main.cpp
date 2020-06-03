#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

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
