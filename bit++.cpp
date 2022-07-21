#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t,x=0;
    string bit;
    cin>>t;
    while(t--){
        cin>>bit;
        if(bit == "x++" || bit == "X++" || bit == "++x" || bit == "++X") x++;
        else if(bit == "x--" || bit == "X--" || bit == "--x" || bit == "--X") x--;
    }
    cout<<x<<endl;
    x=0;
    return 0;
}