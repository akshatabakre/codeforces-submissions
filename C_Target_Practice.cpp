#include<bits/stdc++.h>
using namespace std;
#define int long long

int score(int x,int y){
    //1 pointer
    if(x==0 || x==9){
        if(y>=0 && y<10){
            return 1;
        }
    }
    if(y==0 || y==9){
        if(x>=0 && x<10){
            return 1;
        }
    }
    //2 pointer
    if(x==1 || x==8){
        if(y>=1 && y<9){
            return 2;
        }
    }
    if(y==1 || y==8){
        if(x>=1 && x<9){
            return 2;
        }
    }
    //3 pointer
    if(x==2 || x==7){
        if(y>=2 && y<8){
            return 3;
        }
    }
    if(y==2 || y==7){
        if(x>=2 && x<7){
            return 3;
        }
    }
    //4 pointer
    if(x==3 || x==6){
        if(y>=3 && y<7){
            return 4;
        }
    }
    if(y==3 || y==6){
        if(x>=3 && x<6){
            return 4;
        }
    }
    //5 pointer
    if(x==4 || x==5){
        if(y>=4 && y<6){
            return 5;
        }
    }
}
int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int finalscore = 0;
        // vector<vector<char>> v(10);
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char ch;
                cin>>ch;
                if(ch=='X'){
                    finalscore+=score(i,j);
                }
            }
        }
        cout<<finalscore<<endl;
    }

    return 0;
}