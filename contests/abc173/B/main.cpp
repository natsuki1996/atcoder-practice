#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    mp[s]++;
  }

  for (auto s : {"AC", "WA", "TLE", "RE"}) {
    cout << s << " x " << mp[s] << endl;
  }
  return 0;
}
