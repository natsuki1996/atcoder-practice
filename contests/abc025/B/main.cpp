#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, a, b, d, ans = 0;
  string s;
  cin >> n >> a >> b;

  auto clamp = [](int v, int lo, int hi) { return min(max(v, lo), hi); };
  rep(i, n) {
    cin >> s >> d;
    if (s == "East")
      ans += clamp(d, a, b);
    else
      ans -= clamp(d, a, b);
  }
  if (ans == 0) {
    cout << 0 << endl;
    return 0;
  }
  cout << (ans > 0 ? "East" : "West") << " " << abs(ans) << endl;
  return 0;
}
