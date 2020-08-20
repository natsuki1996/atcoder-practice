#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, p, total = 0;
  string s;
  cin >> n;
  vector<pair<ll, string>> a;
  rep(i, n) {
    cin >> s >> p;
    a.emplace_back(p, s);
    total += p;
  }
  sort(a.rbegin(), a.rend());
  cout << (a[0].first > total / 2 ? a[0].second : "atcoder") << endl;
  return 0;
}
