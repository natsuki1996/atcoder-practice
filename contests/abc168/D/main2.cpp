#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, a, b;
  cin >> n >> m;
  vector<vector<int>> d(n);
  rep(i, m) {
    cin >> a >> b;
    a--, b--;
    d[a].push_back(b);
    d[b].push_back(a);
  }

  queue<int> q;
  vector<int> visited(n, -1);
  q.push(0);
  visited[0] = 0;
  while (!q.empty()) {
    int p = q.front();
    q.pop();
    rep(j, d[p].size()) {
      int np = d[p][j];
      if (visited[np] == -1) {
        q.push(np);
        visited[np] = visited[p] + 1;
      }
    }
  }
  rep(i, n) {
    if (visited[i] == -1) {
      cout << "No" << endl;
      return 0;
    }
  }

  //   rep(i, n) cerr << visited[i] << ' ';
  //   cerr << endl;

  vector<P> p1, p2;
  rep(i, n) p1.emplace_back(visited[i], i);
  sort(p1.begin(), p1.end());
  int np = 0, nd = 0;
  rep(i, n) {
    if (p1[i].first == nd) {
      p2.emplace_back(p1[i].second, np);
    } else {
      np = p1[i - 1].second;
      nd++;
      p2.emplace_back(p1[i].second, np);
    }
  }
  sort(p2.begin(), p2.end());
  cout << "Yes" << endl;
  for (int i = 1; i < n; i++) cout << p2[i].second + 1 << endl;

  return 0;
}
