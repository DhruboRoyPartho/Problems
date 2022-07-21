#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n,i;
    float B;
    cin>>n;
    while(n--){
        cin>>B;
        B = 2*(0.5*(B/2)*(B/2));
        i = (int)(B/4);
        cout<<"~"<<i<<endl;
    }
}