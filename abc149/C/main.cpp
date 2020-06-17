#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool isprime(int x) {
  bool flag = true;
  for (int i = 2; i < x; i++) {
    if (x % i == 0) flag = false;
  }
  return flag;
}

int main() {
  int x;
  cin >> x;
  while (!isprime(x)) x++;
  cout << x << endl;
  return 0;
}
