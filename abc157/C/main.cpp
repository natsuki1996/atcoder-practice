#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;

  vector<P> con(m);
  rep(i, m) cin >> con[i].first >> con[i].second;

  rep(i, pow(10, n)) {
    int keta = 1;
    int nx = i / 10;
    vector<int> digit(1, i % 10);
    while (nx) {
      keta++;
      digit.push_back(nx % 10);
      nx /= 10;
    }
    if (keta != n) continue;
    reverse(digit.begin(), digit.end());

    bool flag = true;
    rep(j, m) if (digit[con[j].first - 1] != con[j].second) flag = false;

    if (flag) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
