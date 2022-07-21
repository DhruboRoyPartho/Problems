//Binary Search
#include<bits/stdc++.h>
using namespace std;

int binary_search(int data[], int n, int x){
    int left = 0, right = n-1, mid;

    while(left <= right){
        mid = (left + right) / 2;
        if(data[mid] == x) return mid;
        if(data[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main()
{
    int data[]={1, 2, 4, 6, 9, 11, 15, 30, 37, 40, 100, 240, 300};
    int i,len;
    cout<<"What number do you want to search: ";
    cin>>i;
    for(len=0;data[len];len++){}
    int rt = binary_search(data, len, i);
    cout<<"We found this in index: "<<rt<<endl;
    return 0;
}