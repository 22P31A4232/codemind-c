#include<stdio.h>
int main()
{
    int  a,b,c,x;
    scanf("%d%d%d",&c,&a,&b);
    x=(1*a)+(2*b);
    if(x>=c)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}