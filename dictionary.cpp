#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,tem,index1=0,index2=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        index1 = s[0] - '0';
        index1 -= 49;
        index2 = s[1] - '0';
        index2 -= 49;
        tem = (index1*25)+index2;
        if(s[0] < s[1] && s[0] > 'a'){
            tem -= index1;
            cout<<tem+1<<endl;
        }
        else
            cout<<tem<<endl;
        index1 = index2 = 0;
    }
    return 0;
}