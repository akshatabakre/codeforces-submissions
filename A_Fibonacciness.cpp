#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        vector<int> v(3);
        v[0] = a1+a2;
        v[1] = a4-a2;
        v[2] = a5-a4;
        if(v[0]==v[1] && v[1]==v[2]){
            cout<<3<<endl;
        }else if(v[0]==v[1] || v[1]==v[2] || v[2]==v[0]){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }

    return 0;
}