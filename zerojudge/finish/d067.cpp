
#include<iostream>
#include <math.h>

 using namespace std;
 int main() {
      int a,b,c,s,k;
      while(scanf("%d",&a)==1){
          if(a%4==0)
          {
            if(a%400==0)
            cout<<"a leap year";
            else if(a%100==0)
            cout<<"a normal year";
            else
            cout<<"a leap year";
          }
          else
          {
              cout<<"a normal year";
          }


      }

      return 0;
 }
