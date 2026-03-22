#include<bits/stdc++.h>
using namespace std;
#define int long long

// bool perfect(int n){
//     int r = sqrt(n);
//     return r*r == n;
// }

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        vector<int> ans;
        int sum = 0;
        map<int,bool> used;
        int size = 0;
        while(size<n){
            for(int i=n;i>=1;i--){
                if(!used[i] && sqrt(sum+i)*sqrt(sum+i)!=sum+i){
                    ans.push_back(i);
                    sum+=i;
                    used[i] = true;
                    size++;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}