/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,same=0,max=0,unique,minus=0;
    cin>>t;
    while(t--){
        int power[1000]={0};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>power[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(power[i] == power[j]) same++;
            }
            if(max < same){
                max = same;
            }
            else if(same > 0 && same <= max){
                minus += same;
            }
            same = 0;
        }
        cout<<"Max: "<<max<<endl;
        cout<<"Minus: "<<minus<<endl;
        unique = n - max - minus;
        if(n <= 1){
            cout<<"0"<<endl;
        }
        else if(max == 0){
            cout<<"1"<<endl;
        }
        else if(max <= unique){
            cout<<max<<endl;
        }
        else if(max > unique){
            if(max == (unique+1)){
                cout<<unique+1<<endl;
            }
            else cout<<unique<<endl;
        }
        max = 0;
    }
    return 0;
}