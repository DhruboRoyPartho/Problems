/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name,letter;
    int len = 0,temp,flag=0,count=0;
    cin>>name;
    for(len;name[len];len++){}
    for(int i=0;i<len;i++){
        temp = i+1;
        for(temp;temp<len;temp++){
            if(name[i] == name[temp]) flag=1;
        }
        if(flag == 0) count++;
        flag=0;
    }
    if(count%2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}