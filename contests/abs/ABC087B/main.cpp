#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int A, B, C, X;
  int cnt = 0;

  cin >> A >> B >> C >> X;

  for (int i = 0; i <= A; i++) {
    for (int j = 0; j <= B; j++) {
      for (int k = 0; k <= C; k++) {
        if (500 * i + 100 * j + 50 * k == X) cnt++;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
