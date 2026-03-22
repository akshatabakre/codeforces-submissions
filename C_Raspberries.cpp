#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

// Function to count the factors of 2 and 5 in a number
pair<int, int> countFactors(int x) {
    int c2 = 0, c5 = 0;
    while (x % 2 == 0) c2++, x /= 2;
    while (x % 5 == 0) c5++, x /= 5;
    return {c2, c5};
}

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    vector<pair<int, int>> factors(n);
    
    // Precompute factor counts for each number in the input
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        factors[i] = countFactors(a[i]);
    }

    // Determine required factors for divisibility by k
    int req2 = 0, req5 = 0;
    if (k == 2) req2 = 1;
    else if (k == 3) req2 = req5 = 1;
    else if (k == 4) req2 = 2;
    else if (k == 5) req5 = 1;

    // DP table: dp[i][c2][c5] → minimum operations to reach (c2, c5) with first i elements
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(n * 3, vector<int>(n, INF)));
    dp[0][0][0] = 0; // Base case

    // DP Transition
    for (int i = 0; i < n; i++) {
        for (int c2 = 0; c2 < n * 3; c2++) {
            for (int c5 = 0; c5 < n; c5++) {
                if (dp[i][c2][c5] == INF) continue;
                
                // Keeping the number as it is
                int newC2 = min(n * 3 - 1, c2 + factors[i].first);
                int newC5 = min(n - 1, c5 + factors[i].second);
                dp[i + 1][newC2][newC5] = min(dp[i + 1][newC2][newC5], dp[i][c2][c5]);

                // Trying to increment the number up to 10
                for (int add = 1; a[i] + add <= 10; add++) {
                    auto newFactors = countFactors(a[i] + add);
                    int incC2 = min(n * 3 - 1, c2 + newFactors.first);
                    int incC5 = min(n - 1, c5 + newFactors.second);
                    dp[i + 1][incC2][incC5] = min(dp[i + 1][incC2][incC5], dp[i][c2][c5] + add);
                }
            }
        }
    }

    // Find the minimum operations required
    int result = INF;
    for (int c2 = req2; c2 < n * 3; c2++) {
        for (int c5 = req5; c5 < n; c5++) {
            result = min(result, dp[n][c2][c5]);
        }
    }

    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
