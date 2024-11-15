#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {
        printf("Given values form an equilateral triangle");
    }
    else if (a==b||b==c||a==c)
    {
        printf("Given vaalues form a Isosceles triangle ");

    }
    else
    {
        printf("Given values form a scalene triangle");
    }
    
    return 0;
}