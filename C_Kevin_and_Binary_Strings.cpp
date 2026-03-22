#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        cout<<1<<" "<<n<<" ";
        vector<int> z;
        for(int i=0;i<n;i++){
            if(s[i]=='0')   z.push_back(i+1);
        }
        if(z.size()==0){
            cout<<n<<" "<<n<<endl;
        }else{
            
        }
    }

    return 0;
}