#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,b=0;
    bool a[3];
    cin>>n;
    while(n--){
        cin>>a[0]>>a[1]>>a[2];
        for(int i=0;i<3;i++){
            if(a[i] == 1) b++;
        }
        if(b >= 2) count++;
        b=0;
    }
    cout<<count;
    return 0;
}