#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a, b;
  cin >> n;
  vector<P> p;
  rep(i, n) {
    cin >> a >> b;
    p.push_back(P(b, a));
  }
  sort(p.begin(), p.end());
  for (auto x : p) {
    tie(b, a) = x;
    cout << a << " " << b << endl;
  }
  return 0;
}
