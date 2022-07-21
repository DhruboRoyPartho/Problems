#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'n') count++;
    }
    cout<<count<<endl;
    return 0;
}