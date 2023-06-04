#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << n << "\n";
        return ;
    }

    int cnt = 2;
    for (int i = k + 1; i < n; i += k) {
        cnt++;
    }

    cout << cnt << "\n";
}

int main() {
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        solve();
    }
    return 0;
}