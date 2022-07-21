/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,row,col,mat[1000][1000],max=0;
    cin>>t;
    while(t--){
        cin>>row>>col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>mat[i][j];
                if(max < mat[i][j]) {
                    max = mat[i][j];
                }
            }
        }
    }
}