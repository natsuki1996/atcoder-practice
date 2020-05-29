#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  map<char, int> m;
  rep(i, s.size()) {
    if (m[s[i]] > 0) {
      cout << "no" << endl;
      return 0;
    }
    m[s[i]]++;
  }
  cout << "yes" << endl;
  return 0;
}
