#include<bits/stdc++.h>

using namespace std;

int main()
{
    string sum;
    int c1,c2,c3;
    c1=c2=c3=0;
    cin>>sum;
    for(int len=0;sum[len];len++){
        if(sum[len] == '1') c1++;
        else if(sum[len] == '2') c2++;
        else if(sum[len] == '3') c3++;
    }
    while(c1--){
        cout<<"1";
        if(c1 != 0 || c2 != 0 || c3 != 0) cout<<"+";
    }
    while(c2--){
        cout<<"2";
        if(c2 != 0 || c3 != 0) cout<<"+";
    }
    while(c3--){
        cout<<"3";
        if(c3 != 0) cout<<"+";
    }
}
