/*
OM-TAT-SAT

Author: Dhrubo Roy Partho
        Information and Communication Engineering,
        University of Rajshahi.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,score[1000]={0},count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    for(int i=0;i<n;i++){
        if(score[k-1] <= score[i] && score[i] > 0) count++;
    }
    cout<<count<<endl;
    return 0;
}