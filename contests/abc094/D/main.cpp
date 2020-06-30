#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  int x = a[n - 1], y;
  int min_v = 1001001001;
  rep(i, n) {
    int tmp = abs((x + 1) / 2 - a[i]);
    if (min_v > tmp) {
      y = a[i];
      min_v = tmp;
    }
  }
  cout << x << " " << y << endl;
  return 0;
}
