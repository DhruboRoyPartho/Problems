#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,rem;
    cin>>i;
    if(i <= 5) cout<<"1"<<endl;
    else{
        rem = i/5;
        if(i%5 != 0){
            cout<<rem+1<<endl;
        }
        else cout<<rem<<endl;
    }
    return 0;
}