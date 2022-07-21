/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

string bin_num;

int bin_convert(int a, int b){
    int res=0,i=0,factor=1;
    for(b;b>=a;b--){
        for(i;i>0;i--){
            factor *= 2;
        }
        i++;
        res += factor*(bin_num[b] - '0');
    }
    return res;
}

int main()
{
    int n,t,type,x,y,value=0,index;
    cin>>n;
    cin>>bin_num;
    cin>>t;
    while(t--){
        cin>>type;
        if(type == 0){
            cin>>x>>y;
            value = bin_convert(x,y);
            cout<<value%3<<endl;
        }
        else if(type ==  1){
            cin>>index;
            bin_num[index] = '1';
        }
    }
    return 0;
}