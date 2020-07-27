#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

map<string, int> int_val;
map<string, vector<int>> vec_val;

void print_int(int x) { cout << x << endl; }

void print_vec(vector<int> vec) {
  cout << "[ ";
  rep(i, vec.size()) cout << vec[i] << " ";
  cout << "]" << endl;
}

int read_int() {
  string s;
  cin >> s;
  if (isdigit(s[0])) {
    return stoi(s);
  } else {
    return int_val[s];
  }
}

vector<int> read_vec() {
  string s;
  cin >> s;
  if (s == "[") {
    vector<int> res;
    s = "";
    while (s != "]") {
      int x = read_int();
      res.push_back(x);
      cin >> s;
    }
    return res;
  } else {
    return vec_val[s];
  }
}

int calc_int_val() {
  string op = "";
  int res = 0;
  while (op != ";") {
    int x = read_int();
    if (op == "") res = x;
    if (op == "+") res += x;
    if (op == "-") res -= x;
    cin >> op;
  }
  return res;
}

vector<int> calc_vec_val() {
  string op = "";
  vector<int> res;
  while (op != ";") {
    vector<int> vec = read_vec();
    if (op == "") res = vec;
    if (op == "+") rep(i, res.size()) res[i] += vec[i];
    if (op == "-") rep(i, res.size()) res[i] -= vec[i];
    cin >> op;
  }
  return res;
}

void set_int_val() {
  string name, eq;
  cin >> name >> eq;
  int_val[name] = calc_int_val();
}

void set_vec_val() {
  string name, eq;
  cin >> name >> eq;
  vec_val[name] = calc_vec_val();
}

int main() {
  ll n;
  cin >> n;
  string com;

  rep(i, n) {
    cin >> com;
    if (com == "int") {
      set_int_val();
    }
    if (com == "print_int") {
      print_int(calc_int_val());
    }
    if (com == "vec") {
      set_vec_val();
    }
    if (com == "print_vec") {
      print_vec(calc_vec_val());
    }
  }
  return 0;
}
