#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int len,mX=0,mY=0,X=0,Y=0;

int check_path(string st)
{
    for(len = 0;len <= st[len];len++){}
    for(int i=0;i<len;i++){
        if(st[i] == 'U') Y++;
        else if(st[i] == 'D') Y--;
        else if(st[i] == 'L') X--;
        else X++;
        if(X == mX && Y == mY) return 1;
    }
    return 0;
}

int main()
{
    int T;
    ll n,fact=1;
    string str;
    cin>>T;
    while(T--){
        cin>>mX>>mY;
        cin>>str;
        if(check_path(str) == 1){
            n = len;
            for(n;n>1;n--) fact *= n;
            while(fact--){
                
            }
        }
        else cout<<str;
    }
}