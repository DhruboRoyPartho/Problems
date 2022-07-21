/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x1=0,x0=0,len;
    string str;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>str;
        for(len = 0;str[len];len++){
            if(str[len] == '1') x1++;
            else if(str[len] == '0') x0++;
        }
        if(x1 > x0){
            cout<<(x0+x0+1)<<endl;
        }
        else if(x1 == x0){
            cout<<x1+x1<<endl;
        }
        else if(x1 == 0 || x0 == 0){
            cout<<1<<endl;
        }
        else{
            cout<<(x1+x1+1)<<endl;
        }
        x1=x0=0;
    }
    return 0;
}