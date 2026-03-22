#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    if(n>1099){
        cout<<"YES\n";
    }else{
        //check
        bool flag = true;
        while(n%11!=0){
            n-=111;
            if(n<0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}