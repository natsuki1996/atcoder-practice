#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  int l = 0, r = s.size() - 1;
  while (l < r) {
    if (s[l] == s[r]) {
      l++, r--;
      continue;
    }

    if (s[l] == 'x') {
      l++;
      ans++;
      continue;
    }

    if (s[r] == 'x') {
      r--;
      ans++;
      continue;
    }

    cout << -1 << endl;
    return 0;
  }

  cout << ans << endl;

  return 0;
}
