#include<bits/stdc++.h>
using namespace std;

int linear_search(int data[], int n, int x)
{
    int i;
    for(i=0;i<n;i++){
        if(data[i] == x) return i;
    }
    return -1;
}

int main()
{
    int data[10] = {12, 35, 9, 67, 2, 100, 500, 345, 1, 20};
    int rt,x;
    cout<<"What number do you want to search: ";
    cin>>x;
    rt = linear_search(data, 10, x);
    if(rt != -1) cout<<"Wow, I have seen it in index : "<<rt<<endl;
    else cout<<"Sorry I didn't see it anywhere."<<endl;
    return 0;
}