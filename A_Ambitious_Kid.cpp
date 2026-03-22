#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int n;
    cin>>n;
    int minabs = INT_MAX;
    while(n--){
        int x;
        cin>>x;
        minabs = min(abs(x),minabs);
    }
    cout<<minabs<<endl;

    return 0;
}