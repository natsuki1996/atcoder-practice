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
  int N, A, B;
  int cnt = 0;

  cin >> N >> A >> B;

  for (int i = 1; i <= N; i++) {
    int sum = dsum(i);
    if (A <= sum && sum <= B) cnt += i;
  }

  cout << cnt << endl;

  return 0;
}
