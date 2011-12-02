/**********************************************************************************/
/*  Problem: d489 "伏林的三角地" from 板橋高中                          */
/*  Language: CPP                                                                 */
/*  Result: AC (6ms, 2292KB) on ZeroJudge                                         */
/*  Author: marksein at 2009-12-01 22:22:06                                       */
/**********************************************************************************/


#include<iostream>
#include <math.h>

 using namespace std;
 int main() {
      int a,b,c,s,k;
      while(scanf("%d %d %d",&a,&b,&c)==3){
           s=(a+b+c)/2;
           k=s*(s-a)*(s-b)*(s-c);
           //k=sqrt(k);
           cout<<k;


      }
      system ("pause");

      return 0;
 }
