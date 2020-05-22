#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ll x, y;
  cin >> x >> y;
  ll cnt = 0;
  while (x <= y) {
    cnt++;
    x *= 2;
  }
  cout << cnt << endl;
  return 0;
}
