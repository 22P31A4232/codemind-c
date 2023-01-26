#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float uc,sr,bill,tb;
    if(u<200)
    {
        uc=1.20;
        bill=u*uc;
    }
    else if(u>=200 && u<400)
    {
        uc=1.40;
        bill=u*uc;
    }
    else if(u>=400 && u<600)
    {
        uc=1.60;
        bill=u*uc;
    }
    else if(u>=600 && u<800)
    {
        uc=1.80;
        bill=u*uc;
    }
    else
    {
        uc=2.00;
        bill=u*uc;
    }
    if(bill>400)
    {
        sr=bill*0.15;
        tb=sr+bill;
    }
    else
    {
        tb=sr+bill;
    }
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %0.2f
",uc);
    printf("Bill: %0.2f
",bill);
    printf("Surcharge: %0.2f
",sr);
    printf("Total Amount: %0.2f",tb);
}