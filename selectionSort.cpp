//Selection Sort
#include<bits/stdc++.h>
using namespace std;
 
void selection_sort(int data[], int n)
{
    int i, j, index_min, temp;
    for(i=0;i<n-1;i++){
    index_min = i;
for(j=i+1;j<n;j++){
    if(data[index_min] > data[j]){
    index_min = j;
}
}
if(index_min != i){
    temp = data[i];
    data[i] = data[index_min];
    data[index_min] = temp;
}
}
}
 
int main()
{
    int data[] = {6, 3, 8, 10, 12, 20, 25, 21, 2};
    int len;
for(len=0;data[len];len++){}
selection_sort(data, len);
for(int i=0;i<len;i++){
    cout<<data[i]<<" ";
}
return 0;
}
