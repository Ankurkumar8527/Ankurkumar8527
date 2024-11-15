#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
top=-1;
int stack[100];
void infixtopostfix(char *infix,char *postfix)
{
    int i,j;
    char item;
    char x;
    push("(");/*push '(' onto stack */
    strcat(infix,')');
    char item=infix[i];
    while(item !='\0')
    {
        x=pop();
        if(isdigit(x)||isalpha(x))
        {
            postfix[j]=x;
            j++;
        }
        else if(isoperator(item==1))
        {
            while (isoperator(item)==1 && isprecedence(x)>=isprecedence(item))            {
                x=pop();
                postfix[j]=x;
                j++;
                push(item);
            }
            push(x);
            push(item);
                }
                else if(item==')')
                {
                    while(item!='(')
                    {
                        x=pop();
                        postfix[j]=x;
                        j++;
                        i++;
                    }
                    item=infix[i];
                }
    }
}
isprecedence(char op)
{
    if(op=='^')
    return 3;
    else if(op=='*'||op=='/')
    return 2;
    else if(op=='+'||op=='-')
    return 1;
    else
    return 0;

}
isoperator(char op)
{
    if(op=='^'||op=='/'||op=='*'||op=='+'||op=='-')
    {
        return 1;
    }
    else
    return 0;
}
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