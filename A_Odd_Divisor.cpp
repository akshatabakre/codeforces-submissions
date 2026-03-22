#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // if(n<=2){
        //     cout<<"NO\n";
        // }else{
        //     bool flag = false;
        //     for(int i=3;i<=n;i+=2){
        //         if(n%i==0){
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         cout<<"YES\n";
        //     }else{
        //         cout<<"NO\n";
        //     }
        // }
        if((n&(n-1))==0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}