#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

double calc_dist(vector<int> a, vector<int> b) {
  double ans = 0;
  rep(i, a.size()) ans += pow(a[i] - b[i], 2);
  return sqrt(ans);
}

int main() {
  int n, d;
  cin >> n >> d;
  vector<vector<int>> x(n, vector<int>(d));
  rep(i, n) rep(j, d) cin >> x[i][j];
  int cnt = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      double dist = calc_dist(x[i], x[j]);
      if (ceil(dist) == floor(dist)) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
