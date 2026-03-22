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
        int negas = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==-1){
                negas++;
            }
        }
        int steps = 0;
        if(negas>n-negas){
            steps+= (negas - (n/2));
            negas = n/2;
        }
        if((negas)%2!=0){
            steps++;
        }
        cout<<steps<<endl;
    }

    return 0;
}