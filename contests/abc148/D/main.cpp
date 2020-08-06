#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int n, a;
  cin >> n;
  int cnt = 0, now = 1;
  rep(i, n) {
    cin >> a;
    if (now == a) {
      now++;
    } else {
      cnt++;
    }
  }
  cout << (cnt == n ? -1 : cnt) << endl;
  return 0;
}
