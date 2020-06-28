#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll min_median, max_median;
  if (n % 2 == 1) {
    min_median = a[n / 2];
    max_median = b[n / 2];
  } else {
    min_median = a[n / 2 - 1] + a[n / 2];
    max_median = b[n / 2 - 1] + b[n / 2];
  }
  cout << max_median - min_median + 1 << endl;
  return 0;
}
