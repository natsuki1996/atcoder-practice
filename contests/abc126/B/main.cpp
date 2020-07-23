#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int s;
  cin >> s;

  int l = s / 100, r = s % 100;

  bool is_yymm = 1 <= r && r <= 12;
  bool is_mmyy = 1 <= l && l <= 12;

  if (is_yymm && is_mmyy)
    cout << "AMBIGUOUS" << endl;
  else if (is_yymm)
    cout << "YYMM" << endl;
  else if (is_mmyy)
    cout << "MMYY" << endl;
  else
    cout << "NA" << endl;
  return 0;
}
