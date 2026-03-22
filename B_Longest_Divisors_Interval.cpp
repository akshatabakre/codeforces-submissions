#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1){
            cout<<1<<endl;
        }else{
            int x = 2;
            while(n%x==0){
                x++;
            }
            cout<<x-1<<endl;
        }
    }

    return 0;
}