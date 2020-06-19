#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> p(3);
  rep(i, 3) cin >> p[i];
  sort(p.rbegin(), p.rend());
  cout << (p[0] == p[1] + p[2] ? "Yes" : "No") << endl;
  return 0;
}
