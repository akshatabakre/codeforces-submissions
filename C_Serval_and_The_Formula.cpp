#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a = x;
        if(x==y){
            cout<<-1<<endl;
            continue;
        }
        int l = log2(max(x,y));
        l++;
        cout<<(1LL<<l)-max(x,y)<<endl;
    }

    return 0;
}