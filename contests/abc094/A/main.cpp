#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, x;
  cin >> a >> b >> x;
  cout << (a <= x && a + b >= x ? "YES" : "NO") << endl;
}
