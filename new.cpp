#include<bits/stdc++.h>
using namespace std;
#define int long long


string m(string num) {
    string n = num;
  
    int l1 = 0;
    for (int i = 1; i < (int)n.size(); i++) {
      if (((int)n[i] & 1) != ((int)n[i - 1] & 1)) {
        sort(n.begin() + l1, n.begin() + i, greater<char>());
        l1 = i;
      }
    }
    sort(n.begin() + l1, n.end(), greater<char>());
    return n;
  }
  
int32_t main(){

    string s = "624811597";
    cout<<m(s)<<endl;

    return 0;
}