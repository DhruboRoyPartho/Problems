#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string s;
    int len,u=0,l=0;
    cin>>s;
    len = s.size();
    for(int i=0;i<len;i++){
        if(s[i] >= 'a' && s[i] <= 'z') l++;
        else if(s[i] >= 'A' && s[i] <= 'Z') u++;
    }
    if(l >= u){
        for(int i=0;i<len;i++){
            putchar(tolower(s[i]));
        }
    }
    else{
        for(int i=0;i<len;i++){
            putchar(toupper(s[i]));
        }
    }
    return 0;
}