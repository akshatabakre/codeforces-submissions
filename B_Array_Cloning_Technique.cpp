#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> m;
        int mo = 1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
            mo = max(m[v[i]],mo);
        }
        int operations = 0;
        while(mo<n){
            operations+=(1+min(n-mo,mo));
            mo = mo*2;
        }
        cout<<operations<<endl;
    }

    return 0;
}