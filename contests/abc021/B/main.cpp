#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, a, b, k, p;
  cin >> n >> a >> b >> k;
  map<int, int> mp;
  rep(i, k) {
    cin >> p;
    mp[p]++;
    if (p == a || p == b || mp[p] > 1) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
