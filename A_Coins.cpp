#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"YES\n";
        }else{
            if(n%k==0 || k%2==1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}