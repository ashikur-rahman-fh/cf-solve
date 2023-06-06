#include <bits/stdc++.h>

using namespace std;

void display(int i, int j) {
    cout << i + 1 << " " << j + 1 << "\n";
}

void solve() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        ar[i]--;
    }
    vector<int> pos(n);
    for (int i = 0; i < n; i++) {
        pos[ar[i]] = i;
    }

    if (pos[n - 1] < pos[0] && pos[n - 1] < pos[1]) {
        display(pos[n - 1], min(pos[0], pos[1]));
    } else if (pos[n - 1] > pos[0] && pos[n - 1] > pos[1]) {
        display(pos[n - 1], max(pos[0], pos[1]));
    } else {
        display(0, 0);
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