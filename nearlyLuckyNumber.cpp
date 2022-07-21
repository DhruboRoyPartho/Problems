#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,flag=0;
    cin>>n;
    k=n;
    while(n!=0){
        if(n%10 == 4 || n%10 == 7){
            flag=0;
            n /= 10;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag == 1 || k == 7 || k == 4) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}