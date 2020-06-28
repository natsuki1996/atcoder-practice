#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, total = 0;
  cin >> n;
  vector<ll> s(n);
  rep(i, n) {
    cin >> s[i];
    total += s[i];
  }
  sort(s.begin(), s.end());
  if (total % 10 != 0) {
    cout << total << endl;
    return 0;
  }
  rep(i, n) {
    if (s[i] % 10 != 0) {
      cout << total - s[i] << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}
