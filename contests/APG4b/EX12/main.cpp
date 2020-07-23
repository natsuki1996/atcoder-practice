#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;

  int x = s.at(0) - '0';
  char op;
  int y;
  for (int i = 1; i < s.size(); i += 2) {
    op = s.at(i);
    y = s.at(i + 1) - '0';

    if (op == '+') x += y;
    if (op == '-') x -= y;
  }

  cout << x << endl;
  return 0;
}
