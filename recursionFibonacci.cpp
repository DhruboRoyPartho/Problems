#include <iostream>
using namespace std;

void print_fib(int n)
{
    static int n1 = 0,n2 = 1,n3;
    if(n>0){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout<<n3<<" ";
        print_fib(n-1);
    }
}

int main() {
    int n;
    cin>>n;
    cout<<"0 1 ";
    print_fib(n-2);
    return 0;
}