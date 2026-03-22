#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin>>v[i];
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        int larg = 0,less=0;
        for(int i=1;i<n;i++){
            if(abs(v[i])>=abs(v[0])){
                larg++;
            }
            if(-abs(v[i])<=-abs(v[0])){
                less++;
            }
        }
        if(larg==0 && less==0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}