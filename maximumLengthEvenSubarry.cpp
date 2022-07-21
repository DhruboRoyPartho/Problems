/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,sum=0,i;
    cin>>t;
    while(t--){
        cin>>n;
        i=n;
        n++;
        while(n--){
            sum += n;
        }
        if(sum%2 == 0) cout<<i<<endl;
        else cout<<i-1<<endl;
        sum=0;
    }
    return 0;
}