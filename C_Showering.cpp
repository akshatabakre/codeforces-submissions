#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        bool possible = false;
        int prev = 0;
        while(n--){
            int l,r;
            cin>>l>>r;
            if(l-prev>=s){
                possible = true;
                break;
            }
            prev = r;
        }
        if(m-prev>=s){
            possible = true;
        }
        if(possible){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}