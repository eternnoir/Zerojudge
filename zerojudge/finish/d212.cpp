#include<iostream>
#include <math.h>
using namespace std;

main()
{
    unsigned long long int a,b;
    while(cin>>a)
    {
        if(a==1)
            cout<<"1"<<"\n";
        else
        {

            a=a++;
            b=(1/sqrt(5))*(pow(((1+sqrt(5))/2),a)-pow(((1-sqrt(5))/2),a));
            cout<<b<<"\n";
        }
    }

    return 0;
}
