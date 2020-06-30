#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> p(m), y(m);
  vector<vector<int>> yd(n);
  rep(i, m) {
    cin >> p[i] >> y[i];
    p[i]--;
    yd[p[i]].push_back(y[i]);
  }
  rep(i, n) sort(yd[i].begin(), yd[i].end());
  rep(i, m) {
    vector<int> pp = yd[p[i]];
    int num = lower_bound(pp.begin(), pp.end(), y[i]) - pp.begin();
    printf("%06d%06d\n", p[i] + 1, num + 1);
  }
  return 0;
}
