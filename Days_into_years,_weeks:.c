#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    int y,w;
    y=d/365;
    w=(d%365)/7;
    printf("%d
",y);
    printf("%d",w);
}