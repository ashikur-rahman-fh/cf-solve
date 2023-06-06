#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> ar(n);
  for (int i = 0; i < n; i++) {
    cin >> ar[i];
  }

  for (int v : ar) {
    cout << n - v + 1 << " ";
  }
  cout << "\n";
}

int main() {
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; ++t) {
    solve();
  }
  return 0;
}