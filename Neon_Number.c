#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,r,sum=0;
    scanf("%d",&n);
    sq=n*n;
    for(sum=0;sq>0;sq=sq/10){
        r=sq%10;
        sum=sum+r;
    }
    if(sum==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}