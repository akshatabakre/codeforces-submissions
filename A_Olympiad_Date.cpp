#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(map<int,int>& m){
    return (m[0]==0 && m[1]==0 && m[2]==0 && m[3]==0 && m[5]==0);
}

int32_t main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> reqd;
        int ind = -1;
        bool flag = true;
        reqd = {{0,3},{1,1},{3,1},{2,2},{5,1}};
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(flag && reqd.find(v[i])!=reqd.end() && reqd[v[i]]>0){
                reqd[v[i]]--;
            }
            if(flag && check(reqd)){
                ind = i;
                flag = false;
            }
        }
        cout<<ind+1<<endl;
    }
    return 0;
}