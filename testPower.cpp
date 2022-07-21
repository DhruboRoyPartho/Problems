#include<stdio.h>

int pow(int a, int b)
{
    b--;
    while(b--){
        a*=2;
    }
    return a;
}

int main()
{
    int a = pow(2,4);
    printf("%d",a);
    return 0;
}