#include <stdio.h>
#include<math.h>

int main()
{
  int n,squr,rem,sum;
  scanf("%d",&n);
  squr=pow(n,2);
  for(sum=0;squr>0;squr=squr/10)
  {
    rem=squr%10;
    sum=sum+rem;
  }

  if (n==sum)
  {
    printf("Neon Number");
  }
  else
  {
    printf("Not Neon Number");
  }
}