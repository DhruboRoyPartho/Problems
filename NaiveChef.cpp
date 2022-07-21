#include<bits/stdc++.h>
using namespace std;
int main()
{
    float T,A,B,num,count_A,count_B,N,prob;
    cin>>T;
    while(T--){
        cin>>N>>A>>B;
        count_A=count_B=0;
        for(int a=0;a<N;a++){
            cin>>num;
            if(num == A) count_A++;
            if(num == B) count_B++;
        }
        prob = (count_A/N)*(count_B/N);
        cout<<fixed<<setprecision(10)<<prob<<endl;
    }
}