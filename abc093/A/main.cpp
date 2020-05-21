#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int map[3] = {};
  string s;
  cin >> s;

  for (int i = 0; i < 3; i++) {
    if (s[i] == 'a') map[0]++;
    if (s[i] == 'b') map[1]++;
    if (s[i] == 'c') map[2]++;
  }

  bool flag = true;
  for (int i = 0; i < 3; i++)
    if (map[i] != 1) flag = false;

  cout << (flag ? "Yes" : "No") << endl;
}
