#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  rep(i, n) {
    cin >> p[i];
    q[i] = p[i];
  }
  sort(q.begin(), q.end());
  if (p == q) {
    cout << "YES" << endl;
    return 0;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      swap(p[i], p[j]);
      bool flag = true;
      if (p == q) {
        cout << "YES" << endl;
        return 0;
      }
      swap(p[i], p[j]);
    }
  }
  cout << "NO" << endl;
  return 0;
}
