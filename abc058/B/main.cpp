#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string o, e;
  cin >> o >> e;
  rep(i, min(o.size(), e.size())) { cout << o[i] << e[i]; }
  if (o.size() > e.size()) cout << o[o.size() - 1];
  if (o.size() < e.size()) cout << e[e.size() - 1];
  cout << endl;
  return 0;
}
