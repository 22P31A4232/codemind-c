#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf,gs;
    pf=(12*bs)/100;
    gs=bs+hra+da+pf;
    printf("%0.2f
",pf);
    printf("%0.2f",gs);
}