#include<stdio.h>
int main()
{
    int t;
    printf("Enter the temperature in centigrade ");
    scanf("%d",&t);
    // int f=(t*9/5)+32;
    if(t<0)
    {
        printf("Frezzing weather");
    }
    else if (t>=0&&t<10)
        {
            printf("Very cold weahter");
        }
    else if(t>=10&&t<20)
    {
        printf("Cold weather");
    }    
    else if(t>=20&&t<30)
    {
        printf("Normal weather");
    }
    else if(t>=30&&t<40)
    {
        printf("Hot weather");
    }
    else
    {
        printf("Very hot weather");
    }
        
    
}