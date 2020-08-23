#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll H, W, m, h, w;
  cin >> H >> W >> m;
  set<P> bomb;
  vector<ll> hs(H), ws(W);
  rep(i, m) {
    cin >> h >> w;
    h--, w--;
    hs[h]++, ws[w]++;
    bomb.insert(P(h, w));
  }

  ll maxh = *max_element(hs.begin(), hs.end());
  ll maxw = *max_element(ws.begin(), ws.end());

  vector<ll> rs, cs;
  rep(i, hs.size()) if (hs[i] == maxh) rs.push_back(i);
  rep(i, ws.size()) if (ws[i] == maxw) cs.push_back(i);

  for (auto r : rs) {
    for (auto c : cs) {
      if (bomb.find(P(r, c)) == bomb.end()) {
        cout << maxh + maxw << endl;
        return 0;
      }
    }
  }
  cout << maxh + maxw - 1 << endl;
  return 0;
}
