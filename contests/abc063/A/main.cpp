#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  int res = a + b;
  if (res < 10)
    cout << res << endl;
  else
    cout << "error" << endl;
}
