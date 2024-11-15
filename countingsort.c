// Countin sort
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
void count_sort()
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    for(int i=0;i<max+1;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    for(int i=1;i<max+1;i++)
    {
        c[i]=c[i-1]+c[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
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
    array_in();
    count_sort();
    display_sorted_array();
}