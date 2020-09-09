#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<int>> scores(n, vector<int>(m, 0));
  vector<int> point(m, n);

  int t, a, b;
  rep(i, q) {
    cin >> t;
    if (t == 1) {
      cin >> a;
      a--;
      int score = 0;
      rep(j, m) if (scores[a][j]) score += point[j];
      cout << score << endl;
    } else {
      cin >> a >> b;
      a--, b--;
      if(scores[a][b]) continue;
      scores[a][b] = 1;
      point[b]--;
    }
  }
  return 0;
}
