#include<stdio.h>
int reverse(int n,int rev)
{
    
    if(n==0)
    return rev;

    return reverse(n/10,rev*10+n%10);
}
void main()
{
    int n,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("revese of a number = %d",reverse(n,rev));
}