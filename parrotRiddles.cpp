#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0,i=2,c=2;
    string strin;
    while(1){
        cout<<"? "<<i<<endl;
        cin>>strin;
        if(strin == "no"){
            i++;
        }
        else if(strin == "yes"){
            count++;
            i++;
        }
        if(count >= 2){
            cout<<"! composite"<<endl;
            fflush(stdout);
            break;
        }
        if(c == 9){
            cout<<"! prime"<<endl;
            fflush(stdout);
            break;
        }
        c++;
    }
}