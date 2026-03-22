#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if(abs(a-b)%2==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

}
