#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int N;
  int t[110000], x[110000], y[110000];
  cin >> N;
  t[0] = x[0] = y[0] = 0;

  for (int i = 1; i <= N; i++) cin >> t[i] >> x[i] >> y[i];

  bool can = true;
  for (int i = 0; i < N; i++) {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if (dt < dist) can = false;
    if (dist % 2 != dt % 2) can = false;
  }

  if (can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
