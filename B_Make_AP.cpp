#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool f1 = true, f2 = true, f3 = true;
        //change a
        int a_new = 2*b - c;
        if(a_new<=0 || a_new%a!=0){
            f1 = false;
        }
        //change b
        int b_new = (a+c)/2;
        if((a+c)%2!=0 || b_new<=0 || b_new%b!=0){
            f2 = false;
        }
        //change c
        int c_new = 2*b - a;
        if(c_new<=0 || c_new%c!=0){
            f3 = false;
        }
        if(f1||f2||f3){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }

    }

    return 0;
}