#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int cnt = 0, n = s.size();
  rep(i, n / 2) if (s[i] != s[n - 1 - i]) cnt++;
  cout << cnt << endl;
  return 0;
}
