#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  string s;
  int p;
  vector<pair<pair<string, int>, int>> x(n);
  rep(i, n) {
    cin >> s >> p;
    x[i] = make_pair(make_pair(s, -p), i);
  }

  sort(x.begin(), x.end());

  rep(i, n) cout << x[i].second + 1 << endl;
  return 0;
}
