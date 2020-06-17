#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  rep(i, n) {
    int tmp = 0;
    string s1 = s.substr(0, i), s2 = s.substr(i);
    for (char c = 'a'; c <= 'z'; c++) {
      bool founds1 = false, founds2 = false;
      rep(j, s1.length()) if (s1[j] == c) founds1 = true;
      rep(j, s2.length()) if (s2[j] == c) founds2 = true;
      if (founds1 && founds2) tmp++;
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
