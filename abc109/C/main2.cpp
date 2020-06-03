#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ll n, X;
  cin >> n >> X;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  ll ans = X - x[0];
  for (int i = 1; i < n; i++) ans = gcd(ans, X - x[i + 1]);
  cout << ans << endl;
  return 0;
}
