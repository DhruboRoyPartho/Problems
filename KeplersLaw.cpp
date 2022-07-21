#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float T1,T2,R1,R2;
    cin>>n;
    while(n--){
        cin>>T1>>T2>>R1>>R2;
        T1 = (T1*T1)/(R1*R1*R1);
        T2 = (T2*T2)/(R2*R2*R2);
        if(T1 == T2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}