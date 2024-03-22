#include<stdio.h>
#include<stdlib.h>




struct calendar{
    char *day;
    int dd,mm,yyyy;
    char *desc;

};
struct calendar *cal;
int n,n1,n2;

void create()
{

    printf("Enter number of days:");
    scanf("%d",&n);
    cal=(struct calendar*)malloc(n*sizeof(struct calendar));

}

void read()
{

    printf("Enter the data for mentioned number of days");
    for(int i=0;i<n;i++)
    {

        printf("Enter size for the day");
        scanf("%d",&n1);
        cal[i].day=(char*)malloc(n1*sizeof(char));
        printf("Enter size of the description");
        scanf("%d",&n2);
        cal[i].desc=(char*)malloc(n2*(sizeof(char)));

        printf("enter day date and description");
        scanf("%s%d%d%d",cal[i].day,&cal[i].dd,&cal[i].mm,&cal[i].yyyy);
        fflush(stdin);
        gets(cal[i].desc);
    }
}

void display()
{
    printf("Entered data is:\n");
    printf("DAY\tdate\tdesc");



    for (int i=0;i<n;i++)
    {

        printf("\n%s\t%d/%d/%d\t",cal[i].day,cal[i].dd,cal[i].mm,cal[i].yyyy);
        puts(cal[i].desc);


    }
}

void main()
{
    create();
    read();
    display();
}

