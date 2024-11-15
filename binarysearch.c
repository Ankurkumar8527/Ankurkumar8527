#include<stdio.h>
#include<math.h>
int a[100],n,ele;
void array_in()
{
    printf("Enter the elments of array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void binary_search()
{
    int l=0,r=n-1,mid,flag=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]<ele)
        {
            l=mid+1;
        }
        else if(a[mid]>ele)
        {
            r=mid-1;
        }
        else if(a[mid]==ele)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found at index %d",mid);
    }
    else{
        printf("Element not found");
    }
}
void main()
{
    printf("Enter the no of elements ");
    scanf("%d",&n);
    array_in();
    printf("Enter the elements to be searched ");
    scanf("%d",&ele);
    binary_search();
}