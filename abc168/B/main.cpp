#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int k;
  string s;
  cin >> k >> s;

  if (s.size() <= k) {
    cout << s << endl;
  } else {
    cout << s.substr(0, k) << "..." << endl;
  }

  return 0;
}
