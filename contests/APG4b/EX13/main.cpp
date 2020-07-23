#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ave = 0;
  rep(i, n) ave += a[i];
  ave /= n;
  rep(i, n) cout << abs(a[i] - ave) << endl;
  return 0;
}
