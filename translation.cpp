#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char a[1000],b[1000],c[1000];
    int len,i=0,n;
    cin>>a>>c;
    for(len=0;a[len];len++){}
    n=len;
    len--;
    for(len;len>=0;len--){
        b[i] = a[len];
        i++;
    }
    if(strcmp(b, c) == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}