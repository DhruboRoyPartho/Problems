#include<bits/stdc++.h>
using namespace std;

int pow(int a, int b)
{
    if(b == 0) return 1;
    b--;
    while(b--){
        a*=2;
    }
    return a;
}

int main()
{
    int len,i,bit,char_num=0,k=1;
    string bin,word;
    cout<<"Enter a Binary code: ";
    cin>>bin;
    for(len=0;len<=bin[len];len++){}
    for(i=0;i<len;i++){
        if(bin[i] != ' '){
            bit = bin[i] - '0';
            char_num += bit * pow(2, 8-k);
            k++; 
        }
        else{
            k = 1;
        }
        char w = char_num + '0';
        cout<<w;
        char_num = 0;
    }
    cout<<char_num<<endl;
    return 0;
}