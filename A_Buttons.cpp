#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int first = (c/2) + a;
        int second = (c/2) + b;
        if(c%2!=0){
            first++;
        }
        if(first>second){
            cout<<"First\n";
        }else{
            cout<<"Second\n";
        }
    }

    return 0;
}