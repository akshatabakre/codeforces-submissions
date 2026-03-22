/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

string s0 ="What are you doing at the end of the world? Are you busy? Will you save us?";
string s1 = "What are you doing while sending \"";
string s2 = "\"? Are you busy? Will you send \"";
string s3 = "\"?";
const long long INF = 2e18;
vector<int> len;

char rec(int i,int k){
    if(i<53&&k>len[i])
        return '.';
    // if(k > len[i]) return '.';
    if(i==0){
        return s0[k-1];
    }

    if(k<=s1.length()){
        return s1[k-1];
    }else if(k<=s1.length()+len[i-1]){
        return rec(i-1,k-s1.length());
    }else if(k<=s1.length()+len[i-1]+s2.length()){
        return s2[k-1-s1.length()-len[i-1]];
    }else if(k<=s1.length()+len[i-1]+s2.length()+len[i-1]){
        return rec(i-1,k-s1.length()-len[i-1]-s2.length());
    }else
    return s3[k-1-s1.length()+len[i-1]+s2.length()+len[i-1]];
}
void solve(){
    int n,k;
    cin>>n>>k;
    len.assign(55,75);
    len[0] = s0.length();
    // for(int i=1;i<=n;i++){
    //    len[i] = min(INF, s1.length()+s2.length()+s3.length()+2*len[i-1]);
    // }
    for(int i=1;i<55;i++)
        len[i]=len[i-1]*2+68;
    // len[55]={75};
    if(k>len[n]){
        cout<<".";
    }else{
        cout<<rec(n,k);
    }
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}