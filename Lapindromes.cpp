/*
Om-Tat-Sat
Author: Dhrubo Roy Partho
        Information and Communication Engineering, University of Rajshahi
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t,len,h0,l1,h1,tem,n,k=0;
    string str;
    cin>>t;
    while(t--){
        char s[1000]={0},s2[1000]={0},temp_s[1000]={0};
        cin>>str;
        len = str.size();
        //cout<<len<<endl;
        if(len%2 == 0){
            h0 = len/2 - 1;
            l1 = len/2;
            h1 = len-1;
            //cout<<"h0,l1,h1 : "<<h0<<","<<l1<<","<<h1<<endl;
        }
        else{
            h0 = len/2 - 1;
            l1 = len/2+1;
            h1 = len-1;
            //cout<<"l0,h0,l1,h1 : "<<"0,"<<h0<<","<<l1<<","<<h1<<endl;
        }
        for(int i=0;i<=h0;i++){
            s[i] = str[i];
        }
        tem = l1;
        for(l1;l1<=h1;l1++){
            s2[l1-tem] = str[l1];
        }

        //cout<<s<<","<<s2<<endl;

        n = strlen(s2);
        
        while(n--){
            //cout<<"n: "<<n<<endl;
            //cout<<"k: "<<k<<endl;
            temp_s[k] = s2[n];
            k++;
        }
        k=0;
        
        //cout<<"temp_s:"<<temp_s<<endl;
        //cout<<"s:"<<s<<endl;
        //cout<<"s2:"<<s2<<endl;
        if(strcmp(s,temp_s) == 0 || strcmp(s,s2) == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}