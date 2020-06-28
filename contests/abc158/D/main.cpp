#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  int q, t, f;
  char c;
  cin >> s >> q;
  bool isFlip = false;
  deque<char> dq;
  rep(i, s.size()) dq.push_back(s[i]);
  rep(i, q) {
    cin >> t;
    if (t == 1) {
      isFlip = !isFlip;
    } else {
      cin >> f >> c;
      if (f == 1 && !isFlip || f == 2 && isFlip) {
        dq.push_front(c);
      } else {
        dq.push_back(c);
      }
    }
  }
  if (isFlip) {
    rep(i, dq.size()) cout << dq[dq.size() - 1 - i];
    cout << endl;
  } else {
    rep(i, dq.size()) cout << dq[i];
    cout << endl;
  }
  return 0;
}
