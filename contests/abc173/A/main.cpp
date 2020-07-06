#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n; 
  cout << ceil((double)n / 1000) * 1000 - n << endl;
  return 0;
}
