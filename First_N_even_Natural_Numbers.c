#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        a=i*2;
        printf("%d ",a);
    }
}