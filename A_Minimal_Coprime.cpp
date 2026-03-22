#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l==1 && r==1){
            cout<<1<<endl;
        }else if(l==1){
            cout<<r-1<<endl;
        }else{
            cout<<r-l<<endl;
        }
    }

    return 0;
}