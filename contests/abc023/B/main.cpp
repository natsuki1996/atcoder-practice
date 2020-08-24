#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, cnt = 1;
  string s, t;
  cin >> n >> s;
  deque<char> dq;
  dq.push_back('b');

  auto to_string = [&]() {
    string ret;
    rep(i, dq.size()) ret.push_back(dq[i]);
    return ret;
  };

  if (n == 1) {
    cout << (s == "b" ? 0 : -1) << endl;
    return 0;
  }

  while (dq.size() < s.size()) {
    if (cnt % 3 == 0) {
      dq.push_front('b');
      dq.push_back('b');
    } else if (cnt % 3 == 1) {
      dq.push_front('a');
      dq.push_back('c');
    } else {
      dq.push_front('c');
      dq.push_back('a');
    }
    string t = to_string();
    if (s == t) {
      cout << cnt << endl;
      return 0;
    }
    cnt++;
  }
  cout << -1 << endl;
  return 0;
}
