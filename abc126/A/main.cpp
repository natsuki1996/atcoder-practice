#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  s[k - 1] = tolower(s[k - 1]);
  cout << s << endl;
  return 0;
}
