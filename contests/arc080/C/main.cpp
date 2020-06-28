#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a, v0 = 0, v2 = 0, v4 = 0;
  cin >> n;
  rep(i, n) {
    cin >> a;
    if (a % 4 == 0)
      v4++;
    else if (a % 2 == 0)
      v2++;
    else
      v0++;
  }

  if (v2 == 0)
    cout << (v0 - v4 <= 1 ? "Yes" : "No") << endl;
  else
    cout << (v0 - v4 == 0 ? "Yes" : "No") << endl;

  return 0;
}
