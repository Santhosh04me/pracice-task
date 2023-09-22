#include <stdio.h>

int main()
{
   double ltr ,a=3.30,b=6.50,c=8.75;
   int ac,bc,cc;
   scanf("%lf",&ltr);
   while (a<ltr)
   {
       if(a<ltr)
       {
           ltr-=a ;
           ac++;
       }
       if(b<ltr)
       {
           ltr-=b ;
           bc++;
       }
       if(c<ltr)
       {
           ltr-=c ;
           cc++;
       }
   }
   printf(" No of buckets :%d\n ",ac);
   printf("No of buckets :%d\n ",bc);
   printf("No of buckets :%d\n ",cc);
   printf("Excess Milk: %.3lf litrs ",ltr);
    return 0;
}

