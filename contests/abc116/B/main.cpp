#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int f(int a) {
  if (a % 2 == 0)
    return a / 2;
  else
    return 3 * a + 1;
}

int main() {
  const int max_num = 1000000;
  int s;
  cin >> s;
  vector<int> x(max_num);
  x[s]++;
  rep(i, max_num) {
    s = f(s);
    if (2 == x[s]++) {
      cout << i - 1 << endl;
      break;
    }
  }
  return 0;
}
