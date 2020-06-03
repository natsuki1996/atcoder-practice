#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  int total = 0;
  rep(i, n) {
    cin >> l[i];
    total += l[i];
  }
  sort(l.begin(), l.end());
  int max_l = l[l.size() - 1];
  cout << (max_l < total - max_l ? "Yes" : "No") << endl;
  return 0;
}
