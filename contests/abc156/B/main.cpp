#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, ans = 1;
  cin >> n >> k;
  while (n / k != 0) {
    n /= k;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
