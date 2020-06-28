#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x;
  cin >> x;
  ll ans = 0, dist = 0;
  while (dist < x) {
    ans++;
    dist += ans;
  }
  cout << ans << endl;
  return 0;
}
