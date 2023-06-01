#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  if (n % 2 == 0) {
    cout << -1 << "\n";
    return ;
  }

  vector<int> ans;
  while (n != 1) {
    int small = n - 1;
    int big = n + 1;

    if (small % 4 == 0) {
      ans.push_back(1);
      n = big / 2;
    } else {
      ans.push_back(2);
      n = small / 2;
    }
  }

  cout << (int) ans.size() << "\n";
  for (int i = (int) ans.size() - 1; i >= 0; i--) {
    cout << ans[i] << " ";
  }
  cout << "\n";
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
