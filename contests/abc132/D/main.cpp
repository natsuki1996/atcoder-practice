#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

constexpr const int mod = 1000000007;
// constexpr const int mod = 998244353;
class mint {
 public:
  long long x;
  constexpr mint(long long x = 0) noexcept : x((x % mod + mod) % mod) {}
  constexpr int getmod() { return mod; }
  constexpr mint operator-() const noexcept { return mint(-x); }

  constexpr mint& operator+=(const mint& a) noexcept {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  constexpr mint& operator-=(const mint& a) noexcept {
    if ((x += mod - a.x) >= mod) x -= mod;
    return *this;
  }
  constexpr mint& operator*=(const mint& a) noexcept {
    (x *= a.x) %= mod;
    return *this;
  }
  constexpr mint& operator/=(const mint& a) noexcept {
    return (*this) *= a.inv();
  }

  constexpr mint operator+(const mint& a) const noexcept {
    return mint(*this) += a;
  }
  constexpr mint operator-(const mint& a) const noexcept {
    return mint(*this) -= a;
  }
  constexpr mint operator*(const mint& a) const noexcept {
    return mint(*this) *= a;
  }
  constexpr mint operator/(const mint& a) const noexcept {
    return mint(*this) /= a;
  }

  constexpr mint inv() const noexcept { return pow(mod - 2); }
  constexpr mint pow(long long t) const noexcept {
    if (!t) return 1;
    mint a = pow(t >> 1);
    a *= a;
    if (t & 1) a *= *this;
    return a;
  }

  friend istream& operator>>(istream& is, mint& a) noexcept {
    return is >> a.x;
  }
  friend ostream& operator<<(ostream& os, const mint& a) noexcept {
    return os << a.x;
  }
};

struct BiCoef {
  vector<mint> fact, ifact;
  BiCoef(int n) : fact(n + 1), ifact(n + 1) {
    assert(n < mod);
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) fact[i] = fact[i - 1] * i;
    ifact[n] = fact[n].inv();
    for (int i = n; i >= 1; --i) ifact[i - 1] = ifact[i] * i;
  }

  mint P(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * ifact[n - r];
  }

  mint C(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * ifact[r] * ifact[n - r];
  }

  mint H(int n, int r) {
    if (r < 0 || 0 > n) return 0;
    return C(n + r - 1, r);
  }
};

int main() {
  ll n, k;
  cin >> n >> k;

  BiCoef bi(n + 2);
  for (ll i = 1; i <= k; i++) {
    cout << bi.C(n - k + 1, i) * bi.C(k - 1, i - 1) << endl;
  }
  return 0;
}
