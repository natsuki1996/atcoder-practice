#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n;
  cin >> n;
  ll hh = n / 3600;
  n %= 3600;
  ll mm = n / 60;
  n %= 60;
  ll ss = n;
  printf("%02d:%02d:%02d\n", hh, mm, ss);
  return 0;
}
