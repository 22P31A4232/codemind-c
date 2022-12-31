#include<stdio.h>
#include<math.h>
int main()
{
   int n,sq,rem,sum;
   scanf("%d",&n);
   sq=pow(n,2);
   for(sum=0;sq>0;sq=sq/10)
   {
       rem=sq%10;
       sum=sum+rem;
   }
   if(sum==n)
   {
       printf("Neon Number");
   }
   else
   {
       printf("Not Neon Number");
   }
}