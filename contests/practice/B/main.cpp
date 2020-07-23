#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, q;
  cin >> n >> q;

  string s;
  rep(i, 26) s += (char)('A' + i);

  rep(i, n) rep(j, n - 1) {
    cout << "? " << s[j] << " " << s[j + 1] << endl;
    char ans;
    cin >> ans;
    if (ans == '>') swap(s[j], s[j + 1]);
  }

  cout << "! " << s << endl;

  return 0;
}
