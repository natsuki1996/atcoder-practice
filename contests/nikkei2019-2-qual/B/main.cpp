#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// const int mod = 1000000007;
const int mod = 998244353;
struct mint {
  ll x;  // typedef long long ll;
  mint(ll x = 0) : x((x % mod + mod) % mod) {}
  mint operator-() const { return mint(-x); }
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod - a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const { return mint(*this) += a; }
  mint operator-(const mint a) const { return mint(*this) -= a; }
  mint operator*(const mint a) const { return mint(*this) *= a; }
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t >> 1);
    a *= a;
    if (t & 1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod - 2); }
  mint& operator/=(const mint a) { return *this *= a.inv(); }
  mint operator/(const mint a) const { return mint(*this) /= a; }
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x; }
ostream& operator<<(ostream& os, const mint& a) { return os << a.x; }

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  rep(i, n) cin >> d[i];
  if (d[0] != 0) {
    cout << 0 << endl;
    return 0;
  }
  sort(d.begin(), d.end());
  vector<P> p(1, P(d[0], 0));
  rep(i, n) {
    if (p.back().first == d[i])
      p.back().second++;
    else
      p.emplace_back(d[i], 1);
  }

  // for (auto x : p) cerr << x.first << " " << x.second << endl;

  if (p[0].first != 0 || p[0].second != 1) {
    cout << 0 << endl;
    return 0;
  }

  rep(i, p.size()) {
    if (p[i].first != i) {
      cout << 0 << endl;
      return 0;
    }
  }

  mint ans = 1;
  rep(i, p.size() - 1) rep(j, p[i + 1].second) ans *= p[i].second;
  cout << ans << endl;
  return 0;
}
