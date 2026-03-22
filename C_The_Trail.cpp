#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        vector<int> versum(m,0), horsum(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                horsum[i] += v[i][j];
                versum[j] += v[i][j];
            }
        }
        v[0][0] = 1;
        int commonsum = horsum[0];
        int i=0,j=0;
        for(int k=0;k<s.length();k++){
            if(s[k]=='D'){
                i++;
                horsum[i] += commonsum-versum[j]-v[i][j];
                v[i][j] = commonsum - versum[j];
                versum[j] = commonsum;
            }else{
                j++;
                v[i][j] = commonsum - horsum[i];
                horsum[i] = commonsum;
            }
        }
        for(int x=0;x<n;x++){
            for(int y=0;y<m;y++){
                cout<<v[x][y]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}