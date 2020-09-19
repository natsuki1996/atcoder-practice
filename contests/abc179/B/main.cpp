#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, d1, d2, cnt = 0;
  cin >> n;
  rep(i, n) {
    cin >> d1 >> d2;
    if (d1 == d2) {
      cnt++;
      if (cnt == 3) {
        cout << "Yes" << endl;
        return 0;
      }
    } else {
      cnt = 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
