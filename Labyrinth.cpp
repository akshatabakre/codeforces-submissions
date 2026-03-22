/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

#define F first
#define S second
using state = pair<int,int>;
state s,e;
vector<vector<int>> vis,dis;
int n,m;
vector<string> lab;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
char dir[] = {'D','U','R','L'};

bool isValid(int nx,int ny){
    return (nx>=0 && nx<n && ny>=0 && ny<m);
}
vector<state> getNeighbours(state curr){
    
    vector<state> res;
    for(int i=0;i<4;i++){
        int nx = curr.F + dx[i], ny = curr.S + dy[i];
        if(isValid(nx,ny) && lab[nx][ny]!='#'){
            res.push_back({nx,ny});
        }
    }
    return res;
}
void bfs(){
    queue<state> q;
    q.push(s);

    while(!q.empty()){
        state curr = q.front();
        q.pop();
        if(vis[curr.F][curr.S]){
            continue;
        }
        vis[curr.F][curr.S] = 1;

        for(state neigh:getNeighbours(curr)){
            int nx = neigh.F, ny = neigh.S;
            if(!vis[nx][ny] && dis[nx][ny]>1+dis[curr.F][curr.S]){
                q.push(neigh);
                dis[nx][ny] = 1+dis[curr.F][curr.S];
            }
        }
    }

}

void solve(){
    cin>>n>>m;
    lab = vector<string>(n);
    vis = vector<vector<int>>(n,vector<int>(m,0));
    dis = vector<vector<int>>(n,vector<int>(m,1e9));
    for(int i=0;i<n;i++){
        cin>>lab[i];
        for(int j=0;j<m;j++){
            if(lab[i][j]=='A'){
                s = {i,j};
            }
            if(lab[i][j]=='B'){
                e = {i,j};
            }
        }
    }
    
    dis[s.F][s.S] = 0;
    bfs();

    if(dis[e.F][e.S]==1e9){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        cout<<dis[e.F][e.S]<<endl;
        //path
        state curr = e;
        string ans = "";
        while(curr!=s){
            for(int i=0;i<4;i++){
                int nx = curr.F + dx[i], ny = curr.S + dy[i];
                if(isValid(nx,ny) && dis[nx][ny]==dis[curr.F][curr.S]-1){
                    ans += dir[i];
                    curr = {nx,ny};
                    break;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }

}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}