#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 1;
        int c = 1;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                c++;
            }else{
                c=1;
            }
            ans = max(c,ans);
        }
        ans++;
        cout<<ans<<endl;
    }

    return 0;
}