/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,N,K,n;
    cin>>t;
    while(t--){
        char str[1000]={0};
        cin>>N>>K;
        for(int i=0;i<N;i++){
            cin>>n;
            if((K-n) < 0) str[i] = '0';
            else{
                str[i] = '1';
                K -= n;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}