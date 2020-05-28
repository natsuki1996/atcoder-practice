#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string a, b;
  cin >> a >> b;
  float num = atoi((a + b).c_str());
  num = powf(num, 0.5);
  bool flag = (floor(num) == num);
  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}
