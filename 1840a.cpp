#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string str;
  cin >> str;

  string ans = "";
  for (int i = 0; i < n; i++) {
    ans += str[i++];
    while (str[i] != ans.back()) {
      i++;
    }
  }
  cout << ans << "\n";
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
  return 0;
}