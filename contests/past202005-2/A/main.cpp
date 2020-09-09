#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t;
  cin >> s >> t;
  string ss = s, tt = t;
  transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
  transform(tt.begin(), tt.end(), tt.begin(), ::tolower);
  if (s == t) {
    cout << "same" << endl;
  } else if (ss == tt) {
    cout << "case-insensitive" << endl;
  } else {
    cout << "different" << endl;
  }
  return 0;
}
