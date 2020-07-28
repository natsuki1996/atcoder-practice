#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  int N, d[110], num[110] = {0}, cnt = 0;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> d[i];
    num[d[i]]++;
  }

  for (int i = 1; i <= 100; i++) {
    if (num[i]) cnt++;
  }

  cout << cnt << endl;

  return 0;
}