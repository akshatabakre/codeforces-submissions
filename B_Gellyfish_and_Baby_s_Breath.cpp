#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 998244353;
const int MAXN = 1e5 + 5;

vector<int> power2(MAXN);

// Precompute powers of 2 modulo MOD
void precompute() {
    power2[0] = 1;
    for (int i = 1; i < MAXN; ++i) {
        power2[i] = (power2[i - 1] * 2) % MOD;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), b(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int, int>> pre, pre2;
        int maxind = -1, maxi = -1;

        // Prefix max for array v
        for (int i = 0; i < n; i++) {
            if (v[i] > maxi) {
                maxind = i;
                maxi = v[i];
            }
            pre.push_back({maxind, i - maxind});
        }

        // Prefix max for array b
        maxind = -1; maxi = -1;
        for (int i = 0; i < n; i++) {
            if (b[i] > maxi) {
                maxind = i;
                maxi = b[i];
            }
            pre2.push_back({maxind, i - maxind});
        }

        for (int i = 0; i < n; i++) {
            int a = power2[v[pre[i].first]];
            int c = power2[b[pre[i].second]];
            int bval = power2[b[pre2[i].first]];
            int d = power2[v[pre2[i].second]];
            if(a==bval){
                cout<<(a+max(c,d))%MOD<<" ";
                // continue;
            }else if(a>bval){
                cout<<(a+c)%MOD<<" ";
            }else{
                cout<<(bval+d)%MOD<<" ";
            }

            // int x = (a + c) % MOD;
            // int y = (bval + d) % MOD;
            // cout << max(x, y) << " ";

            // int M = max(v[pre[i].first],b[pre2[i].first]);
            // int other = -1;
            // if(M==v[pre[i].first]){
            //     other = max(other,b[pre[i].second]);
            // }
            // if(M==b[pre2[i].first]){
            //     other = max(other,v[pre2[i].second]);
            // }

            // cout<<(power2[M] + power2[other])%MOD<<" ";

        }
        cout << '\n';
    }
}
