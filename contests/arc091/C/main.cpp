#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m, ans;
  cin >> n >> m;
  if (n == 1 && m == 1)
    ans = 1;
  else if (n == 1)
    ans = m - 2;
  else if (m == 1)
    ans = n - 2;
  else
    ans = (n - 2) * (m - 2);
  cout << ans << endl;
  return 0;
}
