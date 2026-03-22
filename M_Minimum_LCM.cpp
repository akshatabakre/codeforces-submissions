#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = -1, l = INT_MAX;
        for(int i=2;i<=sqrt(n);i++){
            //i, n/i
            if(n%i==0){
                if(n-i<l){
                    l = n-i;
                    x = i;
                }
                if(n-(n/i)<l){
                    l = n-(n/i);
                    x = n/i;
                }
            }
        }
        if(x==-1){
            cout<<1<<" " << n-1 << endl;
            continue;
        }
        cout << x <<" "<<(n-x)<< endl;
    }

    return 0;
}