#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, a, ans = 0, cnt = 0;
  cin >> n;
  rep(i, n) {
    cin >> a;
    ans += a;
    if (a != 0) cnt++;
  }
  cout << ceil((double)ans / cnt) << endl;
  return 0;
}
