#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  rep(i, s.size()) mp[s[i]]++;
  int a = mp['a'], b = mp['b'], c = mp['c'];
  // cerr << a << " " << b << " " << c << endl;
  if (abs(a - b) <= 1 && abs(b - c) <= 1 && abs(c - a) <= 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
