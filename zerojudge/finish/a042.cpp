

#include<iostream>
#include <math.h>

 using namespace std;
 int main()
{
    int a;
    while(cin>>a)
    {
        a=pow(a,2)-a+2;
        cout<<a<<"\n";
    }

    return 0;
}
