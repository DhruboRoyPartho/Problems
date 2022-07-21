#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int a,b,i,rem,count=0;
    cin>>i;
    while(i--){
        cin>>a>>b;
        a += b;
        while(a != 0){
            rem = a%10;
            a /= 10;
            count += n[rem];
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}