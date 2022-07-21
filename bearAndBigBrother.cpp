#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0;
    cin>>a>>b;
    do{
        if(a > b){
            break;
        }
        else if(a <= b){
            a *= 3;
            b *= 2;
            c++;
        }
    }while(1);
    cout<<c<<endl;
    return 0;
}