#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

const int mod = 10007;

int main() {
  ll n;
  cin >> n;
  vector<int> a(n + 1);
  a[1] = 0;
  a[2] = 0;
  a[3] = 1;
  for (int i = 4; i <= n; i++) {
    a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    a[i] %= mod;
  }
  cout << a[n] << endl;
  return 0;
}
