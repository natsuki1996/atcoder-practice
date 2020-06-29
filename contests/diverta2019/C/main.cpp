#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
  for (auto t : s) {
    rep(j, t.size()) if (t.substr(j, 2) == "AB") c0++;
    if (t.front() == 'B' && t.back() == 'A') c1++;
    if (t.front() == 'B' && t.back() != 'A') c2++;
    if (t.front() != 'B' && t.back() == 'A') c3++;
  }

  if (c2 + c3 == 0) {
    cout << c0 + max(0, c1 - 1) << endl;
  } else {
    cout << min(c0 + c1 + c2, c0 + c1 + c3) << endl;
  }
  return 0;
}
