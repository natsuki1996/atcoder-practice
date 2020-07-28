#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];

  rep(i, n) {
    int cnt = 0;
    while (a[i] % 2 == 0) {
      a[i] /= 2;
      cnt++;
    }
    b[i] = cnt;
  }
  cout << *min_element(b.begin(), b.end()) << endl;
  return 0;
}
