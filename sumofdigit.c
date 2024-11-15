#include<stdio.h>
// using recurssion
int sumofdigit(int n,int sum)
{
    if(n==0)
    return sum;
    return sumofdigit(n/10,sum+n%10);
}
void main()
{
    int n,sum=0;
    printf("Enter the no ");
    scanf("%d",&n);
    printf("sum of digits = %d",sumofdigit(n,sum));
}
