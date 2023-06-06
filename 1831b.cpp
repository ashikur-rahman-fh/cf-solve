#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  a.push_back(-1);
  b.push_back(-1);

  map<int, int> mp;
  int cnt = 1;
  int ans = 1;
  for (int i = 0; i < n; i++) {
    if (a[i] != a[i + 1]) {
      mp[a[i]] = max(mp[a[i]], cnt);
      ans = max(ans, cnt);
      cnt = 1;
    } else {
      cnt++;
    }
  }
  cnt = 1;
  for (int i = 0; i < n; i++) {
    if (b[i] != b[i + 1]) {
      ans = max(ans, cnt + mp[b[i]]);
      ans = max(ans, cnt);
      cnt = 1;
    } else {
      cnt++;
    }
  }
  
  cout << ans << "\n";
}

int main() {
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; ++t) {
    solve();
  }
  return 0;
}