#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int i = 0, cnt = 0;
  while (n / (int)pow(10, i) != 0) {
    if (i % 2 == 0) {
      if (n / pow(10, i) < 10)
        cnt += n - pow(10, i) + 1;
      else
        cnt += 9 * pow(10, i);
    }
    i++;
  }
  cout << cnt << endl;
  return 0;
}
