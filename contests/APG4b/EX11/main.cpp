#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a, b;
  cin >> n >> a;
  char op;
  rep(i, n) {
    cin >> op >> b;
    if (op == '+') a += b;
    if (op == '*') a *= b;
    if (op == '-') a -= b;
    if (op == '/') {
      if (b == 0) {
        cout << "error" << endl;
        break;
      }
      a /= b;
    }
    cout << i + 1 << ":" << a << endl;
  }
  return 0;
}
