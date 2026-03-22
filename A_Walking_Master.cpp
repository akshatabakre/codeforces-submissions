#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int minsteps = 0;
        bool flag = true;
        if(d<b){
            flag = false;
        }else{
            minsteps += (d-b);
            a+=minsteps;
        }
        if(a<c){
            flag = false;
        }else{
            minsteps+=(a-c);
        }
        if(flag){
            cout<<minsteps<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}