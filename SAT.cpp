/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,flag=0,flag2=0;
    string str1,str2,s;
    cin>>t;
    while(t--){
        flag = 0;
        cin>>str1;
        t--;
        cin>>str2;
        if(str1 == str2 || ((str2[0] == '!') && str1 != str2)) flag = 1;
        else{
            if(flag2 == 0){
                s = str1;
            }
            flag2 = 1;
        }
    
    }
    if(flag2 == 1) cout<<s<<endl;
    else if(flag = 1 && flag2 == 0) cout<<"satisfiable"<<endl;
}