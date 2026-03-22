#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> f;
        for(char ch:s){
            f[ch]++;
        }
        int odds = 0;
        for(auto i:f){
            if(i.second%2==1)   odds++;
        }
        if(odds){
            odds--;
        }
        if(k<=n-1 && k>=odds){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}