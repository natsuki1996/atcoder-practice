#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a;
  cin >> n;
  map<int, int> mp;
  rep(i, n) {
    cin >> a;
    mp[a]++;
  }
  int max_v = 0;
  P p;
  for (auto x : mp)
    if (max_v < x.second) p = x, max_v = x.second;
  cout << p.first << " " << p.second << endl;
  return 0;
}
