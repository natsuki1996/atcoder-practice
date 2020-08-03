#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

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
