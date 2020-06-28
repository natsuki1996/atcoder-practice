#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  ll all_xor = 0;
  rep(i, n) {
    cin >> a[i];
    all_xor ^= a[i];
  }

  rep(i, n) {
    cout << (all_xor ^ a[i]);
    if (i != n - 1)
      cout << " ";
    else
      cout << endl;
  }
  return 0;
}
