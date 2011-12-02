//(n-1)+((n*n-n+2)/2);
#include<iostream>
#include <math.h>
using namespace std;
int c(int n)
{
    if(n==1)
    return 2;
    else
    return c(n-1)+((n*n-n+2)/2);
}

int main()
{
    int a;
    while(cin>>a)
    {
        cout<<c(a)<<"\n";
    }
    return 0;
}
