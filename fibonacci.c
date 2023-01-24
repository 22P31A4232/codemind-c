#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",sum);
        a=b;
        b=sum;
        sum=a+b;
    }
}