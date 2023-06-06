#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    
    int mn = *min_element(ar.begin(), ar.end());
    if (mn < 0) {
        cout << mn << "\n";
    } else {
        cout << *max_element(ar.begin(), ar.end()) << "\n";
    }
}

int main() {
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        solve();
    }
    return 0;
}