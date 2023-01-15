#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int rev=0,t=n;
    while(n)
    {
       r=n%10;
       rev=(rev*10)+r;
       n=n/10;
    }
    if(t==rev)
{
    printf("Palindrome");
}
else
{
    printf("Not Palindrome");
}
}