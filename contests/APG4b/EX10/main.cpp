#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, i;
  cin >> a >> b;

  cout << "A:";
  i = 0;
  while (i < a) {
    cout << "]";
    i++;
  }
  cout << endl;

  cout << "B:";
  i = 0;
  while (i < b) {
    cout << "]";
    i++;
  }
  cout << endl;

  return 0;
}
