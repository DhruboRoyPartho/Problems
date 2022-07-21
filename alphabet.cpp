#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int len,flag=0,count=0;
    cin>>str;
    len = str.length();
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(str[i] != str[j]) flag = 1;
            else if(str[i] == str[j]){
                flag = 0;
                break;
            }
        }
        if(flag == 1) count++;
        flag = 0;
    }
    cout<<25-count<<endl;
    return 0;
}