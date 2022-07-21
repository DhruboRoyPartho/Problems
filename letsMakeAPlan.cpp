#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s1,s2,s3,s4;
    cin>>t;
    while(t--){
        cin>>s1>>s2>>s3>>s4;
        if(s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4){
            cout<<"Possible"<<endl;
        }
        else cout<<"Oh no!, such a shame"<<endl;
    }
    return 0;
}