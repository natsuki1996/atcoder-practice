#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> mp;
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }

  int cur = 0, cnt = 0;
  while (cur != 1) {
    if (mp[cur]) {
      cout << "-1" << endl;
      return 0;
    }
    mp[cur]++;
    cur = a[cur];
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}
