#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a;
  cin >> n;
  int cnt = 0, now = 1;
  rep(i, n) {
    cin >> a;
    if (now == a) {
      now++;
    } else {
      cnt++;
    }
  }
  if (cnt == n) {
    cout << "-1" << endl;
  } else {
    cout << cnt << endl;
  }
  return 0;
}
