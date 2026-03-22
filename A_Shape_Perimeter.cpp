#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int totalperi = 4*n*m;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(i!=0 && x<m && y<m){
                // cout<<x<<" "<<y<<endl;
                totalperi-=2*(2*m-x-y);
            }
        }
        cout<<totalperi<<endl;
    }

    return 0;
}