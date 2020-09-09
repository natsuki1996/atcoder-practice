#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const vector<string> digits = {{".###..#..###.###.#.#.###.###.###.###.###."},
                               {".#.#.##....#...#.#.#.#...#.....#.#.#.#.#."},
                               {".#.#..#..###.###.###.###.###...#.###.###."},
                               {".#.#..#..#.....#...#...#.#.#...#.#.#...#."},
                               {".###.###.###.###...#.###.###...#.###.###."}};

int main() {
  ll n;
  cin >> n;
  char inputs[5][4 * n + 1];
  rep(i, 5) rep(j, 4 * n + 1) cin >> inputs[i][j];
  rep(i, n) rep(j, 10) {
    bool flag = true;
    rep(k, 5) {
      rep(l, 3) {
        if (digits[k][4 * (j + 1) - 3 + l] != inputs[k][4 * (i + 1) - 3 + l])
          flag = false;
      }
    }
    if (flag) {
      cout << j;
      break;
    }
  }
  cout << endl;
  return 0;
}
