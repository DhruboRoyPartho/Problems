#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,a,b,c,d,e,i=1,move=0;
    row=col=0;
    for(i;i<=5;i++){
        cin>>a>>b>>c>>d>>e;
        if(a == 1){
            col = 1;
            row = i;
        }
        if(b == 1){
            col = 2;
            row = i;
        }
        if(c == 1){
            col = 3;
            row = i;
        }
        if(d == 1){
            col = 4;
            row = i;
        }
        if(e == 1){
            col = 5;
            row = i;
        }
    }
    while(1){
        if(row > 3){
            row--;
            move++;
        }
        if(row < 3){
            row++;
            move++;
        }
        if(col > 3){
            col--;
            move++;
        }
        if(col < 3){
            col++;
            move++;
        }
        if(row == 3 && col == 3){
            cout<<move<<endl;
            return 0;
        }
    }
}