#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int a, b;
  cin >> a >> b;
  rep(x, 12000) {
    if (floor(x * 0.08) == a && floor(x * 0.1) == b) {
      cout << x << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
  return 0;
}
