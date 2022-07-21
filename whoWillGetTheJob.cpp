#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,max=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(max < n) max = n;
    }
    cout<<max<<endl;
    return 0;
}