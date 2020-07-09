#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int X_MAX = 100000 + 1;

struct Sieve {
  int n;
  vector<int> f, primes;
  Sieve(int n = 1) : n(n), f(n + 1) {
    f[0] = f[1] = -1;
    for (ll i = 2; i <= n; ++i) {
      if (f[i]) continue;
      primes.push_back(i);
      f[i] = i;
      for (ll j = i * i; j <= n; j += i) {
        if (!f[j]) f[j] = i;
      }
    }
  }
  bool isPrime(int x) { return f[x] == x; }
  vector<int> factorList(int x) {
    vector<int> res;
    while (x != 1) {
      res.push_back(f[x]);
      x /= f[x];
    }
    return res;
  }
  vector<P> factor(int x) {
    vector<int> fl = factorList(x);
    if (fl.size() == 0) return {};
    vector<P> res(1, P(fl[0], 0));
    for (int p : fl) {
      if (res.back().first == p) {
        res.back().second++;
      } else {
        res.emplace_back(p, 1);
      }
    }
    return res;
  }
} sieve(X_MAX);

int main() {
  vector<int> d(X_MAX);
  for (int i = 1; i <= X_MAX; i++) {
    if (i % 2 == 0) {
      d[i + 1] = d[i];
      continue;
    }
    d[i + 1] = d[i] + (sieve.isPrime(i) && sieve.isPrime((i + 1) / 2));
  }

  int q;
  cin >> q;
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    cout << d[r + 1] - d[l] << endl;
  }
  return 0;
}
