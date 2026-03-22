#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int ans = 0;
        vector<int> v(10, 0);
        for (int i = 0; i < 10; i++) {
            int x = i;
            if (i > 4) {
                i = 9 - i;
            }
            string s;
            cin >> s;
            for (int k = i; k <= 9 - i; k++) {
                v[k] = i + 1;
            }
            // cout<<endl;
            for (int j = 0; j < 10; j++) {  
                if (s[j] == 'X') {          
                    ans += v[j];
                }
            }
            // cout<<ans<<endl;
            i = x;  // Restore i value here
        }
        cout <<"final ans=" <<ans << endl;
    }
}