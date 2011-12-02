#include<iostream>
#include <math.h>

using namespace std;
int main()
{
    int a,b,c,s,k;
    int temp=0,t;
    while(scanf("%d",&a)==1)
    {

        t=0;
        if(a==1)
        {
            cout<<"No...\n";
        }
        else
        {
            temp=0;
            for(int i=2; i<a; i++)
            {
                t=a%i;
                if(t==0)
                {
                    temp=1;
                }


            }
            if(temp==1)
                cout<<"No...\n";
            else
                cout<<"Yes!!\n";

        }

    }

    return 0;
}
