#include<iostream>
#include <math.h>
#include<queue>
using namespace std;
int main()
{
    int times,a,b,tmp,tmp1;
    queue<int> que;
    while(cin>>times)
    {


        for(int i=0; i<times; i++)
        {
            cin>>a>>b;
            tmp=sqrt(a);
            tmp1=0;
            for(;pow(tmp,2)<=b;)
            {
                if((pow(tmp,2)<=b)&&(pow(tmp,2)>=a))
                {
                    tmp1=tmp1+pow(tmp,2);
                }

                tmp++;
            }
            que.push(tmp1);
        }
        tmp=1;
        while(!que.empty())
        {
            cout<<"Case "<<tmp<<": "<<que.front()<<"\n";
            que.pop();
            tmp++;
        }
    }
    return 0;
}
