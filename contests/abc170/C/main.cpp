#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, n, p;
  cin >> x >> n;
  vector<int> pp(101);
  rep(i, n) {
    cin >> p;
    pp[p] = 1;
  }
  int diff = 0;
  while (true) {
    if (pp[x - diff] == 0) {
      cout << x - diff << endl;
      break;
    } else if (pp[x + diff] == 0) {
      cout << x + diff << endl;
      break;
    }
    diff++;
  }
  return 0;
}
