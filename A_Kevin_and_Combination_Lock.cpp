#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag = false;
        // while (n>0) {
            // if (n % 33 == 0) {
            //     n=0;
            //     flag = true;
            //     break;
            // } else if (n >= 33) {
            //     n -= 33;
            // } else if(n!=33){
            //     string s = to_string(n);
            //     size_t pos = s.find("33");
            //     if (pos != string::npos) {
            //         s.erase(pos,2);
            //         cout<<"helo\n";
            //         n = stoll(s);
            //     } else {
            //         break;
            //     }
            // }
        //     bool p33 = false, div33 = false;
        //     string s = to_string(n);
        //     if(s.find("33")!=string::npos){

        //     }
        // }
        // if(n==0)    flag = true;
        // if(flag)    cout<<"YES\n";
        // else        cout<<"NO\n";
        if(n%33==0) flag = true;
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }

    return 0;
}