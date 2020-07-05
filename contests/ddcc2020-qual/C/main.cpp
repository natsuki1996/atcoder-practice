#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, k, num = 0;
  cin >> h >> w >> k;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector<vector<int>> a(h, vector<int>(w));

  vector<int> cnt(h);
  rep(i, h) rep(j, w) if (s[i][j] == '#') cnt[i]++;

  auto solve = [&](int cl, int cr) {
    vector<int> P;
    for (int i = cl; i < cr; i++) rep(j, w) if (s[i][j] == '#') P.push_back(j);
    sort(P.begin(), P.end());

    rep(i, P.size()) {
      int v1 = 0, v2 = w;
      if (i >= 1) v1 = P[i - 1] + 1;
      if (i < P.size() - 1) v2 = P[i] + 1;
      num++;
      for (int j = cl; j < cr; j++)
        for (int k = v1; k < v2; k++) a[j][k] = num;
    }
  };

  vector<int> vec;
  rep(i, h) if (cnt[i] >= 1) vec.push_back(i);

  rep(i, vec.size()) {
    int v1 = 0, v2 = h;
    if (i >= 1) v1 = vec[i - 1] + 1;
    if (i < vec.size() - 1) v2 = vec[i] + 1;
    solve(v1, v2);
  }

  rep(i, h) rep(j, w) printf("%d%c", a[i][j], (j == w - 1 ? '\n' : ' '));

  return 0;
}
