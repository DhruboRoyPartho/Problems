/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char flag[26]={0};
    int values[26],j=0,count=0,t;
    string str;
    cin>>t;
    while(t--){
        for(int i = 0;i<26;i++){
            flag[i] = '0';
        }
        for(int i = 0;i<26;i++){
            cin>>values[i];
        }
        cin>>str;
        for(char ch='a';ch<='z';ch++){
            for(int i=0;i<str[i];i++){
                if(str[i] == ch){
                    flag[j] = '1';
                    break;
                }
            }
            j++;
        }
        j=0;
        for(int i = 0;i<26;i++){
            if(flag[i] == '0'){
                count += values[i];
            }
        }
        cout<<count<<endl;
        count = 0;
    }
    return 0;
}