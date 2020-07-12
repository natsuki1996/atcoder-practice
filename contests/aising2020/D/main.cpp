#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int MAX = 200001;

int main() {
  int n;
  string x;
  cin >> n >> x;

  int pop_count_origin = count(x.begin(), x.end(), '1');
  int pop_count_m = pop_count_origin - 1;
  int pop_count_p = pop_count_origin + 1;

  int x_m_origin = 0;
  int x_p_origin = 0;
  rep(i, n) {
    if (pop_count_m != 0)
      x_m_origin = (x_m_origin * 2 + int(x[i] - '0')) % pop_count_m;
    x_p_origin = (x_p_origin * 2 + int(x[i] - '0')) % pop_count_p;
  }

  vector<int> pow_m(MAX, 1);
  vector<int> pow_p(MAX, 1);
  for (int i = 1; i < MAX; i++) {
    if (pop_count_m != 0) pow_m[i] = (pow_m[i - 1] * 2) % pop_count_m;
    pow_p[i] = (pow_p[i - 1] * 2) % pop_count_p;
  }

  vector<int> f(MAX);
  vector<int> pop_count(MAX);
  for (int i = 1; i < MAX; i++) {
    pop_count[i] = pop_count[i / 2] + i % 2;
    f[i] = f[i % pop_count[i]] + 1;
  }

  rep(i, n) {
    if (x[i] == '1') {
      if (pop_count_m != 0) {
        int next = (x_m_origin - pow_m[n - 1 - i]) % pop_count_m;
        if (next < 0) next += pop_count_m;
        cout << f[next] + 1 << endl;
      } else {
        cout << 0 << endl;
      }
    } else {
      int next = (x_p_origin + pow_p[n - 1 - i]) % pop_count_p;
      if (next < 0) next += pop_count_p;
      cout << f[next] + 1 << endl;
    }
  }

  return 0;
}
