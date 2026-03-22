#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%k==0){
            cout<<2<<endl<<n-1<<" "<<1<<endl;
        }else{
            cout<<1<<endl<<n<<endl;
        }
    }

    return 0;
}