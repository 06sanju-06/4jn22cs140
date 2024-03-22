#include<stdio.h>
char str[100],pat[100],repl[100],ans[100];
int c,i,m,j,y,k;
int main()
{
    read();
    match();
}
void read()
{
    printf("Enter the string\n");
    gets(str);
    printf("Enter the pattern\n");
    gets(pat);
    printf("Enter the replace\n");
    gets(repl);
}
void match()
{
    c=i=m=j=0;
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
        i++;
        m++;
        if(pat[i]=='\0')
        {
            y=1;
            for(k=0;repl[k]!='\0';k++,j++)
            {
                ans[j]=repl[k];
            }
                i=0;
                c=m;
            }
        }
        else
        {
            ans[j]=str[c];
        j++;
        c++;
        m=c;
        i=0;
    }

}
ans[j]='\0';
if(y==1)
    printf("resultant string is:%s",ans);
else
    printf("string is not  found");
}
