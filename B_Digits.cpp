#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        cout << 1 << " "; // 1 is always included

        if((n > 2) || (d % 3 == 0)){
            cout << 3 << " ";
        }
        if(d % 5 == 0){
            cout << 5 << " ";
        }
        if((d % 7 == 0 && n==2) || n>2){
            cout << 7 << " ";
        }
        if(n > 5){
            cout << 9 << " ";
        }else{
            int x=1;
            int i=2;
            while(i<=n){
                x*=i;
                i++;
            }
            if((x*d)%9==0){
                cout<<9<<" ";
            }
        }

        cout << endl;
    }
    return 0;
}
