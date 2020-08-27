#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n, a;
  cin >> n;
  vector<int> vec;
  map<int, int> mp;
  rep(i, n) {
    cin >> a;
    if (mp[a] == 0) vec.push_back(a);
    mp[a]++;
  }
  sort(vec.rbegin(), vec.rend());
  cout << vec[1] << endl;
  return 0;
}
