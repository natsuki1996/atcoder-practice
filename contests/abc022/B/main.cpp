#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, a, ans = 0;
  cin >> n;
  map<int, int> mp;
  rep(i, n) {
    cin >> a;
    mp[a]++;
    if (mp[a] > 1) ans++;
  }
  cout << ans << endl;
  return 0;
}
