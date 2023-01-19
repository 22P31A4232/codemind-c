#include<stdio.h>
int main()
{
    int n,a,i,b;
    scanf("%d%d%d",&n,&a,&b);
    for(i=1;i<=a;i++)
    {
        printf("%d x %d = %d
",n,i,(n*i));
    }
}