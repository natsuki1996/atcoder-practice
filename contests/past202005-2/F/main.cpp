#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  vector<string> a(n), aa(n);
  rep(i, n) cin >> a[i];
  aa = a;

  rep(i, n / 2) {
    set<char> st1, st2, res;
    rep(j, n) st1.insert(a[i][j]);
    rep(j, n) st2.insert(a[n - 1 - i][j]);
    set_intersection(st1.begin(), st1.end(), st2.begin(), st2.end(),
                     inserter(res, res.end()));
    string vec;
    for (auto x : res) vec.push_back(x);
    aa[i] = vec;
    aa[n - 1 - i] = vec;
  }

  rep(i, n) {
    if (aa[i].size() == 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  rep(i, n) cout << aa[i][0];
  cout << endl;

  return 0;
}
