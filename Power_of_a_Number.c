#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,r,p;
    scanf("%d%d%d",&a,&b,&c);
    p=pow(a,b);
    r=p%c;
    printf("%d",r);
}