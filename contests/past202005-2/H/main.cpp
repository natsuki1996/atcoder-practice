#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1001001001;
const ll MAX_L = 100000;
ll dp[MAX_L + 10];
ll n, l, tmp;
vector<ll> x(MAX_L + 10);
vector<ll> t(3);

ll rec(ll i) {
  if (i == l) return 0;
  if (dp[i] != INF) return dp[i];

  ll res = INF;

  res = min(res, rec(i + 1) + t[0] + (x[i + 1] == 1 ? t[2] : 0));

  if (i + 2 <= l) {
    res = min(res, rec(i + 2) + t[0] + t[1] + (x[i + 2] == 1 ? t[2] : 0));
  } else {
    res = min(res, rec(l) + t[0] / 2 + t[1] / 2);
  }

  if (i + 4 <= l) {
    res = min(res, rec(i + 4) + t[0] + 3 * t[1] + (x[i + 4] == 1 ? t[2] : 0));
  } else {
    res = min(res, rec(l) + t[0] / 2 + t[1] * (l - i) - t[1] / 2);
  }

  return dp[i] = res;
}

int main() {
  cin >> n >> l;
  rep(i, n) {
    cin >> tmp;
    x[tmp] = 1;
  }
  rep(i, l) dp[i] = INF;
  rep(i, 3) cin >> t[i];

  cout << rec(0) << endl;
  return 0;
}
