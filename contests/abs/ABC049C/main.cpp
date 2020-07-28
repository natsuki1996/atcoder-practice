#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());

  bool can = true;
  for (int i = 0; i < S.size();) {
    bool can2 = false;
    for (int j = 0; j < 4; j++) {
      string d = divide[j];
      if (S.substr(i, d.size()) == d) {
        can2 = true;
        i += d.size();
      }
    }
    if (!can2) {
      can = false;
      break;
    }
  }

  if (can)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
