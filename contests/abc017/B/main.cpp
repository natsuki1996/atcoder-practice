#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  string x;
  cin >> x;
  rep(i, x.size()) {
    string s1 = x.substr(i, 2), s2 = x.substr(i, 1);
    if (s1 != "ch" && s2 != "o" && s2 != "k" && s2 != "u") {
      cout << "NO" << endl;
      return 0;
    }
    if (s1 == "ch") i++;
  }
  cout << "YES" << endl;
  return 0;
}
