#include<iostream>
#include <math.h>
#include <queue>
using namespace std;


long long int rec(long long int  x)
{
    if(x<=1)
        return 1;
    if(x==2)
    return 2;
    else
        return x*rec(x-1);
}

main()
{

    long long int n;
    while(cin>>n)
    {
        cout<<rec(n)<<"\n";
    }
    return 0;
}
