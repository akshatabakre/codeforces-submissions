#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n&1){
            for(int i=1;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int i=2;i<n;i+=2){
                cout<<i<<" ";
            }
            cout<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    

    return 0;
}