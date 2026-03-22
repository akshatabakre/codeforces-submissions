#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        n--;
        while(n--){
            int x;
            cin>>x;
            sum += x;
        }
        cout<<-(sum)<<endl;
    }

    return 0;
}