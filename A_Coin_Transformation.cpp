#include<bits/stdc++.h>
using namespace std;
#define int long long

int maxcoins(int n){
    if(n<4) return 1;
    return 2*maxcoins(n/4);
}
int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<maxcoins(n)<<endl;
    }

    return 0;
}