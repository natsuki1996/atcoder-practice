#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x, a, b;
  cin >> x >> a >> b;

  x++;
  cout << x << endl;

  x *= (a + b);
  cout << x << endl;

  x *= x;
  cout << x << endl;

  x--;
  cout << x << endl;
  return 0;
}
