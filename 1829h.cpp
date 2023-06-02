#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> ar(n);
  for (int i = 0; i < n; i++) {
    cin >> ar[i];
  }

  const int mod = (int) 1e9 + 7;
  const int mx = 64;
  
  vector<vector<vector<int>>> dp(2, vector<vector<int>> (mx, vector<int> (n, -1)));

  function <int(int, int, int)> go = [&] (int pos, int mask, int ne) {
    if (pos >= n) {
      return int(__builtin_popcount(mask) == k && ne);
    }

    if (dp[ne][mask][pos] != -1) {
      return dp[ne][mask][pos];
    }

    int x = go(pos + 1, mask & ar[pos], ne | 1) % mod;
    int y = go(pos + 1, mask, ne) % mod;

    return dp[ne][mask][pos] = (x + y) % mod;
  };

  cout << go(0, (1 << 6) -1, 0) % mod << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; ++t) {
    solve();
  }
  return 0;
}