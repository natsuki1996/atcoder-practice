#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int dsum(int num) {
  if (num < 10) return num;
  return dsum(num / 10) + num % 10;
}

int main() {
  int N, a[110], cnt = 0;

  cin >> N;
  for (int i = 0; i < N; i++) cin >> a[i];

  sort(a, a + N, greater<int>());

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0)
      cnt += a[i];
    else
      cnt -= a[i];
  }

  cout << cnt << endl;

  return 0;
}
