#include<stdio.h>
float compute (char,float,float);
main()
{
    char postfix[30],sym;
    float S[20],op1,op2,res;
    int top=-1;
    int i;
    printf("Enter the expression\n");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        sym=postfix[i];
        if(isdigit(sym))
        {
            S[++top]=sym-'0';
        }
        else
        {
            op2=S[top--];
            op1=S[top--];
            res=compute(sym,op1,op2);
            S[++top]=res;
        }
    }
    res=S[top];
    printf("%f",res);
}
float compute (char sym,float op1,float op2)
{
    switch(sym)
    {
    case '+':return(op1+op2);
    break;
    case '-':return(op2-op1);
    break;
    case '*':return(op1*op2);
    break;
    case '/':return(op2/op1);
    break;
    }
}
