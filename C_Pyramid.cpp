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

    vector<vector<int>> v(n, vector<int>(3));
    for(int i=0;i<n;i++) cin>>v[i][0]>>v[i][1]>>v[i][2];

    int idx = -1;
    for(int i=0;i<n;i++){
        if(v[i][2] > 0){
            idx = i;
            break;
        }
    }

    for(int cx=0;cx<=100;cx++){
        for(int cy=0;cy<=100;cy++){

            int H = v[idx][2] + abs(v[idx][0]-cx) + abs(v[idx][1]-cy);

            bool ok = true;

            for(int i=0;i<n;i++){
                int dist = abs(v[i][0]-cx) + abs(v[i][1]-cy);
                if(max(H - dist, 0LL) != v[i][2]){
                    ok = false;
                    break;
                }
            }

            if(ok){
                cout<<cx<<" "<<cy<<" "<<H<<"\n";
                return;
            }
        }
    }
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}