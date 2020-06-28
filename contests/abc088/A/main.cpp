#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a;
  cin >> n >> a;

  bool flag = false;

  n -= 500 * (n / 500);
  if (n <= a) flag = true;

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
