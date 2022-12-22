#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int t=n,rev=0;
    while(n)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("%d",rev);
}