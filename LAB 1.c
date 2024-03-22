#include<stdio.h>
#include<stdlib.h>
struct calender
{
    char*day;
    char*desc;
    int dd,mm,yyyy;
};
struct calender *cal;
int n;

void create()
{
    printf("\nEnter the number of the day\n");
    scanf("%d",&n);
    cal=(struct calender*)calloc(n,sizeof(struct calender));
}
void read()
{
    int i;
    for(i=0;i<n;i++)
    {

        printf("\nEnter the day\n");
        cal[i].day=(char*)malloc(20*sizeof(char));
        scanf("%s",cal[i].day);

        printf("\nEnter the date month year\n");
        scanf("%d%d%d",&cal[i].dd,&cal[i].mm,&cal[i].yyyy);

        printf("\nEnter the description\n");
        cal[i].desc=(char*)malloc(20*sizeof(char));
        fflush(stdin);
        gets(cal[i].desc);

    }
}
void display()
{
    int i;
    printf("\nDAY\tDATE\tDESCRIPTION\n");
    printf("__________________________");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t%d %d %d\t",cal[i].day,cal[i].dd,cal[i].mm,cal[i].yyyy);
        puts(cal[i].desc);
    }
}
void main()
{
    create();
    read();
    display();
}
