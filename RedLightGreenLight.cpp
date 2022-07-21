#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,N,K,H,c=0;
    cin>>n;
    while(n--){
        cin>>N>>K;
        while(N--){
            cin>>H;
            if(H>K) c++;
        }
        cout<<c<<endl;
        c=0;
    }
    return 0;
}