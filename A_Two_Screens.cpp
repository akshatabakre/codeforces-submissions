#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n = s.length(), m = t.length();
        int c = 0, i = 0;
        while(i<min(n,m) && s[i]==t[i]){
            c++;
            i++;
        }
        int ans = n+m;
        if(c>0){
            ans = min(n,m)+max(n,m)-c+1;
        }
        cout<<ans<<endl;
        }
}