/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,word;
    int len=0,t,w_len=0,flag = 0;
    cin>>str;
    for(len;str[len];len++){}
    cin>>t;
    while(t--){
        cin>>word;
        for(w_len;word[w_len];w_len++){}
        for(int i=0;i<w_len;i++){
            for(int j=0;j<len;j++){
                if(str[j] == word[i]) flag++; 
            }
        }
        if(flag == w_len) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        w_len = flag = 0;
    }
    return 0;
}