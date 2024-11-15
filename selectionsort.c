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
void selection_sort()
{
    for(int i=0;i<n-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index = j;
            }
        }
        if(min_index!=i)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
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
    selection_sort();
    display_sorted_array();
}
