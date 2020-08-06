#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

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
