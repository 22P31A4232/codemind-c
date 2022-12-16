#include<stdio.h>
int main()
{
    int n,i,avr=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avr=sum/n;
    for(i=0;i<n;i++)
    {
    if(avr==a[i])
      {
        avr=1;
        break;
      }
    }
    if(avr==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}