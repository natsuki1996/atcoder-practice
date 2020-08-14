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

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  mint ans = 1;
  ans *= a;
  ans *= b;
  ans *= c;
  cout << ans << endl;

  return 0;
}
