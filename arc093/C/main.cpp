#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, total = 0, tmp;
  cin >> n;
  vector<ll> a(n + 2), dist(n + 1);
  a[0] = 0;
  rep(i, n) {
    cin >> a[i + 1];
    dist[i] = abs(a[i] - a[i + 1]);
    total += dist[i];
  }
  a[n + 1] = 0;
  dist[n] = abs(a[n] - a[n + 1]);
  total += dist[n];
  // cerr << total << endl;

  rep(i, n) {
    cout << total - (dist[i] + dist[i + 1]) + abs(a[i] - a[i + 2]) << endl;
  }
  return 0;
}
