#include<stdio.h>
int main()
{
    int a,r,sum=0,pro=1;
    scanf("%d",&a);
    for(;a>0;)
    {
        r=a%10;
        sum=sum+r;
        pro=pro*r;
        a=a/10;
    }
    if(pro==sum)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
