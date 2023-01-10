#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    int a=(p+c+b+m+cs)/5;
    if(a>=90)
    {
        printf("Grade A");
    }
    else if(a>=80 && a<=90)
    {
        printf("Grade B");
    }
    else if(a>=70 && a<=80)
    {
        printf("Grade C");
    }
    else if(a>=60 && a<=70)
    {
        printf("Grade D");
    }
    else if(a>=40 && a<=60)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}