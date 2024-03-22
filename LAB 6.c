#include<stdio.h>
#define SIZE 10
int Q[SIZE],f=-1,r=-1;
main()
{
    int ch;
    for(;;)
    {
        printf("\n 1.insert\n 2.delete\n 3.display\n");
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
        }
    }
}
insert()
{
    int ele;
    if((f==0&&r==SIZE-1)||f==r+1)
    {
        printf("overflow\n");
        return 0;
    }
    printf("\n Enter the element to insert\n");
    scanf("%d",&ele);
    r=(r+1)%SIZE;
    Q[r]=ele;
    if(f==-1)
    {
        f=0;
    }
}
delete()
{

    if(f==-1||f>r)
    {
        printf("\n underflow\n");
        return 0;
    }
    printf("\n Enter the element to delete");
    printf("%d",Q[f]);
    f=(f+1)%SIZE;
}

display()
{
    int i;
    if(f==-1||f>r)
    {
        printf("\n empty\n");
        return 0;
    }
    printf("\n displayed element are:\n");
    for(i=f;i<=r;i++)
    {
        printf("%d\n",Q[i]);
    }
}
