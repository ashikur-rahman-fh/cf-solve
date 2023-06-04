#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i].first >> ar[i].second;
    }
    sort(ar.begin(), ar.end(), [] (const auto &lhs, const auto &rhs) {
        return (lhs.first < rhs.first) || (lhs.first == rhs.first && lhs.second > rhs.second);
    });
    map<int, long long> cnt, score;

    for (const auto &it : ar) {
        if (cnt[it.first] < it.first) {
            cnt[it.first]++;
            score[it.first] += it.second;
        }
    }

    long long ans = 0;
    for (const auto v : score) {
        ans += v.second;
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