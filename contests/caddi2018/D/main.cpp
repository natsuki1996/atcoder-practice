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

  bool all_even = true;
  rep(i, n) if (a[i] % 2 != 0) all_even = false;

  cout << (all_even ? "second" : "first") << endl;
  return 0;
}
