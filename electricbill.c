#include<stdio.h>
void main()
{
    int uc,fc=200,tb;
    printf("Enter the unit consumption : ");
    scanf("%d",&uc);
    if(uc<=200)
    {
        tb=220+220*0.05;
        printf("%d",tb);
    }
}