#include<stdio.h>
void main()

{
    int x,y;
    printf("Enter the first point coordinates (x1,y1): ");
    scanf("%d%d",&x,&y);
     if(x>0&&y>0)
    {
        printf("The first point is in the first quadrant.");
    }
    else if(x<0&&y>0)
    {
        printf("The first point is in the second quadrant.");
    }
    else if(x<0&&y<0)
    {
        printf("The first point is in the third quadrant.");
    }
    else
    {
        printf("The first point is in the fourth quadrant.");
    }
}