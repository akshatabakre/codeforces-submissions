#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int d = abs(a-b);
        if(d==0){
            cout<<"0 0"<<endl;
            continue;
        }
        cout<<d<<" "<<min(a%d,d-(a%d))<<endl;
    }

    return 0;
}