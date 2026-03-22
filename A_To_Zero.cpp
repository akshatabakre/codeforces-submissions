#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int op=0;
        if(n%2){
            op++;
            n-=k;
        }
        if(n<=0){
            cout<<op<<endl;
            continue;
            // return op;
        }
        k--;
        op+=(n+k-1)/k;
        cout<<op<<endl;
    }

    return 0;
}