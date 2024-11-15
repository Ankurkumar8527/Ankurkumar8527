// Radix sort
#include<stdio.h>
int a[100],c[100],b[100],n;
void array_in()
{
    printf("Enter the elments of array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int getmax()
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
void count_sort(int d)
{
    c[10]={0};
    for(int i=0;i<n;i++)
    {
        c[a[i]/d%10]++;
    }
    for(int i=1;i<10;i++)
    {
        c[i]=c[i]+c[i-1];
        }
    for(int i=)    
}
void radix_sort() 
{
   int  max=getmax();
   for(int d=1;max/d>0;d*=10)
   {
    count_sort(d);
   }
}
void display_sorted_array()
{
    printf("Sorted array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
void main()
{
    printf("Enter the no of element of array ");
    scanf("%d",&n);
    array_in;
    // count_sort();
    display_sorted_array();
}