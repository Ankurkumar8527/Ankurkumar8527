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
void linear_search()
{
   int flag=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]==ele)
    flag++;
   }
   if(flag>0)
   {
    printf("Element found at position ");
   }
   else
   {
    printf("Element not found");
   }

}
void main()
{
    printf("Enter the no of elements of array ");
    scanf("%d",&n);
    array_in();
    printf("Enter the element to be searched ");
    scanf("%d",&ele);
    linear_search();
}