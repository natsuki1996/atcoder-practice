#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
  ll h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector<vector<int>> d(h, vector<int>(w, 0));
  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '#') {
        rep(k, 8) {
          int nx = i + dx[k];
          int ny = j + dy[k];
          if (0 <= nx && nx < h && 0 <= ny && ny < w) d[nx][ny]++;
        }
      }
    }
  }

  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '#') {
        cout << '#';
      } else {
        cout << d[i][j];
      }
    }
    cout << endl;
  }
  return 0;
}
