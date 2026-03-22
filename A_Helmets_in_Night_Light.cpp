#include<bits/stdc++.h>
using namespace std;
#define int long long

void inparr(vector<int>&a,int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

bool comp(pair<int,int>&a,pair<int,int>&b){
    if(a.second==b.second){
        return (a.first>b.first);
    }
    return (a.second<b.second);
}

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>v[i].second;
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<n;i++){
            cout<<v[i].first<<" ";
        }   cout<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i].second<<" ";
        }   cout<<endl<<endl;
        int reqd = n,cost = 0;
        for(int i=0;i<n;i++){
            if(reqd<=0){
                break;
            }
            if(v[i].second<=p){
                //p for this one and cover as much as possible
                reqd--;
                cost+=(p+(min(reqd,v[i].first)*v[i].second));
                reqd-=(min(reqd,v[i].first));
                cout<<i<<" "<<cost<<" "<<reqd<<endl;
            }else{
                break;
            }
        }
        if(reqd>0){
            cost+=reqd*p;
        }
        cout<<cost<<endl;
    }

    return 0;
}