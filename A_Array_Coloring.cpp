#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odds = 0;
        while(n--){
            int num;
            cin>>num;
            if(num%2==1){
                odds++;
            }
        }
        if(odds%2!=0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}