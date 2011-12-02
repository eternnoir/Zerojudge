#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,tem1,tem,count,flag;
    while(scanf("%d %d",&a,&b)==2)
    {
        flag=0;
        for(; a<=b; a++)
        {
            tem=a;
            tem1=count=0;
            while(tem!=0)   //Count figure
            {
                tem=tem/10;
                count++;
            }
            tem=a;
            while(tem!=0)   //count number^finure
            {
                tem1=pow((tem%10),count)+tem1;
                tem=tem/10;
            }
            if(tem1==a)
            {
                flag=1;
                cout<<a<<" ";
            }

        }
        if(flag==0)
            cout<<"none"<<"\n";
        else
            cout<<"\n";
    }



    return 0;
}
