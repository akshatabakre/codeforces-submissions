#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> m[a[i]];
    }
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     m[a[i]] = x;
    // }
    int prev = 0;
    bool happy = false;
    for(auto i:m){
        if(i.second<prev){
            happy = true;
            break;
        }
        prev = i.second;
    }
    if(happy){
        cout<<"Happy Alex\n";
    }else{
        cout<<"Poor Alex\n";
    }

    return 0;
}