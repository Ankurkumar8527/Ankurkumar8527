#include<stdio.h>
int a[100],n;
void array_in()
{
    printf("Enter the elments of array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void insertion_sort()
{
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        while(j>0 && a[j-1]>a[j])
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
}
void display_sorted_array()
{
    printf("Sorted array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    printf("Enter the number of elements in array ");
    scanf("%d",&n);
    array_in();
    insertion_sort();
    display_sorted_array();
}


