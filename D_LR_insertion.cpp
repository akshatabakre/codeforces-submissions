/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];


void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<int> s1,s2;
    s1.push(0);
    for(int i=1;i<=n;i++){
        if(s[i-1]=='L'){
            s2.push(s1.top());
            s1.pop();
            s1.push(i);
        }else{
            s1.push(i);
        }
    }
    vector<int> ans;
    while(!s1.empty()){
        ans.push_back(s1.top());
        s1.pop();
    }
    reverse(ans.begin(),ans.end());
    for(int i:ans){
        cout<<i<<" ";
    }
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}