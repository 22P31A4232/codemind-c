#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=sqrt(n);
    if(n==a*a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}