#include<stdio.h>
f(symbol)
{
    switch(symbol)
    {
    case '-':
    case '+':return 1;
    case '*':
    case '/':return 3;
    case '^':
    case '$':return 6;
    case ')':return 0;
    case '#':return -1;
    default:return 8;
    }
}
g(symbol)
{
    switch(symbol)
    {
    case '-':
    case '+':return 2;
    case '*':
    case '/':return 4;
    case '^':
    case '$':return 5;
    case '(':return 0;
    case ')':return 9;
    default:return 7;
    }

}
char postfix[20],infix[20];
int i,j=0,top=-1;
main()
{
    printf("Enter the infix expression\n");
    scanf("%s",&infix);
    infix_to_postfix();
    printf("postfix expression is %s",postfix);
    }
    infix_to_postfix()
    {
        char s[20],symbol;
        s[++top]='#';
        for(i=0;infix[i]!='\0';i++)
        {
            symbol=infix[i];
            while(f(s[top])>g(symbol))
                postfix[j++]=s[top--];
                if(f(s[top])!=g(symbol))
            s[++top]=symbol;
            else
                top--;
        }
        while(s[top]!='#')
             postfix[j++]=s[top--];
        postfix[i]='\0';
    }
