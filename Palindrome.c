#include<stdio.h>
int main()
{
    int n,r,rev=0;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}