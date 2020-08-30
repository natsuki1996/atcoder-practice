#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }

struct Sieve {
  int n;
  vector<int> f, primes;
  Sieve(int n = 1) : n(n), f(n + 1) {
    f[0] = f[1] = -1;
    for (long long i = 2; i <= n; ++i) {
      if (f[i]) continue;
      primes.push_back(i);
      f[i] = i;
      for (long long j = i * i; j <= n; j += i) {
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

  vector<pair<int, int>> factor(int x) {
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
};

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  Sieve s(1000001);

  ll all = gcd(a[0], a[1]);
  for (int i = 2; i < n; i++) all = gcd(all, a[i]);

  bool pc = true;
  map<int, int> mp;
  rep(i, n) {
    auto f = s.factor(a[i]);

    for (auto x : f) {
      if (x.first == 1) continue;
      mp[x.first]++;
      if (mp[x.first] > 1) {
        pc = false;
        break;
      }
    }
    if (!pc) break;
  }

  if (pc) {
    cout << "pairwise coprime" << endl;
  } else if (!pc && all == 1) {
    cout << "setwise coprime" << endl;
  } else {
    cout << "not coprime" << endl;
  }
  return 0;
}
