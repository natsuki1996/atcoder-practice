#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a;
  cin >> n;
  map<int, int> mp;
  rep(i, n) {
    cin >> a;
    mp[a]++;
  }

  ll ans = mp.size();
  if (ans % 2 == 0) ans--;

  cout << ans << endl;
}
