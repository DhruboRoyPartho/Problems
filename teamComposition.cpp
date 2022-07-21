#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,count=0;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x == y){
            x /= 2;
            cout<<x<<endl;
        }
        else if(x < y){
            while((x+y) > 4 && x > 0 && y > 0){
                x--;
                y -= 3;
                if(x >= 0 && y >= 0) count++;
            }
            cout<<count<<endl;
            count = 0;
        }
        else if(x > y){
            while((x+y) > 4 && x > 0 && y > 0){
                y--;
                x -= 3;
                if(x >= 0 && y >= 0) count++;
            }
            cout<<count<<endl;
            count = 0;
        }
    }
}