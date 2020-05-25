#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  if (-a + b <= 0)
    cout << "delicious" << endl;
  else if (-a + b <= x)
    cout << "safe" << endl;
  else
    cout << "dangerous" << endl;
}
