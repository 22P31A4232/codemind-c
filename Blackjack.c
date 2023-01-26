#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=21-(a+b);
    if(c==1 || c==2||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==10)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}