#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        vector<string> words;
        for(int i=0;i<x.length();i++){
            //create words starting with s[i] of length x.length()
            int ind;
            string w = "";
            for(ind=i;w.length()<s.length();ind=(ind+1)%x.length()){
                w+=x[ind];
            }
            words.push_back(w);
        }
        if(count(words.begin(),words.end(),s)==0){
            cout<<-1<<endl;
        }else{
            int ans = 0;
            while(x.find(s)==string::npos){
                x = x+x;
                ans++;
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}