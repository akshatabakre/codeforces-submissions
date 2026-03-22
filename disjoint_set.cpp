/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;

class disjointSet{

    private:
    vector<int> parent,rank,size;

    public:

    disjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++)   parent[i] = i;
    }
    
    int findParent(int node){
        if(parent[node] == node) return node;
        return parent[node] = findParent(parent[node]);
    }

    void unionByRank(int u,int v){
        int pu = findParent(u), pv = findParent(v);
        if(pu == pv){
            cout<<"Same component\n";
            return;
        }
        cout<<"Not same\n";
        cout<<"Adding "<<u<<" and "<<v<<endl;
        if(rank[pu] < rank[pv]){
            parent[pu] = pv;
        }else if(rank[pu] > rank[pv]){
            parent[pv] = pu;
        }else{
            parent[pv] = pu;
            rank[pu]++;
        }
    }

    void unionBySize(int u,int v){
        int pu = findParent(u), pv = findParent(v);
        if(pu == pv){
            cout<<"Same component\n";
            return;
        }
        cout<<"Not same\n";
        cout<<"Adding "<<u<<" and "<<v<<endl;
        if(size[pu] < size[pv]){
            parent[pu] = pv;
            size[pv] += size[pu];
        }else{
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};

int main(){

    disjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,7);
    cout<<ds.findParent(6)<<endl;
    ds.unionBySize(5,7);
    ds.unionBySize(3,7);
    cout<<ds.findParent(4)<<endl;

    return 0;
}