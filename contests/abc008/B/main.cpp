#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n;
  string s;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    cin >> s;
    mp[s]++;
  }

  string ans_s;
  ll ans_c = 0;
  for (auto x : mp) {
    if (ans_c < x.second) {
      ans_c = x.second;
      ans_s = x.first;
    }
  }
  cout << ans_s << endl;
  return 0;
}
