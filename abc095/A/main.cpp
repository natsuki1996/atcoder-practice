#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;

  int total = 700;
  for (int i = 0; i < 3; i++) total += (s[i] == 'o' ? 100 : 0);

  cout << total << endl;
}
