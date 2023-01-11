#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        printf("monday");
    }
    else if(d==2)
    {
        printf("tuesday");
    }
    else if(d==3)
    {
        printf("wednesday");
    }
    else if(d==4)
    {
        printf("thursday");
    }
    else if(d==5)
    {
        printf("friday");
    }
    else if(d==6)
    {
        printf("saturday");
    }
    else if(d==7)
    {
        printf("sunday");
    }
    else
    {
        printf("invalid input");
    }
}