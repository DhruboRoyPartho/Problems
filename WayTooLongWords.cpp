#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,len;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        len = str.size();
        if(len > 10) cout<<str[0]<<len-2<<str[len-1]<<endl;
        else cout<<str<<endl;
    }
    return 0;
}