/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,N,X;
    cin>>t;
    while(t--){
        cin>>N>>X;
        if(X%3 == 0 && X != 0){
            if(X/3 <= N){
                cout<<"YES"<<endl;
                cout<<X/3<<" 0 "<<N-(X/3)<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else if(X%3 != 0 || X == 0){
            int n = X/3 + 1;
            int diff = n*3 -X;
            if(N==0 && X==0){
                cout<<"Yes"<<endl;
                cout<<N<<" "<<N<<" "<<N<<endl;
            }
            else if(diff <= (N-n)){
                cout<<"YES"<<endl;
                cout<<n<<" "<<diff<<" "<<N-(n+diff)<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}