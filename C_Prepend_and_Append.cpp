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
        int i;
        for(i=0;i<=n/2;i++){
            if((s[i]-'0')^(s[n-i-1]-'0')==0){
                break;
            }
        }
        // cout<<i<<endl;
        if(i>n/2){
            cout<<0<<endl;
        }else{
            cout<<n-(2*i)<<endl;
        }
    }

    return 0;
}