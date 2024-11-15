#include<stdio.h>
void main()
{
    int a[100];
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(int p=0;p<n-1;p++)
        {
            for(int s=0;s<n-p-1;s++)
            {
                if(a[s]>a[s+1])
                {
                    int temp=a[s];
                    a[s]=a[s+1];
                    a[s+1]=temp;
                }
            }
        }

    for(int l=0;l<n;l++)
    {
        printf("%d ",a[l]);
    }
}