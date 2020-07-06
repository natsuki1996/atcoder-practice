#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k;
  cin >> n >> k;

  ll x = n / k;

  if (k % 2 == 1) {
    cout << x * x * x << endl;
    return 0;
  }

  ll y = n / (k / 2);
  cout << x * x * x + (y - x) * (y - x) * (y - x) << endl;
  return 0;
}
