#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        n = (k/m) * (n-1);
        cout<<fixed<<setprecision(10)<<n<<endl;
    }
    return 0;
}

