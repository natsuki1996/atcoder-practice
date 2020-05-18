#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, n1;
  cin >> n;
  n1 = n % 10;

  if (n1 == 3)
    cout << "bon" << endl;
  else if (n1 == 0 || n1 == 1 || n1 == 6 || n1 == 8)
    cout << "pon" << endl;
  else
    cout << "hon" << endl;
  return 0;
}
