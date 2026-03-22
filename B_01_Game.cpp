#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k = min(count(s.begin(),s.end(),'0'),count(s.begin(),s.end(),'1'));
        if(k%2==0){
            cout<<"NET\n";
        }else{
            cout<<"DA\n";
        }
    }

    return 0;
}