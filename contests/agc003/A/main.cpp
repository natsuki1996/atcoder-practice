#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  string S;
  cin >> S;
  int n = 0, w = 0, s = 0, e = 0;
  rep(i, S.size()) {
    switch (S[i]) {
      case 'N':
        n = 1;
        break;
      case 'W':
        w = 1;
        break;
      case 'S':
        s = 1;
        break;
      case 'E':
        e = 1;
        break;
    }
  }
  cout << (n == s && w == e ? "Yes" : "No") << endl;
  return 0;
}
