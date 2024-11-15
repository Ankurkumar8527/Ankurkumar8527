#include<stdio.h>
int stack[20],top=-1,n,x,choice;
void push()
{
    if(top>=n-1)
    {
        printf("Overflow ");
    }
    else
    {
        printf("Enter the elements of stack ");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow ");
    }
    else
    {
        printf("Deleted elements =%d ",stack[top]);
        top=top-1;
    }
}
void display()
{
    for(int i=top;i>-1;i--)
    {
        printf("%d ",stack[i]);
    }
}
void main()
{
    int c;
    printf("Enter size of stack ");
    scanf("%d",&n);
    printf("Enter the case from 1 to 3");
    scanf("%d",&c);
    do
    {
        switch(c)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3:display();
                    break;
             case 4:exit(0);
                    break;        

        }
    }
    while(c!=4);
}
